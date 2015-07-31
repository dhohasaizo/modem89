/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ipc_rpc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This function implements file system adaptation layer with CCCI interfaces.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/


#if defined(__MODEM_CCCI_EXIST__)

#include <stdarg.h>

#include "kal_public_api.h"
#include "tst_trace.h"

#include "ccci.h"
#include "ipc_rpc.h"

#include "ccci_rpcsvc.h"
#include "ccif.h"

/*******************************************************************************
 * Define import global variables.
 *******************************************************************************/
extern kal_bool  ccci_debug_phychan_full;

/*******************************************************************************
 * Define import function prototype.
 *******************************************************************************/
extern void CCCI_Invalid_Callback(CCCI_BUFF_T *bufp);

/*******************************************************************************
 * Define global variables.
 *******************************************************************************/

pIPC_RPC_StreamBuffer_T IPC_RPC_REQ_BUF[IPC_RPC_REQ_BUFFER_NUM];

// separate variables in AP and MD sides
kal_uint32 IPC_RPC_ReadIndex = 0;
kal_uint32 IPC_RPC_WriteIndex = 0;
kal_uint32 IPC_RPC_BufCount = 0;
kal_semid  g_IPC_RPC_SemId = NULL;
kal_char   ccci_rpc_debug_info[70];

kal_uint32 IPC_RPC_ShareBuffer_BlockSize;
extern kal_bool kal_query_systemInit(void);
extern kal_bool INT_QueryExceptionStatus(void);


/* Separate to AP or MD side */

/* Modem part */
kal_semid       g_IPC_RPC_CSSemId = NULL;
kal_eventgrpid  g_IPC_RPC_CSEvgrp = NULL;
static kal_bool lock_RW = (kal_bool)1;

/* define critical section owner */
#define IPC_RPC_ENTER_CRITICAL_SECTION     if (KAL_TRUE == kal_query_systemInit()  || INT_QueryExceptionStatus() == KAL_TRUE) \
                                           {                                                                                  \
                                               lock_RW--;                                                                     \
                                           }                                                                                  \
                                           else                                                                               \
                                           {                                                                                  \
                                               kal_take_sem(g_IPC_RPC_CSSemId, KAL_INFINITE_WAIT);                            \
                                           }

#define IPC_RPC_LEAVE_CRITICAL_SECTION     if (KAL_TRUE == kal_query_systemInit()  || INT_QueryExceptionStatus() == KAL_TRUE) \
                                           {                                                                                  \
                                               lock_RW++;                                                                     \
                                           }                                                                                  \
                                           else                                                                               \
                                           {                                                                                  \
                                               kal_give_sem(g_IPC_RPC_CSSemId);                                               \
                                           }


/*************************************************************************
* FUNCTION
*  void IPC_RPC_Write
*
* DESCRIPTION
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_CCCI_Write(kal_int32 *index, kal_uint32 op, IPC_RPC_LV_T *pLV, kal_uint32 num)
{
    kal_uint32 i, len = 0, tlen;
    kal_uint8 *ptr;
    kal_uint8 *ptr_buf_boundary;
    IPC_RPC_LV_T *pTmp;
    kal_int32 windex = IPC_RPC_USE_DEFAULT_INDEX;
    kal_int32 ret = 0;
    kal_int32 retry = IPC_RPC_MAX_RETRY;


    IPC_RPC_ENTER_CRITICAL_SECTION;

    if ( INT_QueryExceptionStatus() == KAL_TRUE ) retry = IPC_RPC_EXCEPT_MAX_RETRY;

    if (*index == IPC_RPC_USE_DEFAULT_INDEX)
    {
        if (IPC_RPC_BufCount == IPC_RPC_REQ_BUFFER_NUM)
        {
            IPC_RPC_LEAVE_CRITICAL_SECTION;
            return IPC_RPC_CCCI_ERROR_SHARE_BUFFER_UNAVALIABLE;
        }

        for (i=0; i<IPC_RPC_REQ_BUFFER_NUM; i++)
        {
            if (IPC_RPC_WriteIndex & (0x1 << i))
            {
                continue;  /* KC: the channel is used by others */
            }
            else
            {
                windex = i; /* KC: get a full channel */

                break;
            }
        }

        if (IPC_RPC_REQ_BUFFER_NUM == i)
        {
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_WRITE_BUFFER_FULL, op, IPC_RPC_WriteIndex);
        }

    }
    else if (*index < 0)
    {
        EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_BUFFER_INDEX_INVALID, op, *index);
    }
    else
    {
        windex = *index;
        //- check if occupied
        if (IPC_RPC_WriteIndex & (0x1 << windex))
        {
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_BUFFER_INDEX_OCCUPIED, IPC_RPC_WriteIndex, windex);
        }
    }

    ptr_buf_boundary = (kal_uint8*)(IPC_RPC_REQ_BUF[windex]) + IPC_RPC_ShareBuffer_BlockSize;
    IPC_RPC_REQ_BUF[windex]->rpc_opid = op;
    IPC_RPC_REQ_BUF[windex]->num      = num;
    //- point to LV[0]
    ptr = (kal_uint8*)IPC_RPC_REQ_BUF[windex] + 2*sizeof(kal_uint32);
    for(i=0; i<num; i++)
    {
        // adjusted to be 4-byte aligned
        tlen = ((pLV[i].len + 3) >> 2) << 2;

        if ((ptr + sizeof(kal_uint32) + tlen) > ptr_buf_boundary)
        {
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_INPUT_PARAM_LEN_TO_LONG, op, IPC_RPC_ShareBuffer_BlockSize);
        }

        //- point to LV[i]
        pTmp = (IPC_RPC_LV_T *)ptr;

        pTmp->len = pLV[i].len;
        kal_mem_cpy(ptr + sizeof(kal_uint32), pLV[i].val, pLV[i].len);

        //- adjust pointer to LV[i+1]
        ptr = ptr + sizeof(kal_uint32) + tlen;
    }

    len = (kal_uint32)(ptr - (kal_uint8*)(IPC_RPC_REQ_BUF[windex]));

    do
    {
        ret = ccci_stream_write_with_reserved(CCCI_IPC_RPC_CHANNEL, (kal_uint32)(IPC_RPC_REQ_BUF[windex]), len + sizeof(kal_uint32),windex);
        retry--;
    }
    while ((ret == CCCI_NO_PHY_CHANNEL) && (retry >= 0));

    if (ret == CCCI_NO_PHY_CHANNEL)
    {
        ccci_debug_phychan_full = 1;
        EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_WRITE_NO_PHYSICAL_CHANNEL, op, 0);
    }

    if (ret == CCCI_SUCCESS)
    {
        if (*index == IPC_RPC_USE_DEFAULT_INDEX)
        {
            /* only MD will get in */
            *index = windex;

        }
        IPC_RPC_WriteIndex |= (0x1 << windex);
        IPC_RPC_BufCount ++;

    }

    IPC_RPC_LEAVE_CRITICAL_SECTION;

    return ret;
}


/*************************************************************************
* FUNCTION
*  void IPC_RPC_Read
*
* DESCRIPTION
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_CCCI_Read(kal_int32 index, kal_uint32 op, IPC_RPC_LV_T *pLV, kal_uint32 *num)
{
    kal_uint32 i, no_copy = 0;
    kal_uint8 *ptr;
    kal_uint32 num_read;
    IPC_RPC_LV_T *pTmp;
    kal_uint32 v_tmp1, v_tmp2;
    kal_int32 ret, status;



    IPC_RPC_ENTER_CRITICAL_SECTION;

    if (!op && (IPC_RPC_BufCount == 0))
    {
        IPC_RPC_LEAVE_CRITICAL_SECTION;
        return IPC_RPC_CCCI_ERROR_BUFCOUNT_ZERO;
    }

    v_tmp1 = IPC_RPC_REQ_BUF[index]->rpc_opid;
    if (op && (v_tmp1 != (IPC_RPC_API_RESP_ID | op)))
    {
        sprintf(ccci_rpc_debug_info, "CCCI1 : 0x%08X, 0x%08X, 0x%08X", op, v_tmp1, IPC_RPC_REQ_BUF[index]->rpc_opid);
        tst_sys_trace(ccci_rpc_debug_info);
        EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_RETURN_OPID_NOT_SYNC, (IPC_RPC_API_RESP_ID | op), v_tmp1);
    }

    num_read = IPC_RPC_REQ_BUF[index]->num;
    if (op)
    {
        v_tmp1 = num_read;
        if (*num != num_read)
        {
            status = (kal_int32)(IPC_RPC_REQ_BUF[index]->LV0.val);
            sprintf(ccci_rpc_debug_info, "CCCI2 : 0x%08X, 0x%08X, 0x%08X, 0x%08X", *num, v_tmp1, num_read, (kal_uint32)status);
            tst_sys_trace(ccci_rpc_debug_info);
//-         EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_RETURN_PARAM_NUM_MISMATCH, op, num_read);
            ret = IPC_RPC_CCCI_ERROR_RETURN_PARAM_NUM_MISMATCH;
            if ((num_read == 1) && ((status < 0) && (status >= -10)))
            {
                ret = status;
            }
            if (!no_copy)
            {
                IPC_RPC_WriteIndex &= ~( 0x1 << index);

                //IPC_RPC_INC_BUF_INDEX(IPC_RPC_ReadIndex);
                IPC_RPC_BufCount--;
            }
            IPC_RPC_LEAVE_CRITICAL_SECTION;

            return ret;

        }
    }
    else
    {
        *num = num_read;
        no_copy = 1;
    }
    //- point to LV[0]
    ptr = (kal_uint8*)IPC_RPC_REQ_BUF[index] + 2*sizeof(kal_uint32);
    for(i = 0; i < *num; i++)
    {
        //- point to LV[i];
        pTmp = (IPC_RPC_LV_T *)ptr;

        v_tmp1 = pLV[i].len;
        v_tmp2 = pTmp->len;
        if (op && (v_tmp1 < v_tmp2))
        {
            sprintf(ccci_rpc_debug_info, "CCCI4 : 0x%08X, 0x%08X, 0x%08X", i, v_tmp1, v_tmp2);
            tst_sys_trace(ccci_rpc_debug_info);
            sprintf(ccci_rpc_debug_info, "CCCI5 : 0x%08X, 0x%08X, 0x%08X", op, pLV[i].len, pTmp->len);
            tst_sys_trace(ccci_rpc_debug_info);
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_RETURN_PARAMX_LEN_TO_LONG, v_tmp1, v_tmp2);
        }

        pLV[i].len = pTmp->len;
        if (no_copy)
        {
            pLV[i].val = (void *)(ptr + sizeof(kal_uint32));
        }
        else
        {
            kal_mem_cpy(pLV[i].val, ptr + sizeof(kal_uint32), pLV[i].len);
        }

        // adjusted to be 4-byte aligned
        ptr = ptr + (sizeof(kal_uint32) + (((pTmp->len + 3) >> 2) << 2));
    }

    if (!no_copy)
    {

        IPC_RPC_WriteIndex &= ~( 0x1 << index);

        IPC_RPC_BufCount--;
    }

    IPC_RPC_LEAVE_CRITICAL_SECTION;

    return CCCI_SUCCESS;
}


void IPC_RPC_Callback(CCCI_BUFF_T *buff)
{
    kal_uint32 addr = CCCI_STREAM_ADDR(buff);
    kal_uint32 IPC_RPC_OPINDEX = buff->reserved;

    /* Modem */

    if (addr != (kal_uint32)(IPC_RPC_REQ_BUF[IPC_RPC_OPINDEX]))
    {
        EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_RETURN_BASEADDR_NOT_SYNC, addr, (kal_uint32)(IPC_RPC_REQ_BUF[IPC_RPC_OPINDEX]));
    }

    kal_set_eg_events(g_IPC_RPC_CSEvgrp,  (1<< (IPC_RPC_OPINDEX)) , KAL_OR);

}


void IPC_RPC_Process_CMD(kal_int32 index)
{
    kal_status ev_result = KAL_NOT_PRESENT;
    kal_uint32 retrieved_events =0;


    if (KAL_TRUE == kal_query_systemInit() )
    {
        while (ev_result == KAL_NOT_PRESENT)
        {
            ev_result = kal_retrieve_eg_events(g_IPC_RPC_CSEvgrp, 1 << index, KAL_AND_CONSUME,  &retrieved_events, KAL_NO_SUSPEND);
            if (KAL_SUCCESS != ev_result)
            {
                while ( 0x0 == *MDCCIF_RCHNUM);
                ccif_lisr();
            }
            else
            {
                break;
            }
        }
    }
    else if (INT_QueryExceptionStatus() == KAL_TRUE)
    {
        while ( KAL_FALSE == ccci_chk_recentry_in_queue(CCCI_IPC_RPC_ACK_CHANNEL, KAL_TRUE));
    }
    else
    {
        ev_result = kal_retrieve_eg_events(g_IPC_RPC_CSEvgrp, 1 << index, KAL_AND_CONSUME ,  &retrieved_events, KAL_SUSPEND);
    }

}


/*************************************************************************
* FUNCTION
*  void IPC_RPC_Wrapper
*
* DESCRIPTION
*  This function use to handle real RPC between AP/MD
*
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
kal_int32 IPC_RPC_Wrapper(IPC_RPC_OP_ID_T ipc_op,...)
{
    kal_int32 index = IPC_RPC_USE_DEFAULT_INDEX;
    IPC_RPC_LV_T LV[IPC_RPC_MAX_ARG_NUM];
    kal_int32 	ret, count = 0 , size_val = 0;
    kal_uint32	num = 0;
    va_list ap;

    /* Start to fill the input paramter */
    va_start(ap, ipc_op);
    while ( (size_val = va_arg(ap,int)) != IPC_RPC_EOF_TERM_PATTERN )
    {
        /* If terminate pattern is found, that means the input is end */
        if (size_val == IPC_RPC_INPUT_TERM_PATTERN)
        {
            break;
        }

        if (count >= IPC_RPC_MAX_ARG_NUM)
        {
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_USER_INPUT_PARAM_FULL, ipc_op, count);
        }

        LV[count].len = (kal_uint32)size_val;
        LV[count++].val = (void *)(va_arg(ap,void *));

    }

    /* Pass the parameter to share memory */
    ret = IPC_RPC_CCCI_Write(&index, ipc_op, LV, count); // Ipc_Cpsvc_Read request

    /* Chceck the result */
    if (ret != CCCI_SUCCESS)
    {
        return ret;
    }

    /* Wait for AP response the RPC is finished */
    IPC_RPC_Process_CMD(index);


    /* fill the resturen code */
    LV[num].len = sizeof(kal_int32);
    LV[num++].val = (void *)&count;

    /* Start to get the return parameter */
    while ( (size_val = va_arg(ap,int)) != IPC_RPC_EOF_TERM_PATTERN )
    {
        if (num >= IPC_RPC_MAX_ARG_NUM)
        {
            EXT_ASSERT(0, IPC_RPC_CCCI_ERROR_USER_OUTPUT_PARAM_FULL, ipc_op, num);
        }


        LV[num].len = (kal_uint32)size_val;
        LV[num++].val = (void *)(va_arg(ap,void *));

    }

    /* Get the return information */
    ret = IPC_RPC_CCCI_Read(index, ipc_op, LV, &num);

    if (ret != CCCI_SUCCESS)
    {
        return ret;
    }
    else
    {
        return count;
    }

}

/*************************************************************************
* FUNCTION
*  void ipc_rpc_init
*
* DESCRIPTION
*
* PARAMETERS
*  *
* RETURNS
*  NA
*
*************************************************************************/
void ipc_rpc_init(void)
{
    kal_int32	i;
    kal_uint32	size;
    kal_uint8*   ptr;

    g_IPC_RPC_CSEvgrp = kal_create_event_group("IPC_DRV");
    g_IPC_RPC_CSSemId = kal_create_sem("IPC_RPCCS", 1);
    ccci_init(CCCI_IPC_RPC_CHANNEL, CCCI_Invalid_Callback);
    ccci_init(CCCI_IPC_RPC_ACK_CHANNEL, IPC_RPC_Callback);

    size = (ap_md_share_data.RpcShareMemSize / IPC_RPC_REQ_BUFFER_NUM);
    ptr = (kal_uint8 *) (ap_md_share_data.RpcShareMemBase);
    for (i=0; i<IPC_RPC_REQ_BUFFER_NUM; i++)
    {
        IPC_RPC_REQ_BUF[i] 			= (IPC_RPC_StreamBuffer_T *)(ptr);
        ptr += size;
    }
    IPC_RPC_ShareBuffer_BlockSize = size;
}

#endif /* __MODEM_CCCI_EXIST__ */
