/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * L4C_CC_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
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
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_CC_MSG_C
#ifdef __MOD_CSM__

#include <string.h>
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "stdio.h"
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "event_info_utility.h"
#include "drv_comm.h"
#include "device.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "ps2sat_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_msghdlr.h"
//#include "l4c_ft.h"
#include "l4_trc.h"
//#include "uart_sw.h"
#include "dcl.h"

//#include "l4_defs.h"
//#include "l4c_aux_struct.h"
#include "l3_inc_enums.h"

//#include "l3_inc_local.h"
#include "mcd_l3_inc_struct.h"
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mcd_ps2sat_peer.h"

#include "csmcc_atfunc.h"
#include "csmcc_common_enums.h"
#include "csmcc_defs.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
//#include "l4c2csm_ss_struct.h"
#include "l4c_ciss_cmd.h"

//#include "csmcc_enums.h"
//#include "Csmcc_bc_types.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mncc_struct.h"
#include "csmcc_types.h"

#ifdef __MOD_PHB__
//#include "l4c2phb_enums.h"
//#include "l4c2phb_struct.h"
#endif /* __MOD_PHB__ */ 
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_enum.h"
//#include "l4c_sms_cmd.h"
#endif /* __MOD_SMSAL__ */ 
#include "ppp_l4_enums.h"
//#include "abm_soc_enums.h"
#include "l4c2abm_struct.h"
#include "abm2l4c_struct.h"
#include "l4c2ppp_struct.h"
#include "ppp2l4c_struct.h"
#include "l4c_utility.h"
//#include "l4c_ss_parse.h"
#include "l4c_cc_cmd.h"
#include "l4c_cc_msg.h"
#include "rmmi_rspfmttr.h"
#include "lmmi_rsp.h"
//#include "l4c2smu_struct.h"
//#include "keypad_sw.h"
#include "lmmi_ind.h"
#include "l4c2rac_struct.h"

#ifdef __CSD_FAX__
#include "csm_data_enums.h"
#include "l4c2t30_struct.h"
//#include "l4c2t30_enums.h"
#endif /* __CSD_FAX__ */ 

#include "rmmi_utility.h"

#include "l4crac_enums.h"

#include"ps2sat_struct.h"
#include "sat_def.h"

#include "rmmi_rsp.h"
#include "rmmi_ind.h"
#include "l4c_sim_cmd.h"
//#include "csmcc_utility.h"

#include "rmmi_msghdlr.h"
#include "l4_event_info_trc.h"

#ifdef __EXT_MODEM__
#include "ext_modem_l4c_struct.h"
#include "custom_data_account.h"
#endif /* __EXT_MODEM__ */ 

#include "l4c_nw_cmd.h"

#if defined(__TC01__)  && !defined(EXTERNAL_MMI) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
#endif

/* MAUI_02532440 mtk02126 add for l4c_ps_disc_ppp_dialup_req() */
#ifdef __MOD_TCM__
#include "l4c2abm_struct.h"
//#include "l4c2tcm_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "l4c2tcm_func.h"
#include "l4c_gprs_cmd.h"
#endif /* ~__MOD_TCM__ */

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
//#include "kal_common_defs.h"
#include "custom_ecc.h"
#include "rmmi_sio.h"
#include "l4_msgid.h"
//#include "abm_msgid.h"
//#include "ircomm_msgid.h"
#include "data_msgid.h"
#include "ppp_msgid.h"
#include "sim_ps_msgid.h"
#include "ext_modem_msgid.h"

extern void l4ccsm_cc_get_cnap_info(
                kal_uint8 *name_present,
                kal_uint8 *cnap_info_exist,
                kal_uint8 *tag,
                l4_name_struct *l4_name_ptr);
extern void l4cuem_call_status_req_ind(kal_uint8 ind_type);

extern UART_PORT PS_UART_PORT;

extern kal_uint8 cm_max_retry_count(void);

extern kal_uint8 pppl4c_get_error_type(void);

extern module_type UART_GetOwnerID(UART_PORT port);

extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);

#if defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)
extern kal_bool 
l4ccsm_cc_get_sat_prof(kal_uint8 sat_prof_type, csmcc_sat_profile_struct *sat_prof_ptr);
#endif

#ifdef __EXT_MODEM__
extern kal_uint8 custom_get_ext_modem_profile_id(void);
#endif 

extern kal_uint8 l4crac_get_current_rat(void);
extern kal_uint8 l4crac_get_nvram_rat_mode(void);


#ifdef __TCPIP_OVER_CSD__
extern void csmcc_fill_csd_bc_param(kal_uint8 csd_ur, kal_uint8 csd_type, kal_uint8 csd_module);
#endif

extern kal_bool custom_phb_xmgnt_approve_fdn (
        kal_uint8 *tel_number, /* BCD coding, include TON/NPI in the first byte */
        kal_uint8 num_length,
        kal_uint8 sim_id,
        l4c_operation_type_enum oper,
        kal_uint16 *cause);

extern kal_bool csmcc_is_any_call_exist(void);


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_startup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_startup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_startup_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_cc_startup_cnf_struct*) local_para_ptr;

    kal_trace(TRACE_INFO, INFO_L4C_STARTUP, 
              l4c_ptr->cc_current_action[msg_ptr->src_id], l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);

    if (msg_ptr->response == L4C_SUCCESS)
    {
	    if (l4c_ptr->csm_state == CSM_STATE_NOT_INITIATED)
	    {
            l4c_ptr->csm_state = CSM_STATE_CC_READY;
	    }
	
        if (msg_ptr->init_type == L4CCSM_CC_STARTUP_NVRAM)
        {
            return;
        }
	
        // act csm ss
        if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
        {
            return;
        }
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_STARTUP_REQ, NULL);
    }
    return;
}

#ifdef __MOD_SMU__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_acm_reset_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_acm_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_acm_reset_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_acm_reset_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == CACM_EXE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->response == L4C_ERROR)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_exe_reset_acm_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_exe_reset_acm_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_acmmax_set_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_acmmax_set_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_acmmax_set_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_acmmax_set_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == CAMM_EXE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->response == L4C_ERROR)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_set_acm_max_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_set_acm_max_lrsp(KAL_TRUE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, msg_ptr->cause);
            }
        }
        l4c_ptr->cc_parameter[src_id].length = 0;
        l4c_ptr->cc_parameter[src_id].data = NULL;
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

#endif /* __MOD_SMU__ */ 

/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_ccm_reset_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_ccm_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__)
    l4ccsm_cc_last_ccm_reset_cnf_struct *msg_ptr = NULL;//mtk01616_090810

    msg_ptr = (l4ccsm_cc_last_ccm_reset_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == L4C_OK)
    {
        if(msg_ptr->src_id == LMMI_SRC)
        {
            l4c_cc_exe_reset_ccm_lrsp(KAL_TRUE, L4C_NO_CAUSE);
        }	
    }
		
    else
    {
        if(msg_ptr->src_id == LMMI_SRC)
        {
            l4c_cc_exe_reset_ccm_lrsp(KAL_FALSE, msg_ptr->error_cause);
        }	
    }
			
#endif	

    return;
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_crss_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_crss_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_crss_cnf_struct *msg_ptr = NULL;
    kal_uint16 action;
    kal_uint8 src_id, id;
    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
    kal_uint8 cid; 
    kal_bool need_rrsp = KAL_FALSE;	
    #endif	
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#ifdef __BT_SUPPORT__
    kal_uint8 call_id;
    kal_bool active, hold;      
#endif /* __BT_SUPPORT__ */ 

    msg_ptr = (l4ccsm_cc_crss_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    action = l4c_ptr->cc_current_action[src_id];

    //mtk01616_090203: prevent print OK for DSR disconnect call request            
    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
    cid = rmmi_srcid_2_cid(src_id);
	
    if((msg_ptr->crss_req == CSMCC_REL_ALL) && (RMMI_COMM_PTR->isDSRAbort_flag & ((kal_uint16)0x0001 << cid)))
    {
        RMMI_COMM_PTR->isDSRAbort_flag &= ~((kal_uint16)0x0001 << cid);		
    }
    else
    {
        need_rrsp = KAL_TRUE;
    }		
    #endif

    if (action != L4C_NO_ACTION)
    {
        switch (action)
        {
            case CHLD_EXE:
            {
                if (msg_ptr->response == L4C_OK)
                {
                     //mtk01616_080730: new crss op ACCEPT_WAITING might be used by MMI    
                    if (((l4c_ptr->crss_opcode == CSMCC_REL_ACTIVE_AND_ACCEPT)
                         || (l4c_ptr->crss_opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING)           
                         || (l4c_ptr->crss_opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT_WAITING)                         
                         || (l4c_ptr->crss_opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT))
                        && (l4c_ptr->mt_call_incoming == KAL_TRUE))
                    {
                        l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
                        l4c_ptr->crss_opcode = CSMCC_INVALID_CRSS_TYPE;
                    }
                }
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

        #if defined(__BT_SUPPORT__) 
                if ((msg_ptr->response == L4C_ERROR) && (src_id == RMMI_COMM_PTR->rmmi_hf_src) &&
                    (rmmi_ptr->send_ciev_callheld == KAL_TRUE))
                {
                    rmmi_ptr->send_ciev_callheld = KAL_FALSE;
                }
        #endif				

                //mtk01616_070710:if result is fail , it's not necessary to sync call list .to  prevent too mcuh sync_req_ind
                if (src_id >= RMMI_SRC && msg_ptr->response == L4C_OK)
                {
                    l4c_cc_call_sync_req_ind();
                }
                /* inform MMI to sync call atble */
                break;
            }
        #if defined(__TCPIP_OVER_CSD__) 
            case CHLD_CSD_DEACT:
            {
                if (l4c_ptr->cc_parameter[src_id].data != NULL)
                {
                    l4c_ptr->cc_parameter[src_id].data = NULL;
                    l4c_ptr->cc_parameter[src_id].length = 0;
                }

                action = CHLD_EXE;
                break;
            }
        #endif 
            default:
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                break;
        }

        /* Sync RMMI */
        if (src_id == LMMI_SRC)
        {
            for (id = RMMI_SRC; id < RMMI_ALL; id++)
            {
                if ((l4c_ptr->cc_current_action[id] == ATD_APP)
                    || (l4c_ptr->cc_current_action[id] == ATD_EXE) || (l4c_ptr->cc_current_action[id] == ATD_ECC))
                {
                    l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                }
            }
        }
    }
    if (msg_ptr->response == L4C_ERROR)
    {
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            if ((action == ATH_EXE) && (msg_ptr->cause == CSMCC_CMD_NOT_ALLOW))
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->crss_req);
                }
                else if (src_id != L4C_SRC) //MAUI_02574001
                {
                #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                    if(need_rrsp == KAL_TRUE)
                #endif				
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
                    }	
                }
            }
            else
            {
                if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
                {
                    l4c_cc_exe_ath_lrsp();
                    l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_cc_exe_chld_lrsp(KAL_FALSE, msg_ptr->cause, msg_ptr->crss_req);
                    }
                    else if (src_id != L4C_SRC) //MAUI_02574001
                    {
                        rmmi_ptr->current_src = src_id;
                    #ifdef __BT_SUPPORT__
                        if (src_id == RMMI_COMM_PTR->rmmi_hf_src &&
                            (msg_ptr->cause > CM_SS_ERR_START && msg_ptr->cause < CM_MM_CAUSE_START))
                        {
                            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_NETWORK_TIMEOUT);
                        }
                        else
                    #endif /* __BT_SUPPORT__ */ 
                        {
                            #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                            if(need_rrsp == KAL_TRUE)
                            #endif				
                            {
                                l4c_ps_general_rrsp(KAL_FALSE, msg_ptr->cause);
                            }			
                        }
                    }
                }
            }
        }
        else
        {
            if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
            {
                l4c_cc_exe_ath_lrsp();
                l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
            }
            else
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_NO_CAUSE, msg_ptr->crss_req);
                }
                else if (src_id != L4C_SRC) //MAUI_02574001
                {
                #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                    if(need_rrsp == KAL_TRUE)
                #endif				
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_ps_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
                    }
                }
            }
        }
    }
    else
    {
        if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
        {
            l4c_cc_exe_ath_lrsp();
            l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->crss_req);
            }
            else if (src_id != L4C_SRC) //MAUI_02574001
            {
            #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
			
                if(need_rrsp == KAL_TRUE)
            #endif	    
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                }			
            }

        #ifdef __BT_SUPPORT__
            //if 1A1W, chld=2 should send callsetup = 0
            if ((rmmi_ptr->indicators.callsetup != RMMI_CIND_CSUP_NONE)
//            #if defined(__L4C_GEMINI_BT_HF__)
                && (l4c_ptr->mt_call_incoming == KAL_FALSE)
//            #endif
                )
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
            }

            active = l4ccsm_cc_get_active_call(&call_id);
            if (active == KAL_TRUE)
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_ACTIVE);
            }
            else if (rmmi_ptr->indicators.call != RMMI_CIND_CC_NONE)
            {
                /* mtk01616_070822: opcode rel_active , rel_held , rel_specific_active_call might cause ciev <call> status = NONE    
                   [Note]They should not be sent before final result of ATH or CHLD is given */
                hold = l4ccsm_cc_get_hold_call(&call_id);
                if (hold == KAL_FALSE)
                {
                    ////    kal_prompt_trace(l4c_current_mod_id,"send +ciev:2,0 when crss_cnf");
                    l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
                }
                else    //for HF IOT ,hold call is regard as active call
                {
                    kal_trace(TRACE_INFO, INFO_NOT_SEND_CIEV_DEFAULT);
                }
            }

            l4c_cc_handfree_callheld_rind();

        #endif /* __BT_SUPPORT__ */ 

        }
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_disc_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_disc_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_disc_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id, id;
    kal_bool csd_flag = KAL_TRUE;
    kal_uint16 action;
#if defined(__TCPIP_OVER_CSD__)
    l4c_result_struct result;
    l4c_call_entry_struct call_info;
    kal_uint8 next_call_id;
    l4c_number_struct addr;
    l4c_sub_addr_struct subaddr;
    kal_uint8 name = 0;
#endif 
    kal_uint8 temp_src;	
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_disc_cnf_struct*) local_para_ptr;

    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE; //MAUI_02284187, mtk02285
    }

    src_id = msg_ptr->src_id;
    action = l4c_ptr->cc_current_action[src_id];

    if (action != L4C_NO_ACTION)
    {
        //040324 mtk00468 add for clear mt_call_incloming flag when call was sic by USER

    #if defined(__TCPIP_OVER_CSD__)
        if (l4c_ptr->cc_current_action[src_id] == PPP_ACT)
        {
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
            l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481

            /* if waiting call become mt incoming call, send RING to TE */
            l4ccsm_cc_get_call_info(l4c_ptr->waiting_call_id, &call_info, &next_call_id);
            if (call_info.call_state == CLCC_CALL_INCOMING)
            {
                l4c_ptr->waiting_call_id = 255; /* CSMCC_INVALID_CALL_ID */
            #ifdef __BT_SUPPORT__
                if (call_info.call_type == CSMCC_VOICE_CALL || call_info.call_type == CSMCC_AUX_VOICE_CALL)
                {
                    l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
                    l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_INCOMING);
                    l4c_cc_handfree_callheld_rind();
                }
            #endif /* __BT_SUPPORT__ */ 

                kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
                if (call_info.number.addr_length != 0)
                {
                    addr.length = convert_to_digit_24008(
                                    (kal_uint8*) & (call_info.number.addr_bcd[1]),
                                    (kal_uint8*) addr.number);

                    addr.type = call_info.number.addr_bcd[0];
                }

		temp_src = rmmi_ptr->current_src;
                rmmi_ptr->current_src = RMMI_UNSOLICITED;

		#ifdef __BT_SUPPORT__
        	if ((call_info.call_type != CSMCC_VOICE_CALL) && (call_info.call_type != CSMCC_AUX_VOICE_CALL))
		{
        	    rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
		}
		#endif 
				
                l4c_cc_call_ring_rind(
                    call_info.call_id,
                    &addr,
                    &subaddr,
                    &name,
                    rmmi_ptr->clip_info.cli_validity,
                    call_info.call_type);
		rmmi_ptr->current_src = temp_src;

		#ifdef __BT_SUPPORT__	
   	    	rmmi_ptr->except_src = INVALID_SRC;
		#endif 
            }
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        {
//          l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
            if (l4c_ptr->mt_call_incoming != KAL_TRUE)
            {
                result.flag = L4C_ERROR;
                result.cause = CM_L4C_GEN_CAUSE;
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                }
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_cc_exe_call_setup_rrsp(result, 0);

                }
            }
            else
            {
                l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481
            }
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_DISC)
        {
            /* ABM_DISC when receive CALL_REL_IND
               CALL_DISC_IND
               L4CPPP_CSD_DEACTIVATE_IND */
            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_DISC_IND);
            /*
             * result.flag = L4C_ERROR;
             * result.cause = CM_L4C_GEN_CAUSE;
             * if(src_id == LMMI_SRC)
             * l4c_cc_exe_call_setup_lrsp(result, 0);
             * else
             * {
             * rmmi_ptr->current_src = src_id;
             * l4c_cc_exe_call_setup_rrsp(result, 0);
             * }
             */
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_DEACT)
        {
            l4c_cc_abm_disc_rsp_struct *param_ptr;

            param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                        TD_RESET);

            param_ptr->result = (msg_ptr->response == L4C_ERROR) ? KAL_FALSE : KAL_TRUE;
            //param_ptr->err_cause =
            l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);
        }
    #ifdef __IRDA_SUPPORT__
        else if (l4c_ptr->cc_current_action[src_id] == PPP_DEACT_EXE)
        {
            l4c_ptr->cc_state[RMMI_SRC] = L4C_COMMAND_STATE;
            l4c_ptr->cc_current_action[RMMI_SRC] = L4C_NO_ACTION;
            rmmi_ptr->uart_in_data_mode = KAL_FALSE;
            l4c_ptr->uart_data_mode = L4C_NONE_DATA;

            l4c_send_msg_to_irda(MSG_ID_IRCOMM_DISCONNECT_REQ, NULL);

            l4c_send_msg_to_irda(MSG_ID_IRCOMM_CLOSE, NULL);
            /* open UART and obtain UART port */
            PS_UART_PORT = uart_port2;              /* set uart to IRDA port */
            RMMI_UART_Open(PS_UART_PORT, MOD_ATCI);
            rmmi_obtain_uart_control(uart_port2);   /* set uart owner */
        }
    #endif /* __IRDA_SUPPORT__ */ 
        else
    #endif /* __TCPIP_OVER_CSD__ */ 
        {
            csd_flag = KAL_FALSE;
            if (src_id >= RMMI_SRC)
            {
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

                for (id = LMMI_SRC; id < RMMI_ALL; id++)
                {
                    if (id != src_id && ((l4c_ptr->cc_current_action[id] == ATD_APP)
                                         || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                                         || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                                         || (l4c_ptr->cc_current_action[id] == ATA_EXE)
                                         || (l4c_ptr->cc_current_action[id] == ATH_EXE)))
                    {
                        if (l4c_ptr->retry_cc == KAL_TRUE && l4c_ptr->retry_src_id == id)
                        {
                            l4c_clear_cc_queued_msg(id);
                        }

                        if (id >= RMMI_SRC && ((l4c_ptr->cc_current_action[id] == ATD_APP)
                                               || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                                               || (l4c_ptr->cc_current_action[id] == ATD_ECC)))
                        {
                            temp_src = rmmi_ptr->current_src;
                            rmmi_ptr->current_src = id;
                            l4c_cc_call_release_rind(msg_ptr->call_id, CM_NORMAL_CALL_CLR);
                            rmmi_ptr->current_src = temp_src;
                        }

                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;						
                    }
                }
            }
            else if (src_id == LMMI_SRC)
            {
                /* Sync RMMI */
                for (id = RMMI_SRC; id < RMMI_ALL; id++)
                {
                    if ((l4c_ptr->cc_current_action[id] == ATD_APP)
                        || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                        || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                        || (l4c_ptr->cc_current_action[id] == ATA_EXE) || (l4c_ptr->cc_current_action[id] == ATH_EXE))
                    {
                        if (l4c_ptr->retry_cc == KAL_TRUE && l4c_ptr->retry_src_id == id)
                        {
                            l4c_clear_cc_queued_msg(id);
                        }

                        if ((l4c_ptr->cc_current_action[id] == ATD_APP)
                            || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                            || (l4c_ptr->cc_current_action[id] == ATD_ECC))
                        {
  
                            temp_src = rmmi_ptr->current_src;                        
                            rmmi_ptr->current_src = id;
                            l4c_cc_call_release_rind(msg_ptr->call_id, CM_NORMAL_CALL_CLR);
                            rmmi_ptr->current_src = temp_src;			
                        }

                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;                                                
                    }
                }
            }
            if (l4c_ptr->cc_current_action[src_id] != PPP_ACT || l4c_ptr->mt_call_incoming != KAL_TRUE)
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_ath_lrsp();
                }
                else
                {
                    kal_uint8 cid;

                    cid = rmmi_srcid_2_cid(src_id);

                    //DUMA00144393 print NO CARRIER here and reset flag
                    if (RMMI_COMM_PTR->isAtdAbort_flag & (0x01 << cid))
                    {
                        kal_trace(TRACE_INFO, INFO_CALL_DISC_CNF_HDLR_ATD_ABORT);
                        RMMI_COMM_PTR->isAtdAbort_flag &= ~(0x01 << cid);
                        rmmi_ptr->current_src = src_id;
                        rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_NO_ERR);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_cc_exe_hangup_active_call_rrsp();
                    }

            #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                    l4c_ctrl_dcd_status(src_id, MOD_ATCI);					
            #endif					
                }
            }
        #ifdef __BT_SUPPORT__
            if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
            {
                if (csmcc_is_any_call_exist() == KAL_FALSE)
                {
                    l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
                }

                if (rmmi_ptr->indicators.callsetup != RMMI_CIND_CSUP_NONE)
                {
                    l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
                }

                l4c_cc_handfree_callheld_rind();
            }
        #endif /* __BT_SUPPORT__ */ 
        }

        if ((l4c_ptr->mt_call_id == msg_ptr->call_id)
            && (l4c_ptr->mt_call_incoming == KAL_TRUE) && (l4c_ptr->mt_call_id != 255))
        {
              l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
        }

        if (((src_id >= RMMI_SRC) || (csd_flag == KAL_TRUE))
    #if defined(__TCPIP_OVER_CSD__) 
            && (l4c_ptr->cc_current_action[src_id] != PPP_ACT)
    #endif 
            )
        {

            l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481
        }

        if ((csd_flag == KAL_TRUE) || (action == CHUP_EXE) || (action == ATH_EXE))
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    else if (src_id == LMMI_SRC && msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481

    }
    else
    {
        /* wrong msg error */
    }
    return;
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_crss_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_crss_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_crss_cnf_struct *msg_ptr = NULL;
    kal_uint16 action;
    kal_uint8 src_id, id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_crss_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    action = l4c_ptr->cc_current_action[src_id];

    if (action != L4C_NO_ACTION)
    {
        switch (action)
        {
            case CHLD_EXE:
        #if defined(__TCPIP_OVER_CSD__)
            case CHLD_CSD_DEACT: //MAUI_01810924
        #endif
            {
                if (msg_ptr->response == L4C_OK)
                {
                    //mtk01616_080730: new crss op ACCEPT_WAITING might be used by MMI    
                    if (((l4c_ptr->crss_opcode == CSMCC_REL_ACTIVE_AND_ACCEPT)
                         || (l4c_ptr->crss_opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING)                        
                         || (l4c_ptr->crss_opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT_WAITING)                                                  
                         || (l4c_ptr->crss_opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT))
                        && (l4c_ptr->mt_call_incoming == KAL_TRUE))
                    {
                        l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
                        l4c_ptr->crss_opcode = CSMCC_INVALID_CRSS_TYPE;
                    }
                }

        #if defined(__BT_SUPPORT__) 
                if ((msg_ptr->response == L4C_ERROR) && (src_id == RMMI_COMM_PTR->rmmi_hf_src) &&
                    (rmmi_ptr->send_ciev_callheld == KAL_TRUE))
                {
                    rmmi_ptr->send_ciev_callheld = KAL_FALSE;
                }
        #endif				

                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

                break;
            }
#if 0 //MAUI_01810924
        #if defined(__TCPIP_OVER_CSD__) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif 
#endif
            default:
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                break;
        }

        /* Sync RMMI */
        if (src_id == LMMI_SRC)
        {
            for (id = RMMI_SRC; id < RMMI_ALL; id++)
            {
                if ((l4c_ptr->cc_current_action[id] == ATD_APP)
                    || (l4c_ptr->cc_current_action[id] == ATD_EXE) || (l4c_ptr->cc_current_action[id] == ATD_ECC))
                {
                    l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                }
            }
        }
    }

    if (src_id == L4C_SRC) //MAUI_02574001
    {
        return;
    }
    
    if (msg_ptr->response == L4C_ERROR)
    {
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            if ((action == ATH_EXE) && (msg_ptr->cause == CSMCC_CMD_NOT_ALLOW))
            {
                l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->crss_req);
            }
            else
            {
                if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
                {
                    l4c_cc_exe_ath_lrsp();
                    l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
                }
                else
                {
                    l4c_cc_exe_chld_lrsp(KAL_FALSE, msg_ptr->cause, msg_ptr->crss_req);
                }
            }
        }
        else
        {
            if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
            {
                l4c_cc_exe_ath_lrsp();
                l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
            }
            else
            {
                l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_NO_CAUSE, msg_ptr->crss_req);
            }
        }
    }
    else
    {
        if (l4c_ptr->csd_end_connect_race_flag == KAL_TRUE)
        {
            l4c_cc_exe_ath_lrsp();
            l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
        }
        else
        {
            l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->crss_req);
        }
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_disc_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_disc_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_disc_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id, id;
    kal_bool csd_flag = KAL_TRUE;
    kal_uint8 action;
#if defined(__TCPIP_OVER_CSD__)
    l4c_result_struct result;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_disc_cnf_struct*) local_para_ptr;

    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE; //MAUI_02284187, mtk02285
    }
	
    src_id = msg_ptr->src_id;
    action = l4c_ptr->cc_current_action[src_id];

    if (action != L4C_NO_ACTION)
    {
        //040324 mtk00468 add for clear mt_call_incloming flag when call was sic by USER

#if defined(__TCPIP_OVER_CSD__)
        if (l4c_ptr->cc_current_action[src_id] == PPP_ACT)
        {
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
//MAUI_01820359            l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR);
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        {
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
            if (l4c_ptr->mt_call_incoming != KAL_TRUE)
            {
                result.flag = L4C_ERROR;
                result.cause = CM_L4C_GEN_CAUSE;
                l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
            }
            else
            {
                l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481
            }
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_DISC)
        {
            /* ABM_DISC when receive CALL_REL_IND
               CALL_DISC_IND
               L4CPPP_CSD_DEACTIVATE_IND */
            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_DISC_IND);
            /*
             * result.flag = L4C_ERROR;
             * result.cause = CM_L4C_GEN_CAUSE;
             * if(src_id == LMMI_SRC)
             * l4c_cc_exe_call_setup_lrsp(result, 0);
             * else
             * {
             * rmmi_ptr->current_src = src_id;
             * l4c_cc_exe_call_setup_rrsp(result, 0);
             * }
             */
        }
        else if (l4c_ptr->cc_current_action[src_id] == ABM_DEACT)
        {
            l4c_cc_abm_disc_rsp_struct *param_ptr;

            param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                        TD_RESET);

            param_ptr->result = (msg_ptr->response == L4C_ERROR) ? KAL_FALSE : KAL_TRUE;

            l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);
        }
    #ifdef __IRDA_SUPPORT__
        else if (l4c_ptr->cc_current_action[src_id] == PPP_DEACT_EXE)
        {
            l4c_ptr->cc_state[RMMI_SRC] = L4C_COMMAND_STATE;
            l4c_ptr->cc_current_action[RMMI_SRC] = L4C_NO_ACTION;
            rmmi_ptr->uart_in_data_mode = KAL_FALSE;
            l4c_ptr->uart_data_mode = L4C_NONE_DATA;

            l4c_send_msg_to_irda(MSG_ID_IRCOMM_DISCONNECT_REQ, NULL);

            l4c_send_msg_to_irda(MSG_ID_IRCOMM_CLOSE, NULL);
            /* open UART and obtain UART port */
            PS_UART_PORT = uart_port2;              /* set uart to IRDA port */
            RMMI_UART_Open(PS_UART_PORT, MOD_ATCI);
            rmmi_obtain_uart_control(uart_port2);   /* set uart owner */
        }
    #endif /* __IRDA_SUPPORT__ */ 
        else
    #endif /* __TCPIP_OVER_CSD__ */ 
        {
            csd_flag = KAL_FALSE;
            if (src_id >= RMMI_SRC)
            {
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

                for (id = LMMI_SRC; id < RMMI_ALL; id++)
                {
                    if (id != src_id && ((l4c_ptr->cc_current_action[id] == ATD_APP)
                                         || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                                         || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                                         || (l4c_ptr->cc_current_action[id] == ATA_EXE)
                                         || (l4c_ptr->cc_current_action[id] == ATH_EXE)))
                    {
                        if (l4c_ptr->retry_cc == KAL_TRUE && l4c_ptr->retry_src_id == id)
                        {
                            l4c_clear_cc_queued_msg(id);
                        }
                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;						
                    }
                }
            }
            else if (src_id == LMMI_SRC)
            {
                /* Sync RMMI */
                for (id = RMMI_SRC; id < RMMI_ALL; id++)
                {
                    if ((l4c_ptr->cc_current_action[id] == ATD_APP)
                        || (l4c_ptr->cc_current_action[id] == ATD_EXE)
                        || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                        || (l4c_ptr->data_call_end_race_flag == id)                        
                        || (l4c_ptr->cc_current_action[id] == ATA_EXE) || (l4c_ptr->cc_current_action[id] == ATH_EXE))
                    {
                        if (l4c_ptr->retry_cc == KAL_TRUE && l4c_ptr->retry_src_id == id)
                        {
                            l4c_clear_cc_queued_msg(id);
                        }
                        l4c_ptr->data_call_end_race_flag = INVALID_SRC; //reset flag
                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;						
                    }
                }
            }
            if (l4c_ptr->cc_current_action[src_id] != PPP_ACT || l4c_ptr->mt_call_incoming != KAL_TRUE)
            {
                kal_uint8 cid;

                cid = rmmi_srcid_2_cid(src_id);

                //mtk01616: 070323 ATD abort by any character ,don't need to response OK
                if (rmmi_comm_ptr->isAtdAbort_flag & (0x01 << cid))
                {
                    kal_trace(TRACE_INFO, INFO_CALL_DISC_CNF_HDLR_ATD_ABORT);
                    rmmi_comm_ptr->isAtdAbort_flag &= ~(0x01 << cid);
                }
                else
                {
                    l4c_cc_exe_ath_lrsp();
                }
            }
        }

        if ((l4c_ptr->mt_call_id == msg_ptr->call_id)
            && (l4c_ptr->mt_call_incoming == KAL_TRUE))
        {
            l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
        }
#if 0 //MAUI_01820359
/* under construction !*/
    #if defined(__TCPIP_OVER_CSD__)
/* under construction !*/
    #endif 
/* under construction !*/
#endif
        if (csd_flag == KAL_TRUE)//MAUI_01820359
        {
            l4c_ptr->csd_call_end = KAL_FALSE; //MAUI_01801045
            kal_brief_trace(TRACE_INFO, INFO_L4C_LOCAL_DISCONNECT, l4c_ptr->csd_call_end);
            l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481
        }

        if ((csd_flag == KAL_TRUE) || (action == CHUP_EXE) || (action == ATH_EXE))
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    else if (src_id == LMMI_SRC && msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        l4c_cc_call_release_lind(msg_ptr->call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481

    }
    else
    {
        /* wrong msg error */
    }
    return;
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_deflection_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_deflection_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_deflection_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_deflection_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == CTFR_EXE)

    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->response == L4C_ERROR)
        {
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_call_deflect_lrsp(KAL_FALSE, msg_ptr->cause);
                }
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_ps_general_rrsp(KAL_FALSE, msg_ptr->cause);
                }
            }
            else
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_call_deflect_lrsp(KAL_FALSE, L4C_NO_CAUSE);
                }
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_ps_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
                }
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cc_exe_call_deflect_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_start_dtmf_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_start_dtmf_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_start_dtmf_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
#if defined(__VTS_LATE_RESPONSE__)
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#endif 

    msg_ptr = (l4ccsm_cc_start_dtmf_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    //LMMI doesn't care VTS_EXE
#if defined(__VTS_LATE_RESPONSE__)
    if (src_id >= RMMI_SRC)
    {
        if (l4c_ptr->cc_current_action[src_id] == VTS_EXE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            l4c_ptr->dtmf_call_id = CSMCC_INVALID_CALL_ID;
        }
        else //wrong msg
        {
            return;
        }
    }
#endif

    if(src_id == LMMI_SRC)
    {
        l4c_cc_exe_start_dtmf_lrsp(
            msg_ptr->call_id,
            msg_ptr->response,
            msg_ptr->tone,
            msg_ptr->cause_present,
            msg_ptr->cause);
    }
#if defined(__VTS_LATE_RESPONSE__)
    else if (src_id >= RMMI_SRC)
    {
        RMMI_PTR->current_src = src_id;
        rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
    }
#endif
	
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_stop_dtmf_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_stop_dtmf_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_stop_dtmf_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4ccsm_cc_stop_dtmf_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if(src_id == LMMI_SRC)
    {
        l4c_cc_exe_stop_dtmf_lrsp(
            msg_ptr->call_id,
            msg_ptr->response,
            msg_ptr->tone,
            msg_ptr->cause_present,
            msg_ptr->cause);
    }
    else if (src_id >= RMMI_SRC)
    {
        RMMI_PTR->current_src = src_id;
    }
    return;
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_accept_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_accept_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_accept_cnf_struct *msg_ptr = NULL;
    l4c_call_entry_struct call_entry;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 call_type = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_accept_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    /* if (l4c_ptr->cc_current_action[src_id] == ATA_EXE) */
    {
        if (msg_ptr->response == L4C_ERROR)
        {
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.flag = L4C_ERROR;
                result.cause = msg_ptr->cause;
            }
            else
            {
                result.flag = L4C_ERROR;
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            //mtk00468 add 040324 only accept confirm can make sure that setup is accept
            if ((l4c_ptr->mt_call_id == msg_ptr->call_id) && (l4c_ptr->mt_call_incoming == KAL_TRUE))
            {
                l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
            }
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;

            l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);
            call_type = call_entry.call_mode;
        }

        if (src_id != LMMI_SRC)
        {
            //MAUI_02280805 ATS0 auto answer, we don't need to response OK/ERROR
            if (rmmi_ptr->ats0_auto_answer == KAL_TRUE)
            {
                rmmi_ptr->ats0_auto_answer = KAL_FALSE;
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_cc_exe_call_accept_rrsp(result, call_type);
            }
        }
        l4c_cc_exe_ata_lrsp(result, call_type);


    #ifdef __BT_SUPPORT__
        l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);

        if (call_entry.call_type == CSMCC_VOICE_CALL || call_entry.call_type == CSMCC_AUX_VOICE_CALL)
        {
            if (msg_ptr->response == L4C_OK)
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_ACTIVE);
            }
            else
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
            }

            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
            //l4c_cc_handfree_rind(  RMMI_CIND_CALL ,RMMI_CIND_CC_ACTIVE);
        }
    #endif /* __BT_SUPPORT__ */ 

        if (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    return;
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_accept_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_accept_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_accept_cnf_struct *msg_ptr = NULL;
    l4c_call_entry_struct call_entry;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 call_type = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_accept_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    /* if (l4c_ptr->cc_current_action[src_id] == ATA_EXE) */
    {
        if (msg_ptr->response == L4C_ERROR)
        {
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.flag = L4C_ERROR;
                result.cause = msg_ptr->cause;
            }
            else
            {
                result.flag = L4C_ERROR;
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            //mtk00468 add 040324 only accept confirm can make sure that setup is accept
            if ((l4c_ptr->mt_call_id == msg_ptr->call_id) && (l4c_ptr->mt_call_incoming == KAL_TRUE))
            {
                l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);		
            }
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;

            l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);
            call_type = call_entry.call_mode;
        }

        l4c_cc_exe_ata_lrsp(result, call_type);
        
        if (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    return;
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_modify_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_modify_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_modify_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_modify_cnf_struct*) local_para_ptr;

    /* mtk00714 2004/03/03: add for +CEER report */
    l4c_cc_save_ceer_cause(msg_ptr->response,msg_ptr->cause_present,msg_ptr->cause); 

    src_id = msg_ptr->src_id;

    if ((l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        || (l4c_ptr->cc_current_action[src_id] == CMOD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATH_EXE))
    {
        if (msg_ptr->response == L4C_ERROR)
        {
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.flag = L4C_ERROR;
                result.cause = msg_ptr->cause;
            }
            else
            {
                result.flag = L4C_ERROR;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id == RMMI_SRC)
            {
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            }
	    #if 0 //MAUI_01998659
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	    #endif
            {
                rmmi_ptr->current_src = src_id;
                l4c_cc_exe_call_modify_rrsp(result, msg_ptr->cur_call_type);

            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
            if (msg_ptr->cur_call_type == CSMCC_DATA_CALL)
            {
                /*  l4ccsm_cc_uart_transfer_req_struct *param;
                   
                   param = (l4ccsm_cc_uart_transfer_req_struct *)
                   construct_local_para(
                   (kal_uint16)sizeof(l4ccsm_cc_uart_transfer_req_struct),
                   TD_RESET);
                   
                   param->is_esc_off = KAL_FALSE; */
                if (src_id == RMMI_SRC)
                {
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                }
			#if 0 //MAUI_01998659
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
			#endif
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_cc_exe_call_modify_rrsp(result, msg_ptr->cur_call_type);
                }
                rmmi_ptr->uart_in_data_mode = KAL_TRUE;
            #ifdef IRDA_SUPPORT
                l4c_ptr->uart_data_mode = L4C_CSD_DATA;
            #endif /* IRDA_SUPORT */
                /*  l4c_send_msg_to_csm ( MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ,
                   param, NULL, 0); */
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
            }
        }

        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

#ifndef __UCM_SUPPORT__
#ifdef __TCPIP_OVER_CSD__ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_setup_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_setup_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (msg_ptr->response == L4C_ERROR) //mtk00924_060303: only send +CIEV when response OK
    {
        if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
        {
            l4c_ptr->ongoing_csd_dialup = KAL_FALSE;    //MAUI_02284187, mtk02285
        }
    #ifdef __BT_SUPPORT__
        if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
        {
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
        }
    #endif /* __BT_SUPPORT__ */ 
    }
    else if (msg_ptr->response == L4C_OK)
    {
        //mtk01616_071012: we send current cipher ind here , in the case of no cipher in NW or RR channel is reused, this indication will be used
        l4c_sim_cipher_lind(
            ((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)), //MAUI_02580295
            KAL_TRUE,
            l4c_ptr->cipher_ind_msg.gsm_cipher_cond,
            l4c_ptr->cipher_ind_msg.gprs_cipher_cond);

    #if !defined(__MMI_FMI__)
        l4c_sim_cipher_rind(
            ((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)),
            KAL_TRUE,
            l4c_ptr->cipher_ind_msg.gsm_cipher_cond,
            l4c_ptr->cipher_ind_msg.gprs_cipher_cond);
    #endif
    }


    l4ccsm_cc_call_setup_cnf_aux_hdlr(local_para_ptr);
   
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_cnf_abm_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __SATCE_CSD__ //MAUI_02395134
    #ifdef __SATCE__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* __SATCE__ */ 
    #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

void l4ccsm_cc_call_setup_cnf_aux_hdlr(local_para_struct *local_para_ptr)
#else /* __TCPIP_OVER_CSD__ */ 
void l4ccsm_cc_call_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
#endif /* __TCPIP_OVER_CSD__ */ 
{
    l4ccsm_cc_call_setup_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    rat_enum new_rat; //MAUI_02320299
#ifdef __TCPIP_OVER_CSD__
    kal_bool from_abm = KAL_FALSE; 
#endif /* __TCPIP_OVER_CSD__ */ 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim


    msg_ptr = (l4ccsm_cc_call_setup_cnf_struct *) local_para_ptr;

    src_id = msg_ptr->src_id;
    if (l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)
        l4c_ptr->cc_retry_ongoing_flag = KAL_FALSE;


#ifdef __TCPIP_OVER_CSD__
     if ((msg_ptr->response == L4C_OK) && (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC)) //for ABM_ACT_ECC
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
//      l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        l4c_cc_exe_call_setup_lrsp(result, msg_ptr->call_id, msg_ptr->is_diagnostic_present, msg_ptr->diagnostic); //MAUI_02526481
        l4c_clear_cc_queued_msg(src_id);
        return;
    }
#endif /* __TCPIP_OVER_CSD__ */ 


    /* mtk00714 2004/03/03: add for +CEER report */
    l4c_cc_save_ceer_cause(msg_ptr->response,msg_ptr->cause_present,msg_ptr->cause); 

    src_id = msg_ptr->src_id;

    if ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT) //MAUI_02554068
#ifdef __TCPIP_OVER_CSD__
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        ||  (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC)
#endif /* __TCPIP_OVER_CSD__ */ 
        )
    {
#ifdef __TCPIP_OVER_CSD__
        if ((l4c_ptr->cc_current_action[src_id] == ABM_ACT) || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC))
        {
            from_abm = KAL_TRUE;
        }
#endif /* __TCPIP_OVER_CSD__ */ 

        if (msg_ptr->response == L4C_ERROR)
        {
            /* check if costom turn off ecc enhancement retry */
            if(ecc_custom_support_enhance_retry() == KAL_TRUE)
            {
                if (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
                {
                    /* retry fail after change RAT, resume to original RAT */
                    l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                    l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
                }
                else if ((l4c_is_test_sim() == KAL_FALSE)
                    && (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
                    && (msg_ptr->cause_present == KAL_TRUE)
                    && (l4c_need_retry_other_rat(src_id, msg_ptr->cause)))
                {
                    new_rat = (rat_enum)l4c_get_ecc_retry_new_rat(); //MAUI_02320299
                    if ((new_rat != RAT_NONE) && (l4c_nw_set_rat_mode_req(L4C_SRC, new_rat) == KAL_TRUE)) //MAUI_02320299
                    {
                        ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_CALL_RETRY, MOD_L4C);
                        l4c_ptr->retry_cc = KAL_TRUE;
                        l4c_ptr->retry_src_id = src_id;
                        l4c_ptr->enhanced_ecc_id = l4c_ptr->mo_call_id;
                        l4c_ptr->cc_current_action[src_id] = ATD_ECC_CHANGE_RAT;
                        l4c_ptr->retry_count = L4C_PTR->max_retry_count;
                        return;
                    }
                }
             }


           if ( (msg_ptr->cause_present == KAL_TRUE)
                     && (((l4c_is_test_sim() == KAL_FALSE)&& (l4c_need_retry(msg_ptr->cause) == KAL_TRUE))
                     ||(msg_ptr->cause == CM_RR_PLMN_SRCH_REJ_EMERGENCY) )
                     && (l4c_cc_retry_allow_for_fta(src_id) == KAL_TRUE))
            {
                ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_CALL_RETRY, MOD_L4C);
                l4c_ptr->retry_cc = KAL_TRUE;
                l4c_start_retry_timer_hdlr(src_id);
                return;
            }
            
            result.flag = L4C_ERROR;
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->cause;
#ifdef __TCPIP_OVER_CSD__
                if (from_abm)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(msg_ptr->cause);
                }
#endif /* __TCPIP_OVER_CSD__ */
            }
            else
            {
                result.cause = CM_L4C_GEN_CAUSE;
#ifdef __TCPIP_OVER_CSD__
                if (from_abm)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                }
#endif /* __TCPIP_OVER_CSD__ */
            }

            if (src_id >= RMMI_SRC)
            {
            #ifndef __MMI_FMI__
                //mtk00924: NO CARRIER should be given to the port of souce id when CSD call        
                if (msg_ptr->call_type == CSMCC_DATA_CALL)
                    rmmi_ptr->current_src = msg_ptr->src_id;
                else
                    rmmi_ptr->current_src = RMMI_UNSOLICITED;
            #else 
	            rmmi_ptr->current_src = msg_ptr->src_id;
            #endif 

                if (msg_ptr->call_type == CSMCC_DATA_CALL ||msg_ptr->call_type == CSMCC_FAX_CALL)
                {
		            kal_uint8 port =0;
		            port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

		            rmmi_start_ath_for_dialup_hdlr(port);	

		            if(msg_ptr->call_type == CSMCC_DATA_CALL)
		            {
                    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                        l4c_ctrl_dcd_status(src_id, MOD_ATCI);
                    #else
		                kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());
	       	            RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
                    #endif
	 	            }
	      	    }
	            l4c_cc_exe_call_setup_rrsp(result, msg_ptr->call_id);
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
    #ifdef __OP01__
        {
            kal_bool is_ecc = (l4c_ptr->cc_current_action[src_id] == ATD_ECC)? KAL_TRUE : KAL_FALSE;
            kal_uint8 temp_src;
            rmmi_mo_state_enum call_state = RMMI_MO_STATE_CONF;
            rmmi_cm_call_end_status_enum end_status;

            if (result.flag == L4C_ERROR)
            {
                call_state = RMMI_MO_STATE_CEND;
                end_status = CM_CALL_END_CONF_FAILED;
            }
            temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_call_state_rind(call_state, msg_ptr->call_id,0, end_status, KAL_FALSE,0, msg_ptr->call_type, is_ecc);
            rmmi_ptr->current_src = temp_src;
        }
    #endif
        l4c_cc_exe_call_dial_lrsp(msg_ptr->src_id, 
                                  result.flag, 
                                  result.cause, 
                                  msg_ptr->call_id, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_01924242 MAUI_02526481
        l4c_clear_cc_queued_msg(src_id);
#ifdef __TCPIP_OVER_CSD__
        if (from_abm && (msg_ptr->response == L4C_OK))
        {
            l4c_ptr->cc_current_action[src_id] = PPP_ACT;
        }
        else
#endif /* __TCPIP_OVER_CSD__ */
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    /* Johnny: when 1 active + 1 MO call, before the MO setup cnf is back with call id,
       user release all except waiting should return setup cnf fail first, not release ind,
       since MMI has no idea of the call id for the MO call yet */
    else if ((l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE) && (msg_ptr->response == L4C_ERROR))
    {
        if (l4c_ptr->enhanced_ecc_id != CSMCC_INVALID_CALL_ID)
        {
            /* abort change RAT, resume to original RAT */
            l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
            l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
        }
        result.flag = L4C_ERROR;
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            result.cause = msg_ptr->cause;
        }
        else
        {
            result.cause = CM_L4C_GEN_CAUSE;
        }
        l4c_cc_exe_call_setup_lrsp(result, msg_ptr->call_id, msg_ptr->is_diagnostic_present, msg_ptr->diagnostic); //MAUI_02526481
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_ccm_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/

void l4ccsm_cc_ccm_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
#ifdef __AOC_SUPPORT__
    l4ccsm_cc_ccm_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_bool puct_valid;
    kal_uint8 currency[3];
    kal_uint8 ppu[18];
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_ccm_ind_struct *) local_para_ptr;

    src_id = msg_ptr->src_id;

    puct_valid = l4c_smu_get_puc_params_req(src_id, (kal_uint8*)currency, (kal_uint8*) ppu);

    if (l4c_ptr->cc_state[src_id] == L4C_COMMAND_STATE)
    {
        if (src_id == LMMI_SRC)
        {
      	    //mtk01616_081119: acm from CSM is the increased call meter since last upate, ccm is the total call meter for this call        
            l4c_cc_call_meter_lind(msg_ptr->call_id, msg_ptr->acm, msg_ptr->ccwv,msg_ptr->ccm,puct_valid,currency,ppu);			
        }
        else
        {
       	    temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;

      	    /* mtk01616: TODO!! this ccm value is for specific call.But 27.007 didn't define call_id.
      	       for this URC.It's suggested to add proprietary <call_id> in this URC. It proivde AP the
      	       flexiblity to show the call cost by call or for all calls(ex:1A1H) */
            l4c_cc_call_meter_rind(msg_ptr->call_id, msg_ptr->ccm, msg_ptr->ccwv);
	    rmmi_ptr->current_src = temp_src;
        }
    }
    else if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_STATE)
    {
        if (src_id == LMMI_SRC)
        {
            l4c_cc_call_meter_lind(msg_ptr->call_id, msg_ptr->acm, msg_ptr->ccwv,msg_ptr->ccm,puct_valid,currency,ppu);			
        }
        else
        {
            /* ignore */
        }
    }
    else
    {
        /* error */
    }
    return;
#endif /* __AOC_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_alert_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_alert_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_alert_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
#ifdef __BT_SUPPORT__
    l4c_call_entry_struct call_entry;
#endif 
    msg_ptr = (l4ccsm_cc_call_alert_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

#ifdef __BT_SUPPORT__
    l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);
    if (call_entry.call_type == CSMCC_VOICE_CALL || call_entry.call_type == CSMCC_AUX_VOICE_CALL)
    {
        l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_ALERT);
    }
#endif /* __BT_SUPPORT__ */ 

#ifndef __TCPIP__
    if (L4C_PTR->cc_current_action[src_id] == L4C_NO_ACTION)
#endif 
    {
        /* only LMMI will handle call alert */
        l4c_cc_call_alert_lind(msg_ptr->alert);
        L4C_PTR->call_alert = (kal_bool)msg_ptr->alert;
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_setup_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 cli_validity = 0;
    kal_uint8 name = 0;
    l4ccsm_cc_call_setup_ind_struct *msg_ptr = NULL;
    l4c_number_struct addr;
    l4c_number_struct redirect_addr;    //mtk01616 070428: pass redirecting number for MMI 
    l4c_sub_addr_struct subaddr;
    kal_uint8 src_id = LMMI_SRC;
    kal_uint8 temp_src;
#if defined(__MMI_FMI__)
    l4c_result_struct result;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    //mtk01616 070420 get cnap name from CSM
    kal_uint8 name_present = 0;
    kal_uint8 cnap_info_exist = 0;
    kal_uint8 tag = 0;
    l4_name_struct l4_name_ptr;

    kal_mem_set(&l4_name_ptr, 0, sizeof(l4_name_struct));

    if (l4c_ptr->cfun_state != 1)
    {
        return; //Do not send MT call ring indicatino to MMI if cfun == 4
    }
    //MM is responsible to disconnect the MT call

    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MT_CALL_RECEIVED, MOD_L4C);

    msg_ptr = (l4ccsm_cc_call_setup_ind_struct*) local_para_ptr;
    kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));
    kal_mem_set(&redirect_addr, 0, sizeof(l4c_number_struct));  //mtk01616 070428: pass redirecting number for MMI 
    //040324 mtk00468 add for when receive call setup we should forbid any action

    l4c_set_mt_call_event(KAL_TRUE,msg_ptr->call_id);		

    for (src_id = LMMI_SRC; src_id < RMMI_ALL; src_id++)
    {
    #if defined(__TCPIP_OVER_CSD__) //MAUI_02580295
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ABM_ACT:
            case ABM_ACT_APP:
            case ABM_ACT_ECC:
            {
                kal_bool disc_result;
                l4c_result_struct result;

                if (l4c_ptr->cc_current_action[LMMI_SRC] != PPP_ACT)
                {
                    disc_result = l4c_cc_exe_disc_aux_req(LMMI_SRC);
                    if (disc_result == KAL_FALSE)
                    {
                        //No CC connection we got to send the response to MMI
//                      l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
                        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                        result.flag = L4C_ERROR;
                        result.cause = CM_L4C_GEN_CAUSE;
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;     //reset action
                        l4c_clear_cc_queued_msg(src_id);
                    }
                }
            }
                break;
        }
    #endif /* __TCPIP_OVER_CSD__ */ 
        /* Johnny: MT call does not abort MO SMS now */

#if 0 //MAUI_02648210 no need to abort SS retry, CC and SS retry are separated
/* under construction !*/
    #ifdef __MMI_FMI__ //mtk01616: only apply this special handling for feature phone
/* under construction !*/
    #ifdef __SAT__
/* under construction !*/
    #endif 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #ifndef __MMI_FMI__
/* under construction !*/
            #else 
/* under construction !*/
            #endif 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #ifdef __SAT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif /* __SAT__ */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
		#if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
		#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif  /* mtk00888 20050614: special case - MT call will abort exist SS when SS is retrying */
#endif
    }

#if 0 //mtk02508_090508 if cc retry exists, it shall be cleaned by above loop
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if (msg_ptr->calling_number_present == KAL_TRUE)
    {
        addr.length = convert_to_digit_24008(
                        (kal_uint8*) & (msg_ptr->calling_number.addr.addr_bcd[1]),
                        (kal_uint8*) addr.number);

        addr.type = msg_ptr->calling_number.addr.addr_bcd[0];
    }

    //mtk01616 070428: pass redirecting number for MMI to distinguish the divert call belongs to whcih sim card (for N card , 1 phone)
    if (msg_ptr->redirecting_number_present == KAL_TRUE)
    {
        redirect_addr.length = convert_to_digit_24008(
                                (kal_uint8*) & (msg_ptr->redirecting_number.addr.addr_bcd[1]),
                                (kal_uint8*) redirect_addr.number);
        redirect_addr.type = msg_ptr->redirecting_number.addr.addr_bcd[0];
    }

    /* According to 24.008 (10.5.4.9) */
    if (msg_ptr->calling_number.addr_ind_present)
    {
        cli_validity = (msg_ptr->calling_number.addr_ind & 0x60) >> 5;
    }
    else
    {
        cli_validity = 0;//if presentation indicator is omitted, "00 prsentation allowed" is assumed
    }

#ifdef __CNAP_SUPPORT__
        //mtk01616 070420 get cnap name from CSM
        l4ccsm_cc_get_cnap_info(&name_present, &cnap_info_exist, &tag, &l4_name_ptr);
    
        if (cnap_info_exist == KAL_TRUE)
        {
            l4c_cc_call_ecnap_rind(msg_ptr->call_id, &l4_name_ptr.name[0], l4_name_ptr.name_dcs, l4_name_ptr.name_length);
        }
#endif /* __CNAP_SUPPORT__ */

    if (msg_ptr->cw_flag == KAL_TRUE)
    {
        l4c_cc_call_wait_lind(
            msg_ptr->call_id,
            &addr,
            msg_ptr->call_type,
            name_present,
            cnap_info_exist,
            tag,
            l4_name_ptr.name,
            l4_name_ptr.name_dcs,
            l4_name_ptr.name_length,
            msg_ptr->auto_answer,
            msg_ptr->calling_number.addr_ind_present,
            msg_ptr->calling_number.addr_ind,
            msg_ptr->signal_value_present,
            msg_ptr->signal_value,
            msg_ptr->alerting_pattern_present,
            msg_ptr->alerting_pattern,
            msg_ptr->no_cli_cause_present,
            msg_ptr->no_cli_cause,
            msg_ptr->call_priority_present,
            msg_ptr->call_priority
            );

	temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;

    #ifdef __BT_SUPPORT__
        if ((msg_ptr->call_type != CSMCC_VOICE_CALL) && (msg_ptr->call_type != CSMCC_AUX_VOICE_CALL))
        {
            rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
        }
    #endif /* __BT_SUPPORT__ */ 

        l4c_cc_call_wait_rind(msg_ptr->call_id, &addr, msg_ptr->call_type, &name, cli_validity);
	rmmi_ptr->current_src = temp_src;

        l4c_ptr->waiting_call_id = msg_ptr->call_id;

    #ifdef __BT_SUPPORT__
        rmmi_ptr->except_src = INVALID_SRC;
        if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
        {
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_INCOMING);
        }
    #endif /* __BT_SUPPORT__ */ 

    }
    else
    {
    #ifdef __BT_SUPPORT__
        if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
        {
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_INCOMING);
        }
    #endif /* __BT_SUPPORT__ */ 

        l4c_cc_call_ring_lind(
            msg_ptr->call_id,
            &addr,
            &subaddr,
            &redirect_addr,
            name_present,
            cnap_info_exist,
            tag,
            l4_name_ptr.name,
            l4_name_ptr.name_dcs,
            l4_name_ptr.name_length,
            msg_ptr->auto_answer,
            msg_ptr->call_type,
            msg_ptr->calling_number.addr_ind_present,
            msg_ptr->calling_number.addr_ind,
            msg_ptr->signal_value_present,
            msg_ptr->signal_value,
            msg_ptr->alerting_pattern_present,
            msg_ptr->alerting_pattern,
            msg_ptr->no_cli_cause_present,
            msg_ptr->no_cli_cause,
            msg_ptr->call_priority_present,
            msg_ptr->call_priority
            );

    #ifdef __BT_SUPPORT__
        if ((msg_ptr->call_type != CSMCC_VOICE_CALL) && (msg_ptr->call_type != CSMCC_AUX_VOICE_CALL))
        {
            rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
        }
    #endif /* __BT_SUPPORT__ */ 

        /* Johnny: L4C will save cipher_ind_msg additionally and send it to MMI after CALL_RING_IND */
        l4c_sim_cipher_lind(((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)), //MAUI_02580295
            l4c_ptr->cipher_ind_msg.is_gsm_conn_exist, l4c_ptr->cipher_ind_msg.gsm_cipher_cond, l4c_ptr->cipher_ind_msg.gprs_cipher_cond);      //gmmreg_cipher_ind_enum     
    #if !defined(__MMI_FMI__)
        l4c_sim_cipher_rind(((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)),
            l4c_ptr->cipher_ind_msg.is_gsm_conn_exist, l4c_ptr->cipher_ind_msg.gsm_cipher_cond, l4c_ptr->cipher_ind_msg.gprs_cipher_cond);
    #endif
    
        temp_src = rmmi_ptr->current_src;		
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_call_ring_rind(msg_ptr->call_id, &addr, &subaddr, &name, cli_validity, msg_ptr->call_type);
        rmmi_ptr->current_src = temp_src;	
    #ifdef __BT_SUPPORT__
        rmmi_ptr->except_src = INVALID_SRC;
    #endif 
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_disc_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_disc_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_disc_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#if defined(__TCPIP_OVER_CSD__)
    kal_uint8 result;
#endif 

    msg_ptr = (l4ccsm_cc_call_disc_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    rmmi_ptr->ring_count = 0;

    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE; //MAUI_02284187, mtk02285
    }
	
#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ABM_ACT:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                result = l4c_cc_exe_disc_aux_req(src_id);
                if (result == KAL_FALSE)
                {
//                  l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                }
                return;
            case PPP_ACT:
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
            case ABM_DISC:
            case ABM_DEACT:
            case ATH_EXE:
                return;
            default:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 
#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    if (msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        kal_bool result;
        kal_uint8 call_id;
        l4csat_cc_call_disc_ind_req_struct *param_ptr1;

        param_ptr1 = (l4csat_cc_call_disc_ind_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4csat_cc_call_disc_ind_req_struct),
                                                            TD_RESET);
        param_ptr1->result = KAL_TRUE;
        param_ptr1->cause = msg_ptr->cause;

        l4c_send_msg_to_smu(MSG_ID_L4CSAT_CC_CALL_DISC_IND_REQ, param_ptr1);

        result = l4ccsm_cc_get_active_call(&call_id);

        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            l4ccsm_cc_call_disc_req_struct *param_ptr;

            param_ptr = (l4ccsm_cc_call_disc_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct),
                                                            TD_RESET);
            param_ptr->src_id = SAT_SRC;
            param_ptr->call_id = call_id;
            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
        }
        return;
    }
#endif /* __SATCE__ */ 
#endif
    /* only LMMI need to handle ccbs info */
    if (src_id == LMMI_SRC)
    {
        if (msg_ptr->ccbs_possible_present == KAL_TRUE)
        {
            l4c_cc_call_disc_lind(msg_ptr->call_id, 
                                  (kal_bool)msg_ptr->ccbs_possible, 
                                  msg_ptr->cause, 
                                  msg_ptr->call_type, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_02526481
        }
        else
        {
            l4c_cc_call_disc_lind(msg_ptr->call_id, 
                                  KAL_FALSE, 
                                  msg_ptr->cause, 
                                  msg_ptr->call_type, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_02526481
        }
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_rel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_rel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_rel_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id, online_src_id;
    l4c_call_entry_struct call_info;
    kal_uint8 next_call_id;
    l4c_number_struct addr;
    l4c_sub_addr_struct subaddr;
    kal_uint8 name = 0;
    kal_uint8 temp_src = 0;
    kal_bool result; //MAUI_02825249
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

	kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));

    msg_ptr = (l4ccsm_cc_call_rel_ind_struct*) local_para_ptr;

    rmmi_ptr->ring_count = 0;

    /* mtk00714 2004/03/03: add for +CEER report */
    l4c_cc_save_ceer_cause(L4C_ERROR,msg_ptr->cause_present,msg_ptr->cause); 

    if (!csmcc_is_any_call_exist())
    {
        l4c_cc_send_csm_call_abort_req();
    }

    src_id = msg_ptr->src_id;
    //040324 mtk00468 add for clear mt_call_incoming flag when one mt call release by NW
    if ((l4c_ptr->mt_call_id == msg_ptr->call_id) && (l4c_ptr->mt_call_incoming == KAL_TRUE))
    {
        /* MAUI_02533764 */
        if (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        {
            l4ccsm_cc_call_accept_cnf_struct accept_cnf;

            accept_cnf.src_id = src_id;
            accept_cnf.response = L4C_ERROR;
            accept_cnf.cause_present = KAL_FALSE;
            accept_cnf.call_id = msg_ptr->call_id;
            l4ccsm_cc_call_accept_cnf_hdlr((local_para_struct *)&accept_cnf, NULL);
        }
        l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);
    }
#ifdef __SAT__
#ifdef __RSAT__
    /*
     * mtk01616: For RSAT stkcall setup, then ATH abort. L4C have to provide terminal response for original stkcall setup
     * Consider this case: 1A SAT call + 1MO SAT call,during callsetup 1A disc by NW. L4C need not to send terminal response(so check for action ATH_EXE)
     */
    if (l4c_ptr->cc_current_action[SAT_SRC] == SAT_ATD_EXE && src_id == SAT_SRC &&
        l4c_search_other_src(LMMI_SRC, ATH_EXE) == KAL_TRUE)
    {
        sat_setup_call_res_struct *param_ptr = (sat_setup_call_res_struct*)
            construct_local_para(
                (kal_uint16) sizeof(sat_setup_call_res_struct),
                TD_RESET);

        kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
        param_ptr->res = SAT_USER_CLEAR_DOWN_CALL_BEFORE_CONNECTION_RELEASE;
        param_ptr->cause = L4C_NO_CAUSE;            /* additional info */
        l4c_sat_setup_call_res(param_ptr);

        l4c_clear_cc_queued_msg(SAT_SRC);
        l4c_ptr->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
    }
#endif /* __RSAT__ */ 
#endif /* __SAT__ */ 

    /* MAUI_01808300: src_id has not received SETUP_CNF but received REL_IND from NW
       Before CSM will send SETUP_CNF fail because MMI has not received DIAL_IND
       Now UCM3.0 gets call_id from CPI_IND so CSM won't help to send SETUP_CNF 
       We need to clear MO state of L4C here */
    if ((l4c_ptr->mo_call_id == msg_ptr->call_id) && 
        ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
        || (l4c_ptr->cc_current_action[src_id] == SAT_ATD_EXE)))
    {
        l4c_clear_cc_queued_msg(src_id);
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    }
    
    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
    }

#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        if (l4c_ptr->csd_end_connect_race_flag != KAL_TRUE)
        {
            l4c_cc_call_release_lind(msg_ptr->call_id, 
                                     msg_ptr->cause, 
                                     msg_ptr->is_diagnostic_present, 
                                     msg_ptr->diagnostic); //MAUI_02526481
        }

        if (l4c_ptr->cc_current_action[RMMI_SRC] == CHLD_CSD_DEACT)
        {       /* mtk00924_060615: 1 WAP over CSD, 1 MT call, AT+CHLD=1 to release and accpet, at this time, src_id in rel_ind is LMMI, 
                   but the CHLD is form RMMI, therefore, we should check RMMI additionally */
            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
            l4c_ptr->cc_current_action[RMMI_SRC] = CHLD_EXE;
            return;
        }

        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ABM_ACT:
                if (msg_ptr->cause_present)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(msg_ptr->cause);
                }
                else
                {
//                  l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                }
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                return;
            case PPP_ACT:
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
            case ABM_DISC:
                return;
            case ABM_DEACT:
                l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                return;
            case CHLD_CSD_DEACT:
                l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
                l4c_ptr->cc_current_action[src_id] = CHLD_EXE;
                return;
            default:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 

#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    if (src_id == SAT_SRC && msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        if (l4c_ptr->cc_current_action[src_id] == SAT_CSD_EXE)
        {
            l4csat_csm_open_csd_res_struct *local_ptr;

            local_ptr = (l4csat_csm_open_csd_res_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4csat_csm_open_csd_res_struct),
                                                            TD_RESET);

            local_ptr->result = KAL_FALSE;
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                local_ptr->cause = msg_ptr->cause;
            }
            else
            {
                local_ptr->cause = CM_L4C_GEN_CAUSE;
            }
            l4c_send_msg_to_smu(MSG_ID_L4CSAT_CSM_OPEN_CSD_RES, local_ptr);
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
        else if (msg_ptr->cause_present == KAL_TRUE)
        {
            kal_bool result;
            kal_uint8 call_id;

            l4csat_cc_call_disc_ind_req_struct *param_ptr1;

            param_ptr1 = (l4csat_cc_call_disc_ind_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4csat_cc_call_disc_ind_req_struct), TD_RESET);
            param_ptr1->result = KAL_TRUE;
            param_ptr1->cause = msg_ptr->cause;

            l4c_send_msg_to_smu(MSG_ID_L4CSAT_CC_CALL_DISC_IND_REQ, param_ptr1);

            result = l4ccsm_cc_get_active_call(&call_id);

            if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
            {
                l4ccsm_cc_call_disc_req_struct *param_ptr;

                param_ptr = (l4ccsm_cc_call_disc_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct), TD_RESET);
                param_ptr->src_id = src_id;
                param_ptr->call_id = call_id;

                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
            }
        }
        return;
    }
#endif /* __SATCE__ */ 
#endif

    if (l4c_check_online_state(&online_src_id,L4C_ONLINE_DATA_GPRS_STATE)!= KAL_TRUE)		
    {
        rmmi_ptr->uart_in_data_mode = KAL_FALSE;

    #ifdef __IRDA_SUPPORT__
        l4c_ptr->uart_data_mode = L4C_NONE_DATA;
    #endif 
    }

    if ((msg_ptr->src_id == LMMI_SRC) && (l4c_ptr->cc_state[LMMI_SRC] == L4C_ONLINE_DATA_STATE))
    {
        l4c_ptr->cc_state[LMMI_SRC] = L4C_COMMAND_STATE;
        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
    }

    if(msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        kal_uint8 port =0;
        kal_uint8 cid =0;
		
        cid = rmmi_srcid_2_cid(src_id);

        //mtk01616_090302:for MT data call end by NW. src_id is 0,cannot mapped to a valid cid						
        if(cid != 0xff)
        {
            port = rmmi_cid_2_port(cid);
		
            rmmi_start_ath_for_dialup_hdlr(port);		

            if(msg_ptr->call_type == CSMCC_DATA_CALL)
            {
	        if(RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
   	        {
                #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                    l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
                #else	            
	                kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());
                    RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
                #endif
	        }  
            }
        }
    }

    if((msg_ptr->call_type == CSMCC_DATA_CALL) || (msg_ptr->call_type == CSMCC_FAX_CALL))	
    {
        if (l4c_check_online_state(&online_src_id, L4C_ONLINE_DATA_STATE) == KAL_TRUE)
        {
            //MAUI_02292005: check src_id to prevent reset cc_state when 1A data and 1W data,1W released by NW
            if (online_src_id == src_id)
            {
                l4c_ptr->cc_state[online_src_id] = L4C_COMMAND_STATE;
                l4c_ptr->cc_current_action[online_src_id] = L4C_NO_ACTION;
            }

            if (src_id != RMMI_SRC)
            {
                temp_src = rmmi_ptr->current_src;
                rmmi_ptr->current_src = online_src_id;
                l4c_cc_call_release_rind(msg_ptr->call_id, msg_ptr->cause);
                rmmi_ptr->current_src = temp_src;			
            }
        }

        //MAUI_02292005: If data state is already escaped, reset the flag here
        if ((rmmi_ptr->online_cmd_state == L4C_ONLINE_DATA_STATE) && 
            (rmmi_ptr->online_cmd_state_src_id == src_id))
        {
            rmmi_ptr->online_cmd_state = L4C_COMMAND_STATE;
            rmmi_ptr->online_cmd_state_src_id = INVALID_SRC;
        }
    }

#ifdef __TCPIP__ /* ABM */
    //mtk01616_070917:for CBM , remote disc data call or ME (via ATH or MMI) disconnect
    if (msg_ptr->call_type == CSMCC_DATA_CALL)
    {
        if (l4c_ptr->disc_dialup_req == CSD_BEARER_DIALUP)      //if disc from CBM 
        {
            l4c_ptr->disc_dialup_req = INVALID_BEARER;
            l4c_abm_dialup_disc_rsp_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0, KAL_TRUE);
        }
        else
        {
            l4c_abm_dialup_disc_ind_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0);
        }
    }
#endif /* __TCPIP__, ABM */ 

#ifdef __BT_SUPPORT__
    if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
    {
        if (!
            (l4c_search_all_src(l4c_current_mod_id, CHLD_EXE) == KAL_TRUE ||
             l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE))
        {
            if (csmcc_is_any_call_exist() == KAL_FALSE)
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
            }

            if (rmmi_ptr->indicators.callsetup != RMMI_CIND_CSUP_NONE)
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
            }

            l4c_cc_handfree_callheld_rind();
        }
        else
        {
            kal_trace(TRACE_INFO, INFO_NOT_SEND_CIEV_STATUS);
        }
    }
#endif /* __BT_SUPPORT__ */
    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_CALL_DISCONNECTED, MOD_L4C); 
    l4c_cc_call_release_lind(msg_ptr->call_id, 
                             msg_ptr->cause, 
                             msg_ptr->is_diagnostic_present, 
                             msg_ptr->diagnostic); //MAUI_02526481

#if defined(__CMUX_MODEM_STATUS_SUPPORT__)        
    l4c_ctrl_dcd_status(src_id, MOD_ATCI);			 	
#endif

    /* Johnny: when RMMI send CHLD/ATH to L4C, RMMI does not need l4c_cc_call_release_rind() */
    if (src_id >= RMMI_SRC
        && l4c_ptr->cc_current_action[src_id] != CHLD_EXE && l4c_ptr->cc_current_action[src_id] != ATH_EXE)
    {   //mtk00924: NO CARRIER should given to URC port
	    temp_src = rmmi_ptr->current_src;

        if (msg_ptr->call_type == CSMCC_DATA_CALL)
        {
           /************************************************************************
            OK will be return to cmd channel when signal path is setup
            if OK is sent to cmd channel channel, NO CARRIER should be sent to URC channel
            if OK is NOT sent to cmd channel channel, NO CARRIER should be sent to cmd channel
           ************************************************************************/
            if (l4c_ptr->data_signal_activate == KAL_TRUE)
            {
                //DUMA00212886 l4c_ptr->data_signal_activate = KAL_FALSE;
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
            }
            else
            {
                rmmi_ptr->current_src = msg_ptr->src_id;
            }
        }
        else
        {
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
        }
        l4c_cc_call_release_rind(msg_ptr->call_id, msg_ptr->cause);
	    rmmi_ptr->current_src = temp_src;		
    }

    //DUMA00212886
    if (l4c_ptr->data_signal_activate == KAL_TRUE && msg_ptr->call_type == CSMCC_DATA_CALL)
    {
        l4c_ptr->data_signal_activate = KAL_FALSE;
    }

    /* if waiting call become mt incoming call, send RING to TE */
    result = l4ccsm_cc_get_call_info(l4c_ptr->waiting_call_id, &call_info, &next_call_id); //MAUI_02825249
    if ((result == KAL_TRUE) && (call_info.call_state == CLCC_CALL_INCOMING)) //MAUI_02825249
    {
        l4c_ptr->waiting_call_id = CSMCC_INVALID_CALL_ID;

        if ((l4c_search_all_src(l4c_current_mod_id, CHLD_EXE) == KAL_TRUE &&
            (l4c_ptr->crss_opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT ||
             l4c_ptr->crss_opcode == CSMCC_REL_ACTIVE_AND_ACCEPT))
        #if defined(__BT_SUPPORT__)
            || (l4c_ptr->cc_current_action[RMMI_COMM_PTR->rmmi_hf_src] == ATH_EXE) //for PTS: TC_AG_TCA_BV_05
        #endif
             )
        {
            return;
        }

    #ifdef __BT_SUPPORT__
        if (call_info.call_type == CSMCC_VOICE_CALL || call_info.call_type == CSMCC_AUX_VOICE_CALL)
        {
            l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_NONE);
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_INCOMING);
            l4c_cc_handfree_callheld_rind();
        }
    #endif /* __BT_SUPPORT__ */ 

        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
        if (call_info.number.addr_length != 0)
        {
            addr.length = convert_to_digit_24008((kal_uint8*) & (call_info.number.addr_bcd[1]), (kal_uint8*) addr.number);

            addr.type = call_info.number.addr_bcd[0];
        }

	    temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;

	#ifdef __BT_SUPPORT__
     	if ((call_info.call_type != CSMCC_VOICE_CALL) && (call_info.call_type != CSMCC_AUX_VOICE_CALL))
	    {
    	    rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
	    }
	#endif 
			
        l4c_cc_call_ring_rind(
            call_info.call_id,
            &addr,
            &subaddr,
            &name,
            rmmi_ptr->clip_info.cli_validity,
            call_info.call_type);
	    rmmi_ptr->current_src = temp_src;
	#ifdef __BT_SUPPORT__	
   	    rmmi_ptr->except_src = INVALID_SRC;
	#endif 
    }

    if (msg_ptr->call_id == l4c_ptr->enhanced_ecc_id) //MAUI_02554068
    {
        /* resume to original RAT: check enhanced_ecc_id */
        l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
        l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
    }
    return;
}

#else /* __UCM_SUPPORT__ */ 

#ifdef __TCPIP_OVER_CSD__ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_setup_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_setup_cnf_struct*) local_para_ptr;

    if ((msg_ptr->response == L4C_ERROR) &&
	(msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)) // [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
    }

    if (msg_ptr->response == L4C_OK)
    {
        //mtk01616_071012: we send current cipher ind here , in the case of no cipher in NW or RR channel is reused, this indication will be used
        l4c_sim_cipher_lind(
            ((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)), //MAUI_02580295
            KAL_TRUE,
            l4c_ptr->cipher_ind_msg.gsm_cipher_cond,
            l4c_ptr->cipher_ind_msg.gprs_cipher_cond);
    #if !defined(__MMI_FMI__)
        l4c_sim_cipher_rind(
            ((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)),
            KAL_TRUE,
            l4c_ptr->cipher_ind_msg.gsm_cipher_cond,
            l4c_ptr->cipher_ind_msg.gprs_cipher_cond);
    #endif
    }

    l4ccsm_cc_call_setup_cnf_aux_hdlr(local_para_ptr);
  
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_cnf_abm_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
void l4ccsm_cc_call_setup_cnf_aux_hdlr(local_para_struct *local_para_ptr)
#else /* __TCPIP_OVER_CSD__ */ 
void l4ccsm_cc_call_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
#endif /* __TCPIP_OVER_CSD__ */ 
{
    l4ccsm_cc_call_setup_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    rat_enum new_rat; //MAUI_02320299
#ifdef __TCPIP_OVER_CSD__
    kal_bool from_abm = KAL_FALSE; 
#endif 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_setup_cnf_struct *) local_para_ptr;

    src_id = msg_ptr->src_id;
    if (l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)
        l4c_ptr->cc_retry_ongoing_flag = KAL_FALSE;


#ifdef __TCPIP_OVER_CSD__
    if ((msg_ptr->response == L4C_OK) && (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC)) //for ABM_ACT_ECC
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
//      l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        l4c_cc_exe_call_setup_lrsp(result, msg_ptr->call_id, msg_ptr->is_diagnostic_present, msg_ptr->diagnostic); //MAUI_02526481
        l4c_clear_cc_queued_msg(src_id);
        return;
    }
#endif /*__TCPIP_OVER_CSD__*/

    /* mtk00714 2004/03/03: add for +CEER report */
    l4c_cc_save_ceer_cause(msg_ptr->response,msg_ptr->cause_present,msg_ptr->cause); 
    
    src_id = msg_ptr->src_id;

    if ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
#ifdef __TCPIP_OVER_CSD__
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        ||  (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC)
#endif /*__TCPIP_OVER_CSD__*/
        )
    {
#ifdef __TCPIP_OVER_CSD__
        if ((l4c_ptr->cc_current_action[src_id] == ABM_ACT) || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC))
        {
            from_abm = KAL_TRUE;
        }
#endif /*__TCPIP_OVER_CSD__*/

        
        if (msg_ptr->response == L4C_ERROR)
        {
            if(ecc_custom_support_enhance_retry() == KAL_TRUE)
            {   
                if (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
                {
                    /* retry fail after change RAT, resume to original RAT */
                    l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                    l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
                }
                else if ((l4c_is_test_sim() == KAL_FALSE)
                    && (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
                    && (msg_ptr->cause_present == KAL_TRUE)
                    && (l4c_need_retry_other_rat(src_id, msg_ptr->cause)))
                {
                    new_rat = (rat_enum)l4c_get_ecc_retry_new_rat(); //MAUI_02320299
                    if ((new_rat != RAT_NONE) && (l4c_nw_set_rat_mode_req(L4C_SRC, new_rat) == KAL_TRUE)) //MAUI_02320299
                    {
                        ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_CALL_RETRY, MOD_L4C);
                        l4c_ptr->retry_cc = KAL_TRUE;
                        l4c_ptr->retry_src_id = src_id;
                        l4c_ptr->enhanced_ecc_id = l4c_ptr->mo_call_id;
                        l4c_ptr->cc_current_action[src_id] = ATD_ECC_CHANGE_RAT;
                        return;
                    }
                }
            }

           /* MAUI_02610201: TC01 ask to prevent dialing ecc for a long time if MS is in no service */
        #if defined(__TC01__)  && !defined(EXTERNAL_MMI) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif	
            /* the following code is for RR doing plmn selection or cell reselection
               if MMI request emengency call we should do plmn selection with any plmn then
               after confirm we start send emengency call request to CC */
            if ( (msg_ptr->cause_present == KAL_TRUE)
                     && (((l4c_is_test_sim() == KAL_FALSE)&& (l4c_need_retry(msg_ptr->cause) == KAL_TRUE))
                     ||(msg_ptr->cause == CM_RR_PLMN_SRCH_REJ_EMERGENCY) )
                     && (l4c_cc_retry_allow_for_fta(src_id) == KAL_TRUE))
            {
                ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_CALL_RETRY, MOD_L4C);
                l4c_ptr->retry_cc = KAL_TRUE;
                l4c_start_retry_timer_hdlr(src_id);
                return;
            }

            result.flag = L4C_ERROR;
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->cause;
#ifdef __TCPIP_OVER_CSD__
                if (from_abm)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(msg_ptr->cause);
                }
#endif /*__TCPIP_OVER_CSD__*/

            }
            else
            {
                result.cause = CM_L4C_GEN_CAUSE;
#ifdef __TCPIP_OVER_CSD__
                if (from_abm)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                }
#endif /*__TCPIP_OVER_CSD__*/
            }

            //NO CARRIER is printed by UCM as voice call 
            if (src_id != LMMI_SRC && (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL))
            {
	            kal_uint8 port =0;
		        port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

		        rmmi_start_ath_for_dialup_hdlr(port);		

		        if(msg_ptr->call_type == CSMCC_DATA_CALL)
		        {
	                kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());		   
                    RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
		        }
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        
    #ifdef __OP01__
        {
            kal_bool is_ecc = (l4c_ptr->cc_current_action[src_id] == ATD_ECC)? KAL_TRUE : KAL_FALSE;
            kal_uint8 temp_src;
            rmmi_mo_state_enum call_state = RMMI_MO_STATE_CONF;
            rmmi_cm_call_end_status_enum end_status = CM_CALL_END_OFFLINE;
    
            if (result.flag == L4C_ERROR)
            {
                call_state = RMMI_MO_STATE_CEND;
                end_status = CM_CALL_END_CONF_FAILED;
            }
            temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_call_state_rind(call_state, msg_ptr->call_id,0, end_status, KAL_FALSE,(ps_cause_enum)0, (csmcc_call_type_enum)(msg_ptr->call_type), is_ecc);
            rmmi_ptr->current_src = temp_src;
        }
    #endif
		l4c_cc_exe_call_dial_lrsp(msg_ptr->src_id, 
                                  result.flag, 
                                  result.cause, 
                                  msg_ptr->call_id, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_01924242 MAUI_02526481
        l4c_clear_cc_queued_msg(src_id);
        
#ifdef __TCPIP_OVER_CSD__
        if (from_abm && (msg_ptr->response == L4C_OK))
        {
            l4c_ptr->cc_current_action[src_id] = PPP_ACT;
        }
        else
#endif /*__TCPIP_OVER_CSD__*/
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
    }
    /* MAUI_01787684 UCM3.0 uses CHLD_REQ to disconnect the call and then wait for 
       DIAL_IND/RELEASE_IND to know the MO call has been released */
    else if ((l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE) && (msg_ptr->response == L4C_ERROR))
    {
        if (l4c_ptr->enhanced_ecc_id != CSMCC_INVALID_CALL_ID)
        {
            /* abort change RAT, resume to original RAT */
            l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
            l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
        }
        result.flag = L4C_ERROR;
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            result.cause = msg_ptr->cause;
        }
        else
        {
            result.cause = CM_L4C_GEN_CAUSE;
        }
        l4c_clear_cc_queued_msg(src_id); //we need clean the MO src_id's context
        l4c_cc_exe_call_setup_lrsp(result, msg_ptr->call_id, msg_ptr->is_diagnostic_present, msg_ptr->diagnostic); //MAUI_02526481
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_ccm_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/

void l4ccsm_cc_ccm_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
#ifdef __AOC_SUPPORT__
    l4ccsm_cc_ccm_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_bool puct_valid;
    kal_uint8 currency[3];
    kal_uint8 ppu[18];
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_ccm_ind_struct *) local_para_ptr;

    src_id = msg_ptr->src_id;

    puct_valid = l4c_smu_get_puc_params_req(src_id, (kal_uint8*)currency, (kal_uint8*) ppu);

    if (l4c_ptr->cc_state[src_id] == L4C_COMMAND_STATE)
    {
        if (src_id == LMMI_SRC)
        {
      	    //mtk01616_081119: acm from CSM is the increased call meter since last upate, ccm is the total call meter for this call        
            l4c_cc_call_meter_lind(msg_ptr->call_id, msg_ptr->acm, msg_ptr->ccwv,msg_ptr->ccm,puct_valid,currency,ppu);			
        }
        else
        {
	    temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;

      	    /* mtk01616: TODO!! this ccm value is for specific call.But 27.007 didn't define call_id.
      	       for this URC.It's suggested to add proprietary <call_id> in this URC. It proivde AP the
      	       flexiblity to show the call cost by call or for all calls(ex:1A1H) */
            l4c_cc_call_meter_rind(msg_ptr->call_id, msg_ptr->ccm, msg_ptr->ccwv);
	    rmmi_ptr->current_src = temp_src;
        }
    }
    else if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_STATE)
    {
        if (src_id == LMMI_SRC)
        {
            l4c_cc_call_meter_lind(msg_ptr->call_id, msg_ptr->acm, msg_ptr->ccwv,msg_ptr->ccm,puct_valid,currency,ppu);
        }
        else
        {
            /* ignore */
        }
    }
    else
    {
        /* error */
    }
    return;
#endif /* __AOC_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_alert_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_alert_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_alert_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4ccsm_cc_call_alert_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

#ifndef __TCPIP__
    if (L4C_PTR->cc_current_action[src_id] == L4C_NO_ACTION)
#endif 
    {
        /* only LMMI will handle call alert */
        l4c_cc_call_alert_lind(msg_ptr->alert);
        L4C_PTR->call_alert = (kal_bool)msg_ptr->alert;
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_setup_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_setup_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 cli_validity = 0;
    l4ccsm_cc_call_setup_ind_struct *msg_ptr = NULL;
    l4c_number_struct addr;
    l4c_number_struct redirect_addr;    //mtk01616 070428: pass redirecting number for MMI 
    l4c_sub_addr_struct subaddr;
    kal_uint8 src_id = LMMI_SRC;
    kal_uint8 name_present = 0;
    kal_uint8 cnap_info_exist = 0;
    kal_uint8 tag = 0;
    l4_name_struct l4_name_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_mem_set(&l4_name_ptr, 0, sizeof(l4_name_struct));

    if (l4c_ptr->cfun_state != 1)
    {
        return; //Do not send MT call ring indicatino to MMI if cfun == 4
    }
    //MM is responsible to disconnect the MT call

    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MT_CALL_RECEIVED, MOD_L4C);
				
    msg_ptr = (l4ccsm_cc_call_setup_ind_struct*) local_para_ptr;
    kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));
    kal_mem_set(&redirect_addr, 0, sizeof(l4c_number_struct));  //mtk01616 070428: pass redirecting number for MMI 
    //040324 mtk00468 add for when receive call setup we should forbid any action
    l4c_set_mt_call_event(KAL_TRUE,msg_ptr->call_id);		

    for (src_id = LMMI_SRC; src_id < RMMI_ALL; src_id++)
    {
    #if defined(__TCPIP_OVER_CSD__) //MAUI_02580295
        switch (l4c_ptr->cc_current_action[src_id])
        {
        //MAUI_02063785
            case ABM_ACT:
            case ABM_ACT_APP:
                //case PPP_ACT:
            case ABM_ACT_ECC:
            {
                kal_bool disc_result;
                l4c_result_struct result;

                if (l4c_ptr->cc_current_action[LMMI_SRC] != PPP_ACT)
                {
                    disc_result = l4c_cc_exe_disc_aux_req(LMMI_SRC);
                    if (disc_result == KAL_FALSE)
                    {
                        //No CC connection we got to send the response to MMI
//                      l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
                        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                        result.flag = L4C_ERROR;
                        result.cause = CM_L4C_GEN_CAUSE;
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;     //reset action
                        l4c_clear_cc_queued_msg(src_id);
                    }
                }
                else
                {
                    //mtk00758 - mo csd and mt call collision
                    //l4c_ppp_csd_deactivate_helper(PPPE_MOBILE_DEACT);
                }

            }
        }
    #endif /* __TCPIP_OVER_CSD__ */ 
        /* Johnny: MT call does not abort MO SMS now */

#if 0 //MAUI_02648210 no need to abort SS retry, CC and SS retry are separated
/* under construction !*/
    #if 1
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #ifdef __SAT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif /* __SAT__ */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* mtk00888 20050614: special case - MT call will abort exist SS when SS is retrying */
#endif
    }

#if 0 //mtk02508_090508
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if (msg_ptr->calling_number_present == KAL_TRUE)
    {
        addr.length = convert_to_digit_24008(
                        (kal_uint8*) & (msg_ptr->calling_number.addr.addr_bcd[1]),
                        (kal_uint8*) addr.number);

        addr.type = msg_ptr->calling_number.addr.addr_bcd[0];
    }

    //mtk01616 070428: pass redirecting number for MMI to distinguish the divert call belongs to whcih sim card (for N card , 1 phone)
    if (msg_ptr->redirecting_number_present == KAL_TRUE)
    {
        redirect_addr.length = convert_to_digit_24008(
                                (kal_uint8*) & (msg_ptr->redirecting_number.addr.addr_bcd[1]),
                                (kal_uint8*) redirect_addr.number);
        redirect_addr.type = msg_ptr->redirecting_number.addr.addr_bcd[0];
    }

    /* According to 24.008 (10.5.4.9) */
    if (msg_ptr->calling_number.addr_ind_present)
    {
        cli_validity = (msg_ptr->calling_number.addr_ind & 0x60) >> 5;
    }
    else
    {
        cli_validity = 0;//if presentation indicator is omitted, "00 prsentation allowed" is assumed
    }

#ifdef __CNAP_SUPPORT__
    //mtk01616 070420 get cnap name from CSM
    l4ccsm_cc_get_cnap_info(&name_present, &cnap_info_exist, &tag, &l4_name_ptr);
#endif /* __CNAP_SUPPORT__ */ 

    if (msg_ptr->cw_flag == KAL_TRUE)
    {
        l4c_ptr->waiting_call_id = msg_ptr->call_id; //MAUI_02825249
        
        l4c_cc_call_wait_lind(
            msg_ptr->call_id,
            &addr,
            msg_ptr->call_type,
            name_present,
            cnap_info_exist,
            tag,
            l4_name_ptr.name,
            l4_name_ptr.name_dcs,
            l4_name_ptr.name_length,
            msg_ptr->auto_answer,
            msg_ptr->calling_number.addr_ind_present,
            msg_ptr->calling_number.addr_ind,
            msg_ptr->signal_value_present,
            msg_ptr->signal_value,
            msg_ptr->alerting_pattern_present,
            msg_ptr->alerting_pattern,
            msg_ptr->no_cli_cause_present,
            msg_ptr->no_cli_cause,
            msg_ptr->call_priority_present,
            msg_ptr->call_priority);
    }
    else
    {
        l4c_cc_call_ring_lind(
            msg_ptr->call_id,
            &addr,
            &subaddr,
            &redirect_addr,
            name_present,
            cnap_info_exist,
            tag,
            l4_name_ptr.name,
            l4_name_ptr.name_dcs,
            l4_name_ptr.name_length,
            msg_ptr->auto_answer,
            msg_ptr->call_type,
            msg_ptr->calling_number.addr_ind_present,
            msg_ptr->calling_number.addr_ind,
            msg_ptr->signal_value_present,
            msg_ptr->signal_value,
            msg_ptr->alerting_pattern_present,
            msg_ptr->alerting_pattern,
            msg_ptr->no_cli_cause_present,
            msg_ptr->no_cli_cause,
            msg_ptr->call_priority_present,
            msg_ptr->call_priority);
	
        l4c_sim_cipher_lind(((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)), //MAUI_02580295
            l4c_ptr->cipher_ind_msg.is_gsm_conn_exist, l4c_ptr->cipher_ind_msg.gsm_cipher_cond, l4c_ptr->cipher_ind_msg.gprs_cipher_cond); //gmmreg_cipher_ind_enum
    #if !defined(__MMI_FMI__)
        l4c_sim_cipher_rind(((l4csmu_get_cipher_ind_status() == SMU_CI_ENABLE)?(KAL_TRUE):(KAL_FALSE)),
            l4c_ptr->cipher_ind_msg.is_gsm_conn_exist, l4c_ptr->cipher_ind_msg.gsm_cipher_cond, l4c_ptr->cipher_ind_msg.gprs_cipher_cond);
    #endif
        rmmi_ptr->clip_info.cli_validity = cli_validity;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_disc_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_disc_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_disc_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
#if defined(__TCPIP_OVER_CSD__)
    kal_uint8 result;
#endif 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_disc_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    rmmi_reset_ring_count();

    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
    }
	
#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ABM_ACT:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                result = l4c_cc_exe_disc_aux_req(src_id);
                if (result == KAL_FALSE)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                }
                return;
            case PPP_ACT:
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
            case ABM_DISC:
            case ABM_DEACT:
            case ATH_EXE:
                return;
            default:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 
#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    if (msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        kal_bool result;
        kal_uint8 call_id;
        l4csat_cc_call_disc_ind_req_struct *param_ptr1;

        param_ptr1 = (l4csat_cc_call_disc_ind_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4csat_cc_call_disc_ind_req_struct),
                                                            TD_RESET);
        param_ptr1->result = KAL_TRUE;
        param_ptr1->cause = msg_ptr->cause;

        l4c_send_msg_to_smu(MSG_ID_L4CSAT_CC_CALL_DISC_IND_REQ, param_ptr1);

        result = l4ccsm_cc_get_active_call(&call_id);

        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            l4ccsm_cc_call_disc_req_struct *param_ptr;

            param_ptr = (l4ccsm_cc_call_disc_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct),
                                                            TD_RESET);
            param_ptr->src_id = SAT_SRC;
            param_ptr->call_id = call_id;
            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
        }
        return;
    }
#endif /* __SATCE__ */ 
#endif
    /* only LMMI need to handle ccbs info */
    if (src_id == LMMI_SRC)
    {
        if (msg_ptr->ccbs_possible_present == KAL_TRUE)
        {
            l4c_cc_call_disc_lind(msg_ptr->call_id, 
                                  (kal_bool)msg_ptr->ccbs_possible,
                                  msg_ptr->cause,
                                  msg_ptr->call_type, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_02580295 MAUI_02526481
        }
        else
        {
            l4c_cc_call_disc_lind(msg_ptr->call_id, 
                                  KAL_FALSE, 
                                  msg_ptr->cause, 
                                  msg_ptr->call_type, 
                                  msg_ptr->is_diagnostic_present, 
                                  msg_ptr->diagnostic); //MAUI_02526481
        }
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_rel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_rel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_rel_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id, online_src_id;
    l4c_call_entry_struct call_info;
    kal_uint8 next_call_id;
    kal_bool result; //MAUI_02825249
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_rel_ind_struct*) local_para_ptr;

    rmmi_reset_ring_count();

    /* mtk00714 2004/03/03: add for +CEER report */
    l4c_cc_save_ceer_cause(L4C_ERROR,msg_ptr->cause_present,msg_ptr->cause); 

    src_id = msg_ptr->src_id;
    //040324 mtk00468 add for clear mt_call_incoming flag when one mt call release by NW
    if ((l4c_ptr->mt_call_id == msg_ptr->call_id) && (l4c_ptr->mt_call_incoming == KAL_TRUE))
    {
        /* MAUI_02533764 */
        if (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        {
            l4ccsm_cc_call_accept_cnf_struct accept_cnf;

            accept_cnf.src_id = src_id;
            accept_cnf.response = L4C_ERROR;
            accept_cnf.cause_present = KAL_FALSE;
            accept_cnf.call_id = msg_ptr->call_id;
            l4ccsm_cc_call_accept_cnf_hdlr((local_para_struct *)&accept_cnf, NULL);
        }
        l4c_set_mt_call_event(KAL_FALSE,CSMCC_INVALID_CALL_ID);
    }
#ifdef __SAT__
#ifdef __RSAT__
    /*
     * mtk01616: For RSAT stkcall setup, then ATH abort. L4C have to provide terminal response for original stkcall setup
     * Consider this case: 1A SAT call + 1MO SAT call,during callsetup 1A disc by NW. L4C need not to send terminal response(so check for action ATH_EXE)
     */
    if (l4c_ptr->cc_current_action[SAT_SRC] == SAT_ATD_EXE && src_id == SAT_SRC &&
        l4c_search_other_src(LMMI_SRC, ATH_EXE) == KAL_TRUE)
    {
        sat_setup_call_res_struct *param_ptr = (sat_setup_call_res_struct*)
            construct_local_para(
                (kal_uint16) sizeof(sat_setup_call_res_struct),
                TD_RESET);

        kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
        param_ptr->res = SAT_USER_CLEAR_DOWN_CALL_BEFORE_CONNECTION_RELEASE;
        param_ptr->cause = L4C_NO_CAUSE;            /* additional info */
        l4c_sat_setup_call_res(param_ptr);

        l4c_clear_cc_queued_msg(SAT_SRC);
        l4c_ptr->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
    }
#endif /* __RSAT__ */ 
#endif /* __SAT__ */ 

    /* MAUI_01808300: src_id has not received SETUP_CNF but received REL_IND from NW
       Before CSM will send SETUP_CNF fail because MMI has not received DIAL_IND
       Now UCM3.0 gets call_id from CPI_IND so CSM won't help to send SETUP_CNF 
       We need to clear MO state of L4C here */
    if ((l4c_ptr->mo_call_id == msg_ptr->call_id) && 
        ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
        || (l4c_ptr->cc_current_action[src_id] == SAT_ATD_EXE)))
    {
        l4c_clear_cc_queued_msg(src_id);
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    }

    if (msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
    }

#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        l4c_cc_call_release_lind(msg_ptr->call_id, 
                                 msg_ptr->cause,
                                 msg_ptr->is_diagnostic_present, 
                                 msg_ptr->diagnostic); //MAUI_02526481

        if (l4c_search_all_src(l4c_current_mod_id, CHLD_CSD_DEACT) == KAL_TRUE) //MAUI_02574001
        {       /* mtk00924_060615: 1 WAP over CSD, 1 MT call, AT+CHLD=1 to release and accpet, at this time, src_id in rel_ind is LMMI, 
                   but the CHLD is form RMMI, therefore, we should check RMMI additionally */
//MAUI_01810924            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
//MAUI_01810924            l4c_ptr->cc_current_action[RMMI_SRC] = CHLD_EXE;
            return;
        }

        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ABM_ACT:
                if (msg_ptr->cause_present)
                {
                    l4c_cc_abm_setup_rsp_fail_helper(msg_ptr->cause);
                }
                else
                {
//                  l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
		    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());				 
                }
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                return;
            case PPP_ACT:
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
            case ABM_DISC:
            case ATH_EXE: //LMMI_SRC aborts MO CSD
//MAUI_02574001            case CHLD_CSD_DEACT:
                return;
            case ABM_DEACT:
                l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                //break;
                return;
#if 0 //MAUI_01810924
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
            default:
                l4c_ptr->cc_current_action[src_id] = ABM_DISC;
                l4c_ppp_csd_deactivate_helper(PPPE_NW_DEACT);
                return;
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 

#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    if (src_id == SAT_SRC && msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        if (l4c_ptr->cc_current_action[src_id] == SAT_CSD_EXE)
        {
            l4csat_csm_open_csd_res_struct *local_ptr;

            local_ptr = (l4csat_csm_open_csd_res_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4csat_csm_open_csd_res_struct),
                                                            TD_RESET);

            local_ptr->result = KAL_FALSE;
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                local_ptr->cause = msg_ptr->cause;
            }
            else
            {
                local_ptr->cause = CM_L4C_GEN_CAUSE;
            }
            l4c_send_msg_to_smu(MSG_ID_L4CSAT_CSM_OPEN_CSD_RES, local_ptr);
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        }
        else if (msg_ptr->cause_present == KAL_TRUE)
        {
            kal_bool result;
            kal_uint8 call_id;

            l4csat_cc_call_disc_ind_req_struct *param_ptr1;

            param_ptr1 = (l4csat_cc_call_disc_ind_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4csat_cc_call_disc_ind_req_struct), TD_RESET);
            param_ptr1->result = KAL_TRUE;
            param_ptr1->cause = msg_ptr->cause;

            l4c_send_msg_to_smu(MSG_ID_L4CSAT_CC_CALL_DISC_IND_REQ, param_ptr1);

            result = l4ccsm_cc_get_active_call(&call_id);

            if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
            {
                l4ccsm_cc_call_disc_req_struct *param_ptr;

                param_ptr = (l4ccsm_cc_call_disc_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct), TD_RESET);
                param_ptr->src_id = src_id;
                param_ptr->call_id = call_id;

                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
            }
        }
        return;
    }
#endif /* __SATCE__ */ 
#endif

    if (l4c_check_online_state(&online_src_id,L4C_ONLINE_DATA_GPRS_STATE)!= KAL_TRUE)
    {
        rmmi_ptr->uart_in_data_mode = KAL_FALSE;

    #ifdef __IRDA_SUPPORT__
        l4c_ptr->uart_data_mode = L4C_NONE_DATA;
    #endif 
    }

    if ((msg_ptr->src_id == LMMI_SRC) && (l4c_ptr->cc_state[LMMI_SRC] == L4C_ONLINE_DATA_STATE))
    {
        l4c_ptr->cc_state[LMMI_SRC] = L4C_COMMAND_STATE;
        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
    }

    if(msg_ptr->call_type == CSMCC_DATA_CALL || msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        kal_uint8 port =0;
        kal_uint8 cid =0;
		
        cid = rmmi_srcid_2_cid(src_id);

        //mtk01616_090302:for MT data call end by NW. src_id is 0,cannot mapped to a valid cid			
        if(cid != 0xff) 
        {
            port = rmmi_cid_2_port(cid);
		
            rmmi_start_ath_for_dialup_hdlr(port);		
            if(msg_ptr->call_type == CSMCC_DATA_CALL)
            {
                if (RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
                {
                    kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());
                    RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
                }
            }	
        }	
    }	

#ifdef __TCPIP__ /* ABM */
    //mtk01616_070917:for CBM , remote disc data call or ME (via ATH or MMI) disconnect
    if (msg_ptr->call_type == CSMCC_DATA_CALL)
    {
        if (l4c_ptr->disc_dialup_req == CSD_BEARER_DIALUP)      //if disc from CBM 
        {
            l4c_ptr->disc_dialup_req = INVALID_BEARER;
            l4c_abm_dialup_disc_rsp_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0, KAL_TRUE);
        }
        else
        {
            l4c_abm_dialup_disc_ind_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0);
        }
    }
#endif /* __TCPIP__, ABM */ 

    if((msg_ptr->call_type == CSMCC_DATA_CALL) || (msg_ptr->call_type == CSMCC_FAX_CALL))
    {
        if(l4c_check_online_state(&online_src_id, L4C_ONLINE_DATA_STATE) == KAL_TRUE)
        {
            //MAUI_02292005: check src_id to prevent reset cc_state when 1A data and 1W data,1W released by NW
            if (online_src_id == src_id)
            {
                l4c_ptr->cc_state[online_src_id] = L4C_COMMAND_STATE;
                l4c_ptr->cc_current_action[online_src_id] = L4C_NO_ACTION;
            }
        }

        //MAUI_02292005: If data state is already escaped, reset the flag here
        if ((rmmi_ptr->online_cmd_state == L4C_ONLINE_DATA_STATE) && 
            (rmmi_ptr->online_cmd_state_src_id == src_id))
        {
            rmmi_ptr->online_cmd_state = L4C_COMMAND_STATE;
            rmmi_ptr->online_cmd_state_src_id = INVALID_SRC;
        }
    }

    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_CALL_DISCONNECTED, MOD_L4C);
    l4c_cc_call_release_lind(msg_ptr->call_id, 
                             msg_ptr->cause, 
                             msg_ptr->is_diagnostic_present, 
                             msg_ptr->diagnostic); //MAUI_02526481

    result = l4ccsm_cc_get_call_info(l4c_ptr->waiting_call_id, &call_info, &next_call_id); //MAUI_02825249
    if ((result == KAL_TRUE) && (call_info.call_state == CLCC_CALL_INCOMING))
    {
        /* MAUI_02825249: 
            1.reset L4C context when waiting call becomes incoming call
            2.ring is printed by UCM 
        */
        l4c_ptr->waiting_call_id = CSMCC_INVALID_CALL_ID;
    }

    if (msg_ptr->call_id == l4c_ptr->enhanced_ecc_id) //MAUI_02554068
    {
        /* resume to original RAT: check enhanced_ecc_id */
        l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
        l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
    }

    return;
}

#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_modify_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_modify_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_modify_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_modify_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if ((src_id != RMMI_SRC) 
#if defined(__BT_SUPPORT__) 		
		&& (src_id != RMMI_COMM_PTR->rmmi_hf_src)
#endif		
		)
    {
        return;
    }

    /* abort previous cmd req */
    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    if (msg_ptr->cur_call_type == CSMCC_DATA_CALL)
    {
        /* l4ccsm_cc_uart_transfer_req_struct *param;
           
           param = (l4ccsm_cc_uart_transfer_req_struct *)
           construct_local_para(
           (kal_uint16)sizeof(l4ccsm_cc_uart_transfer_req_struct),
           TD_RESET);
           
           param->is_esc_off = KAL_FALSE; */

	temp_src = rmmi_ptr->current_src;		
        rmmi_ptr->current_src = src_id;
        l4c_cc_call_modify_rind(msg_ptr->cur_call_type);
	rmmi_ptr->current_src = temp_src;		
        rmmi_ptr->uart_in_data_mode = KAL_TRUE;
    #ifdef __IRDA_SUPPORT__
        l4c_ptr->uart_data_mode = L4C_CSD_DATA;
    #endif 
        /* l4c_send_msg_to_csm ( MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ,
           param, NULL, 0);         */
        l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
    }
    else
    {
        rmmi_ptr->uart_in_data_mode = KAL_FALSE;
    #ifdef __IRDA_SUPPORT__
        l4c_ptr->uart_data_mode = L4C_NONE_DATA;
    #endif 

	temp_src = rmmi_ptr->current_src;			
        rmmi_ptr->current_src = src_id;
        l4c_cc_call_modify_rind(msg_ptr->cur_call_type);
	rmmi_ptr->current_src = temp_src;		
		
        l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
        /* get uart port back */
        //rmmi_obtain_uart_control();
    }

    /* only RMMI can handle call modify */
    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_attach_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_attach_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_attach_ind_struct *msg_ptr;

    msg_ptr = (l4ccsm_cc_attach_ind_struct*) local_para_ptr;

    /* mtk00468 add for AUX turn off loudspeaker and keep adc value pool */
    l4cuem_call_status_req_ind(UEM_CALL_CONNECT);

    l4c_cc_speech_lind(KAL_TRUE, msg_ptr->rat, msg_ptr->irho_speech_on_off);

#if !defined(__MMI_FMI__) || defined(__ESPEECH_URC_SUPPORT__)
    {
        kal_uint8 temp_src;
		rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;				
        l4c_cc_speech_rind(KAL_TRUE, msg_ptr->rat, msg_ptr->irho_speech_on_off);
        rmmi_ptr->current_src = temp_src;				
    }
#endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_detach_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_detach_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_detach_ind_struct *msg_ptr;

    msg_ptr = (l4ccsm_cc_detach_ind_struct*) local_para_ptr;

    l4c_cc_speech_lind(KAL_FALSE, msg_ptr->rat, msg_ptr->irho_speech_on_off);

#if !defined(__MMI_FMI__) || defined(__ESPEECH_URC_SUPPORT__)
    {
        kal_uint8 temp_src;
		rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_speech_rind(KAL_FALSE, msg_ptr->rat, msg_ptr->irho_speech_on_off);
        rmmi_ptr->current_src = temp_src;				
    }
#endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_notify_ss_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_notify_ss_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_notify_ss_ind_struct *msg_ptr;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_notify_ss_ind_struct*) local_para_ptr;

    switch (msg_ptr->notify_ss_arg.type)
    {
        case CSMCC_NOTIFY_CFU:
        case CSMCC_NOTIFY_CFC:
        case CSMCC_NOTIFY_CF:
        case CSMCC_NOTIFY_CF_CFU:
        case CSMCC_NOTIFY_CF_CFC:
        case CSMCC_NOTIFY_CF_CFB:
        case CSMCC_NOTIFY_CF_CFNRY:
        case CSMCC_NOTIFY_CF_CFNRC:
        case CSMCC_NOTIFY_BAC:
        case CSMCC_NOTIFY_BAOC:
        case CSMCC_NOTIFY_BAIC:
        case CSMCC_NOTIFY_CW:
        case CSMCC_NOTIFY_CALL_HELD:
        case CSMCC_NOTIFY_CALL_RETRIEVED:
        case CSMCC_NOTIFY_CLIR_REJECT:
        case CSMCC_NOTIFY_MPTY:
            l4c_cc_notify_ss_lind(
                msg_ptr->call_id,
                msg_ptr->notify_ss_arg.type,
                msg_ptr->notify_ss_arg.status_present,
                msg_ptr->notify_ss_arg.status,
                msg_ptr->notify_ss_arg.notification_present,
                msg_ptr->notify_ss_arg.notification);

            temp_src = rmmi_ptr->current_src;			
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_notify_ss_rind(msg_ptr->call_id, msg_ptr->notify_ss_arg.type, msg_ptr->notify_ss_arg.notification);//mtk02508_090223
            rmmi_ptr->current_src = temp_src;					

            break;
        case CSMCC_NOTIFY_CUG:
//MAUI_01998659            l4c_cc_notify_ss_cug_lind(msg_ptr->call_id, msg_ptr->notify_ss_arg.cug_index);

            temp_src = rmmi_ptr->current_src;			
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_notify_ss_cug_rind(msg_ptr->call_id, msg_ptr->notify_ss_arg.cug_index);
            rmmi_ptr->current_src = temp_src;					
			
            break;
        case CSMCC_NOTIFY_ECT_ACTIVE:
        case CSMCC_NOTIFY_ECT_ALERTING:
        {
            l4ccsm_cc_ect_rdn_struct *ind_ptr;
            l4_addr_bcd_struct *addr_ptr;
            kal_bool present = KAL_FALSE;   
            l4c_number_struct addr;
            l4c_sub_addr_struct sub_addr;

            ind_ptr = &msg_ptr->notify_ss_arg.ect_rdn;
            kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
            kal_mem_set(&sub_addr, 0, sizeof(l4c_sub_addr_struct));
            if (ind_ptr->ect_rdn_present == KAL_TRUE)
            {
                l4ccsm_cc_rdn_addr_struct *temp_ptr;

                switch (ind_ptr->rdn_choice_tag)
                {
                    case RDN_ALLOWED:
                        present = KAL_TRUE;
                        temp_ptr = &(ind_ptr->rdn_choice_value.presentationAllowedAddress);
                        addr_ptr = &temp_ptr->partyNumber;
                        addr.type = addr_ptr->addr_bcd[0];
                        addr.length = convert_to_digit(&addr_ptr->addr_bcd[1], addr.number);
                        if (temp_ptr->partyNumberSubaddress_present == KAL_TRUE)
                        {
                            temp_ptr->partyNumberSubaddress.sub_addr[temp_ptr->partyNumberSubaddress.sub_addr_len] =
                                0xff;
                            sub_addr.length = convert_to_digit(&(temp_ptr->partyNumberSubaddress.sub_addr[2]), sub_addr.number);
                            sub_addr.type = 129;
                        }
                        break;

                    case RDN_RESTRICTEDADDR:
                        present = KAL_TRUE;
                        temp_ptr = &ind_ptr->rdn_choice_value.presentationRestrictedAddress;
                        addr_ptr = &temp_ptr->partyNumber;
                        addr.type = addr_ptr->addr_bcd[0];
                        addr.length = convert_to_digit(&addr_ptr->addr_bcd[1], addr.number);
                        if (temp_ptr->partyNumberSubaddress_present == KAL_TRUE)
                        {
                            temp_ptr->partyNumberSubaddress.sub_addr[temp_ptr->partyNumberSubaddress.sub_addr_len] =
                                0xff;
                            sub_addr.length = convert_to_digit(&(temp_ptr->partyNumberSubaddress.sub_addr[2]), sub_addr.number);
                            sub_addr.type = 129;
                        }
                        break;

                    case RDN_RESTRICTED:
                    case RDN_UNAVAILABLE:
                        present = KAL_FALSE;
                        break;
                }
                l4c_cc_notify_ss_ect_lind(msg_ptr->call_id, present, &addr, &sub_addr);

                temp_src = rmmi_ptr->current_src;			
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
                l4c_cc_notify_ss_ect_rind(msg_ptr->call_id, present, &addr, &sub_addr, msg_ptr->notify_ss_arg.type);
                rmmi_ptr->current_src = temp_src;									
            }
            break;
        }
    #ifdef __CNAP_SUPPORT__
        case CSMCC_NOTIFY_CNAP:
        {
            kal_uint8 name_present;
            kal_uint8 cnap_info_exist;
            kal_uint8 tag;
            l4_name_struct l4_name_ptr;

            l4ccsm_cc_get_cnap_info(&name_present, &cnap_info_exist, &tag, &l4_name_ptr);

            if (cnap_info_exist == KAL_TRUE)
            {
                l4c_cc_notify_ss_cnap_lind(
                    msg_ptr->call_id,
                    name_present,
                    cnap_info_exist,
                    tag,
                    l4_name_ptr.name,
                    l4_name_ptr.name_dcs,
                    l4_name_ptr.name_length);

                l4c_cc_call_ecnap_rind(msg_ptr->call_id, &l4_name_ptr.name[0], l4_name_ptr.name_dcs, l4_name_ptr.name_length);
            }

            break;
        }
    #endif /* __CNAP_SUPPORT__ */ 

        case CSMCC_NOTIFY_CCBS:
        {
            l4ccsm_cc_ccbs_ind_struct *ind_ptr;
            l4c_number_struct addr;
            l4c_sub_addr_struct sub_addr;

            ind_ptr = &msg_ptr->notify_ss_arg.ccbs_ind;
            kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
            kal_mem_set(&sub_addr, 0, sizeof(l4c_sub_addr_struct));
            if (ind_ptr->ccbs_feature_present == KAL_TRUE)
            {
                if (ind_ptr->ccbs_feature.b_subscriberNumber_present)
                {
                    addr.type = ind_ptr->ccbs_feature.b_subscriberNumber.addr_bcd[0];
                    addr.length = convert_to_digit(&ind_ptr->ccbs_feature.b_subscriberNumber.addr_bcd[1], addr.number);
                    if (ind_ptr->ccbs_feature.b_subscriberSubaddress_present)
                    {
                        ind_ptr->ccbs_feature.b_subscriberSubaddress.sub_addr[ind_ptr->ccbs_feature.
                                                                              b_subscriberSubaddress.sub_addr_len] =
                            0xff;
                        sub_addr.length = convert_to_digit(
                                            &(ind_ptr->ccbs_feature.b_subscriberSubaddress.sub_addr[2]),
                                            sub_addr.number);
                        sub_addr.type = 129;
                    }
                }
                else
                {
                    if (msg_ptr->ccbs_recall_numP)
                    {
                        addr.type = msg_ptr->ccbs_recall_num.addr_bcd[0];
                        //addr.length = msg_ptr->ccbs_recall_num.addr_length;
                        addr.length = convert_to_digit(&(msg_ptr->ccbs_recall_num.addr_bcd[1]), addr.number);
                        //kal_mem_cpy(addr.number, &(msg_ptr->ccbs_recall_num.addr_bcd[1]), addr.length);
                    }
                }
                l4c_cc_notify_ss_ccbs_lind(
                    msg_ptr->call_id,
                    KAL_TRUE /* ind_ptr->ccbs_feature.b_subscriberNumber_present */ ,
                    &addr,
                    (kal_bool)ind_ptr->ccbs_feature.b_subscriberSubaddress_present,
                    &sub_addr,
                    (kal_bool)ind_ptr->ccbs_feature.ccbs_index_present,
                    ind_ptr->ccbs_feature.ccbs_index,
                    (kal_bool)ind_ptr->ccbs_feature.bs_code_present,
                    ind_ptr->ccbs_feature.bs_code,
                    (kal_bool)ind_ptr->alertingPattern_present,
                    ind_ptr->altertingPattern);
            }
            else
            {
                l4c_cc_notify_ss_ccbs_lind(
                    msg_ptr->call_id,
                    KAL_FALSE,
                    &addr,
                    KAL_FALSE,
                    &sub_addr,
                    KAL_FALSE,
                    0,
                    KAL_FALSE,
                    0,
                    (kal_bool)ind_ptr->alertingPattern_present,
                    ind_ptr->altertingPattern);
            }
            break;
        }
        case CSMCC_NOTIFY_CD:
        case CSMCC_NOTIFY_HELD_CALL_RELEASED:
        {
            if(msg_ptr->notify_ss_arg.type == CSMCC_NOTIFY_CD)
            {	
                l4c_cc_notify_ss_lind(
                    msg_ptr->call_id,
                    msg_ptr->notify_ss_arg.type,
                    msg_ptr->notify_ss_arg.status_present,
                    msg_ptr->notify_ss_arg.status,
                    msg_ptr->notify_ss_arg.notification_present,
                    msg_ptr->notify_ss_arg.notification);
            }

            temp_src = rmmi_ptr->current_src;									
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_notify_ss_rind(msg_ptr->call_id, msg_ptr->notify_ss_arg.type, msg_ptr->notify_ss_arg.notification);//mtk02508_090223
            rmmi_ptr->current_src = temp_src;					
			
            break;
        }
        default:
            break;
    }
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_connect_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_connect_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 temp_src2;
    l4ccsm_cc_call_connect_ind_struct *msg_ptr = NULL;
    l4c_call_entry_struct call_entry;
    l4c_number_struct addr, addr2;
    l4c_sub_addr_struct subaddr, subaddr2;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_connect_ind_struct*) local_para_ptr;

    kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));
    kal_mem_set(&addr2, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr2, 0, sizeof(l4c_sub_addr_struct));

#ifdef __BT_SUPPORT__
    if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
    {
        l4c_cc_handfree_rind(RMMI_CIND_CALL, RMMI_CIND_CC_ACTIVE);
        l4c_cc_handfree_callheld_rind();
        l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
    }
#endif /* __BT_SUPPORT__ */ 

    l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);

    if (msg_ptr->connected_number_present == KAL_TRUE)
    {
        msg_ptr->connected_number.addr.addr_bcd[msg_ptr->connected_number.addr.addr_length] = 0xff;
        addr.length = convert_to_digit((kal_uint8*) & (msg_ptr->connected_number.addr.addr_bcd[1]), (kal_uint8*) addr.number);

        addr.type = msg_ptr->connected_number.addr.addr_bcd[0];

        //mtk02508_090309 COLP URC for RMMI
        addr2.length = convert_to_digit((kal_uint8*) & (msg_ptr->connected_number.addr.addr_bcd[1]), (kal_uint8*) addr2.number);
        addr2.type = msg_ptr->connected_number.addr.addr_bcd[0];
        //mtk02508_090309 end
    }

    if (msg_ptr->connected_sub_addr_present == KAL_TRUE)
    {
        msg_ptr->connected_sub_addr.sub_addr[msg_ptr->connected_sub_addr.sub_addr_len] = 0xff;
        subaddr.length = convert_to_digit(&(msg_ptr->connected_sub_addr.sub_addr[2]), subaddr.number);
        subaddr.type = 129;
        
        //mtk02508_090309 COLP URC for RMMI
        subaddr2.length = convert_to_digit(&(msg_ptr->connected_sub_addr.sub_addr[2]), subaddr2.number);
        subaddr2.type = 129;
        //mtk02508_090309 end
    }
    /* MMI can not handle WAP call when connect indication recieved, therefore
       we should ignore this indication message to LMMI */

       l4c_cc_call_connect_lind(&addr, &subaddr, msg_ptr->call_type, msg_ptr->call_id);

    //mtk02508_090309 COLP URC for RMMI
    /* print +COLP unsolicited result code if enable */
    if (rmmi_ptr->report_mode.colp == RMMI_ENABLE_REPORT)
    {
        temp_src2 = rmmi_ptr->current_src;		
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_colp_unsolicited_rsp_fmttr(&addr2, &subaddr2, NULL);
        rmmi_ptr->current_src = temp_src2;
    }    
    //mtk02508_090309 end
    return;
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_connect_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_connect_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 src_id, temp_src2;
    l4ccsm_cc_call_connect_ind_struct *msg_ptr = NULL;
    l4c_call_entry_struct call_entry;
    l4c_number_struct addr, addr2;
    l4c_sub_addr_struct subaddr, subaddr2;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_connect_ind_struct*) local_para_ptr;

    kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));
    kal_mem_set(&addr2, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr2, 0, sizeof(l4c_sub_addr_struct));

    l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);

    if (msg_ptr->connected_number_present == KAL_TRUE)
    {
        msg_ptr->connected_number.addr.addr_bcd[msg_ptr->connected_number.addr.addr_length] = 0xff;
        addr.length = convert_to_digit((kal_uint8*) & (msg_ptr->connected_number.addr.addr_bcd[1]), (kal_uint8*) addr.number);

        addr.type = msg_ptr->connected_number.addr.addr_bcd[0];

        //mtk02508_090309 COLP URC for RMMI
        addr2.length = convert_to_digit((kal_uint8*) & (msg_ptr->connected_number.addr.addr_bcd[1]), (kal_uint8*) addr2.number);
        addr2.type = msg_ptr->connected_number.addr.addr_bcd[0];
        //mtk02508_090309 end
    }

    if (msg_ptr->connected_sub_addr_present == KAL_TRUE)
    {
        msg_ptr->connected_sub_addr.sub_addr[msg_ptr->connected_sub_addr.sub_addr_len] = 0xff;
        subaddr.length = convert_to_digit(&(msg_ptr->connected_sub_addr.sub_addr[2]), subaddr.number);
        subaddr.type = 129;

        //mtk02508_090309 COLP URC for RMMI
        subaddr2.length = convert_to_digit(&(msg_ptr->connected_sub_addr.sub_addr[2]), subaddr2.number);
        subaddr2.type = 129;
        //mtk02508_090309 end
    }
    /* MMI can not handle WAP call when connect indication recieved, therefore
       we should ignore this indication message to LMMI */

    l4c_cc_call_connect_lind(&addr, &subaddr, msg_ptr->call_type, msg_ptr->call_id);

    //mtk02508_090309 COLP URC for RMMI
    /* print +COLP unsolicited result code if enable */
    if (rmmi_ptr->report_mode.colp == RMMI_ENABLE_REPORT)
    {
        temp_src2 = rmmi_ptr->current_src;		
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_colp_unsolicited_rsp_fmttr(&addr2, &subaddr2, NULL);
        rmmi_ptr->current_src = temp_src2;
    }    
    //mtk02508_090309 end
    return;
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_uart_transfer_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_uart_transfer_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    l4ccsm_cc_uart_transfer_ind_struct *msg_ptr;
    kal_uint8 port, src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_uart_transfer_ind_struct*) local_para_ptr;

    port = msg_ptr->port;
    src_id = l4c_check_port_owner_source(port);
    rmmi_obtain_uart_control(port, KAL_FALSE);

    if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_STATE)
    {

        rmmi_ptr->uart_in_data_mode = KAL_FALSE;
    #ifdef __IRDA_SUPPORT__
        l4c_ptr->uart_data_mode = L4C_NONE_DATA;
    #endif 
        l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

        if (msg_ptr->is_esc == KAL_TRUE)
        {
            rmmi_ptr->current_src = src_id;
            rmmi_ptr->online_cmd_state = L4C_ONLINE_DATA_STATE;
     		kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, msg_ptr->port, custom_get_dcd_value_for_cmd_state());
	    	RMMI_UART_CtrlDCD((UART_PORT)msg_ptr->port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI); //note0324
            rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
        }
    }
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_csd_est_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_csd_est_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_csd_est_ind_struct *msg_ptr;
    l4ccsm_cc_uart_transfer_req_struct *param_ptr;
    kal_uint8 src_id;
    kal_uint8 temp_src; 

#ifdef __CSD_FAX__      /* add by mtk00714 */
    kal_bool ret_val;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[8];
    kal_uint8 string_length;
#endif /* __CSD_FAX__ */ 
    l4c_call_entry_struct call_entry;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_csd_est_ind_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

#ifdef __CSD_FAX__
    if (msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        // hogan: assign fax_scr_id value
        l4c_ptr->fax_src_id = src_id;

        ret_val = l4ccsm_cc_get_fclass_mode(&fclass_mode);
        serv_class = check_g3_service_class_code(fclass_mode);


        /* l4c_t30_act_rrsp: response result_code to DTE */
        if ((serv_class == G3_SERV_CLASS_1) || (serv_class == G3_SERV_CLASS_1_0))
        {
            kal_sprintf((kal_char*) buffer, "CONNECT");
        }

        else if (serv_class == G3_SERV_CLASS_2)
        {
            kal_sprintf((kal_char*) buffer, "+FCON");
        }

        else if (serv_class == G3_SERV_CLASS_2_0)
        {
            kal_sprintf((kal_char*) buffer, "+FCO");
        }

        rsp_str = &buffer[0];
        string_length = strlen((char*)rsp_str);
        rmmi_ptr->current_src = src_id;
        rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

        if ((serv_class == G3_SERV_CLASS_1) || (serv_class == G3_SERV_CLASS_1_0))
        {
            l4c_t30_transfer_uart_req_struct *param_ptr;

            param_ptr = (l4c_t30_transfer_uart_req_struct*) construct_local_para
                ((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);
            if (src_id >= RMMI_SRC)
            {
            #if defined(__CMUX_REDIRECT_DATA_CHANNEL__) //data call at data channel
                if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
                {
                    src_id = RMMI_PTR->rmmi_data_channel_src;
                    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
                }
                else
                {
                    param_ptr->port = PS_UART_PORT;
                }
            #else 
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
            #endif /* __CMUX_REDIRECT_DATA_CHANNEL__ */ 
            }

            l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);
            /* no field in this msg */

            /* uart now should belong to T30 */
            rmmi_ptr->uart_in_data_mode = KAL_TRUE;
            //src_id = RMMI_SRC; // Fax : only allow src_id = RMMI_SRC ;
            //( eg. answer fax call from LMMI )
            l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
        }

        return;
    }
#endif /* __CSD_FAX__ */ 

#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        //mtk00758 - mark for mo csd and mt call collision   
        //if (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        {
            l4cppp_csd_activate_req_struct *param_ptr;

            param_ptr = (l4cppp_csd_activate_req_struct*) l4c_ptr->csd_parameter.data; //MAUI_02395134

            stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_CSD);

            l4c_send_msg_to_ppp(MSG_ID_L4CPPP_CSD_ACTIVATE_REQ, param_ptr);

            //MAUI_02395134 reset context
            if (l4c_ptr->csd_parameter.length > 0)
            {
                l4c_ptr->csd_parameter.length = 0;
                l4c_ptr->csd_parameter.data = NULL;
            }
        }
        return;
    }
#endif /* __TCPIP_OVER_CSD__ */ 

#ifdef __SATCE_CSD__ //MAUI_02395134
#if defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)
    if (msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        l4cppp_csd_activate_req_struct *param_ptr;
        csmcc_sat_profile_struct sat_profile;

        l4ccsm_cc_get_sat_prof(msg_ptr->csd_prof_id, &sat_profile);

        param_ptr = (l4cppp_csd_activate_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4cppp_csd_activate_req_struct),
                                                        TD_RESET);

        param_ptr->csd_mod_id = sat_profile.csd_module;
        kal_mem_cpy(param_ptr->username, sat_profile.user_id, CSD_USER_ID_LEN);
        kal_mem_cpy(param_ptr->password, sat_profile.user_pwd, CSD_USER_PWD_LEN);

        stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_CSD);

        l4c_send_msg_to_ppp(MSG_ID_L4CPPP_CSD_ACTIVATE_REQ, param_ptr);
        return;
    }
#endif 
#endif

    /* CSMCC_DATA_CALL */
    param_ptr = (l4ccsm_cc_uart_transfer_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_uart_transfer_req_struct),
                                                        TD_RESET);

    //if(src_id == RMMI_SRC)
#if defined(__CMUX_REDIRECT_DATA_CHANNEL__)   //data call at data channel
    if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
    {
        src_id = RMMI_PTR->rmmi_data_channel_src;
        param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    }
    else
    {
        param_ptr->port = (kal_uint8)PS_UART_PORT;
    }
#else /* !__CMUX_REDIRECT_DATA_CHANNEL__ */ 
    if(rmmi_srcid_2_cid(src_id) == 0xff)
    {
        kal_trace(TRACE_WARNING, WARNING_DATA_CALL_INVALID_CID);		
	    free_local_para(( local_para_struct * )param_ptr);			
	    l4c_cc_exe_chld_req(src_id,CSMCC_REL_ALL_EXCEPT_WAITING_CALL,0);
	    return;
    }
    else
    {
        param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    }
#endif /* __CMUX_REDIRECT_DATA_CHANNEL__ */ 

    param_ptr->is_esc_off = KAL_FALSE;

#ifdef __IRDA_SUPPORT__
    l4c_ptr->uart_data_mode = L4C_CSD_DATA;
#endif 

    //mtk01616_080613: print CONNECT when data path established
    l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);

    if(msg_ptr->call_type == CSMCC_DATA_CALL)
        l4c_ptr->data_signal_activate = KAL_TRUE;
    temp_src = rmmi_ptr->current_src;		
    rmmi_ptr->current_src = msg_ptr->src_id;// always return CONNECT to the original command channel
    l4c_cc_call_connect_rind(call_entry.call_mode, msg_ptr->call_id);
    rmmi_ptr->current_src = temp_src;		


#if defined(__CMUX_MODEM_STATUS_SUPPORT__)        
    l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
#else	
    if (RMMI_UART_GetOwnerID((UART_PORT)param_ptr->port) == MOD_ATCI)
    {
        kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, param_ptr->port, custom_get_dcd_value_for_data_state());
        RMMI_UART_CtrlDCD((UART_PORT)param_ptr->port , (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);
    }
#endif

    rmmi_ptr->uart_in_data_mode = KAL_TRUE;

#ifdef __TCPIP__ /* ABM */
    l4c_abm_dialup_connect_ind_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0);
#endif 

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ, param_ptr, NULL, 0);
    l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_csd_est_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_csd_est_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_csd_est_ind_struct *msg_ptr;
    l4ccsm_cc_uart_transfer_req_struct *param_ptr;
    kal_uint8 src_id;
#ifdef __CSD_FAX__      
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[8];
    kal_uint8 string_length;
#endif /* __CSD_FAX__ */ 
    l4c_call_entry_struct call_entry;
    kal_uint8 temp_src; 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_csd_est_ind_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

#ifdef __CSD_FAX__
    if (msg_ptr->call_type == CSMCC_FAX_CALL)
    {
        // hogan: assign fax_scr_id value
        l4c_ptr->fax_src_id = src_id;

        l4ccsm_cc_get_fclass_mode(&fclass_mode);
        serv_class = check_g3_service_class_code(fclass_mode);


        /* l4c_t30_act_rrsp: response result_code to DTE */
        if ((serv_class == G3_SERV_CLASS_1) || (serv_class == G3_SERV_CLASS_1_0))
        {
            kal_sprintf((kal_char*) buffer, "CONNECT");
        }

        else if (serv_class == G3_SERV_CLASS_2)
        {
            kal_sprintf((kal_char*) buffer, "+FCON");
        }

        else if (serv_class == G3_SERV_CLASS_2_0)
        {
            kal_sprintf((kal_char*) buffer, "+FCO");
        }

        rsp_str = &buffer[0];
        string_length = strlen((char*)rsp_str);
        rmmi_ptr->current_src = src_id;
        //mtk01616_070707 : preserve to print by L4C!!?
        rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);

        if ((serv_class == G3_SERV_CLASS_1) || (serv_class == G3_SERV_CLASS_1_0))
        {
            l4c_t30_transfer_uart_req_struct *param_ptr;

            param_ptr = (l4c_t30_transfer_uart_req_struct*) construct_local_para
                ((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);
            if (src_id >= RMMI_SRC)
            {
            #if defined(__CMUX_REDIRECT_DATA_CHANNEL__)   //data call at data channel
                if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
                {
                    src_id = RMMI_PTR->rmmi_data_channel_src;
                    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
                }
                else
                {
                    param_ptr->port = PS_UART_PORT;
                }
            #else /* !__CMUX_REDIRECT_DATA_CHANNEL__ */ 
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
            #endif /* __CMUX_REDIRECT_DATA_CHANNEL__ */ 
            }

            l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);
            /* no field in this msg */

            /* uart now should belong to T30 */
            rmmi_ptr->uart_in_data_mode = KAL_TRUE;
            l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
        }

        return;
    }
#endif /* __CSD_FAX__ */ 

#if defined(__TCPIP_OVER_CSD__)
    if (msg_ptr->call_type == CSMCC_CSD_CALL)
    {
        //mtk00758 - mark for mo csd and mt call collision   
        //if (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        {
            l4cppp_csd_activate_req_struct *param_ptr;

            param_ptr = (l4cppp_csd_activate_req_struct*) l4c_ptr->csd_parameter.data; //MAUI_02395134

            stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_CSD);

            l4c_send_msg_to_ppp(MSG_ID_L4CPPP_CSD_ACTIVATE_REQ, param_ptr);

            //MAUI_02395134 reset context
            if (l4c_ptr->csd_parameter.length > 0)
            {
                l4c_ptr->csd_parameter.length = 0;
                l4c_ptr->csd_parameter.data = NULL;
            }
        }
        return;
    }
#endif /* __TCPIP_OVER_CSD__ */ 

#ifdef __SATCE_CSD__ //MAUI_02395134
#if defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)
    if (msg_ptr->call_type == CSMCC_SAT_DATA_CALL)
    {
        l4cppp_csd_activate_req_struct *param_ptr;
        csmcc_sat_profile_struct sat_profile;   

        l4ccsm_cc_get_sat_prof(msg_ptr->csd_prof_id, &sat_profile);

        param_ptr = (l4cppp_csd_activate_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4cppp_csd_activate_req_struct),
                                                        TD_RESET);

        param_ptr->csd_mod_id = sat_profile.csd_module;
        kal_mem_cpy(param_ptr->username, sat_profile.user_id, CSD_USER_ID_LEN);
        kal_mem_cpy(param_ptr->password, sat_profile.user_pwd, CSD_USER_PWD_LEN);

        stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_CSD);

        l4c_send_msg_to_ppp(MSG_ID_L4CPPP_CSD_ACTIVATE_REQ, param_ptr);
        return;
    }
#endif 
#endif

    /* CSMCC_DATA_CALL */
    param_ptr = (l4ccsm_cc_uart_transfer_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_uart_transfer_req_struct),
                                                        TD_RESET);

#if defined(__CMUX_REDIRECT_DATA_CHANNEL__)   //data call at data channel
    if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
    {
        src_id = RMMI_PTR->rmmi_data_channel_src;
        param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    }
    else
    {
        param_ptr->port = PS_UART_PORT;
    }
#else /* __CMUX_REDIRECT_DATA_CHANNEL__ */ 
    if(rmmi_srcid_2_cid(src_id) == 0xff)
    {
        kal_trace(TRACE_WARNING, WARNING_DATA_CALL_INVALID_CID);		
	    free_local_para(( local_para_struct * )param_ptr);		
	    l4c_cc_exe_chld_req(src_id,CSMCC_REL_ALL_EXCEPT_WAITING_CALL,0);
	    return;
    }
    else
    {
        param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    }
#endif /* __SP_RIL_SUPPORT__ */ 

    param_ptr->is_esc_off = KAL_FALSE;

#ifdef __IRDA_SUPPORT__
    l4c_ptr->uart_data_mode = L4C_CSD_DATA;
#endif 

    //mtk01616_080613: print CONNECT when data path established
    l4ccsm_cc_get_call_info(msg_ptr->call_id, &call_entry, NULL);
	
    if (src_id >= RMMI_SRC &&  (call_entry.call_mode == SINGLE_DATA_CALL 
		||call_entry.call_mode == FOLLOW_DATA_CALL||call_entry.call_mode == ALT_DATA_DATA_CALL))
    {

	temp_src = rmmi_ptr->current_src;		
        rmmi_ptr->current_src = msg_ptr->src_id;// always return CONNECT to the original command channel
        l4c_cc_call_connect_rind(call_entry.call_mode, msg_ptr->call_id);
	rmmi_ptr->current_src = temp_src;		
    }

    if (RMMI_UART_GetOwnerID((UART_PORT)param_ptr->port) == MOD_ATCI)
    {
        kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, param_ptr->port, custom_get_dcd_value_for_data_state());
        RMMI_UART_CtrlDCD((UART_PORT)param_ptr->port , (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);
    }

    rmmi_ptr->uart_in_data_mode = KAL_TRUE;

#ifdef __TCPIP__ /* ABM */
    //mtk01616_070917:for CBM
    l4c_abm_dialup_connect_ind_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0);
#endif /* __TCPIP__, ABM */ 

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ, param_ptr, NULL, 0);
    l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_auto_dtmf_start_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_auto_dtmf_start_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 dtmf[MAX_CC_ADDR_LEN];
    l4ccsm_cc_auto_dtmf_start_ind_struct *msg_ptr;

    msg_ptr = (l4ccsm_cc_auto_dtmf_start_ind_struct*) local_para_ptr;
    kal_mem_set(dtmf, 0xff, MAX_CC_ADDR_LEN);
    if (msg_ptr->digit_count >= MAX_CC_ADDR_BCD_LEN)
    {
        msg_ptr->dtmf_digit[MAX_CC_ADDR_BCD_LEN-1] = 0xff;
    }
    else
    {		
        msg_ptr->dtmf_digit[msg_ptr->digit_count] = 0xff;
    }		
	
    convert_to_digit(msg_ptr->dtmf_digit, dtmf);
    l4c_cc_auto_dtmf_start_lind(msg_ptr->call_id, (kal_uint8*) dtmf);

}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_auto_dtmf_compl_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_auto_dtmf_compl_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_auto_dtmf_complete_ind_struct *msg_ptr;
    kal_uint8 src_id;

    msg_ptr = (l4ccsm_cc_auto_dtmf_complete_ind_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (src_id == LMMI_SRC)
    {
        l4c_cc_auto_dtmf_compl_lind(msg_ptr->call_id);
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cphs_display_als_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cphs_display_als_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cphs_display_als_ind_struct *msg_ptr = NULL;

    msg_ptr = (l4ccsm_cphs_display_als_ind_struct*) local_para_ptr;
    if (L4C_PTR->smu_activated != L4C_SMU_ACTIVATE_FAIL)        // == L4C_SMU_INACTIVE || L4C_SMU_ACTIVE
    {
        l4c_cphs_display_als_lind((kal_uint8) msg_ptr->line_id);
    }
    return;
}

/* this message tell L4c when any call exist or more than one call
   exist, we can call aux pool adc value or not. */


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_info_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_call_info_ind_struct *msg_ptr = NULL;
    kal_uint8 temp_src; 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_call_info_ind_struct*) local_para_ptr;

    temp_src = rmmi_ptr->current_src;

    l4c_ptr->call_exist = msg_ptr->call_exist;
    /* mtk00714 20040603: for +CMER unsolicited result code */
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_cc_call_info_rind(msg_ptr->call_exist);
    /* End mtk00714 */

    if (msg_ptr->call_exist == KAL_TRUE)
    {
        l4cuem_call_status_req_ind(UEM_CALL_SETUP);
    }
    else
    {
        l4cuem_call_status_req_ind(UEM_CALL_DISCONNECT);
    }

    rmmi_ptr->current_src = temp_src;

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_update_als_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_update_als_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    l4ccsm_cc_update_als_cnf_struct *msg_ptr;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_update_als_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == CPHS_ALS_UPDATE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->result == L4C_ERROR)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cphs_update_als_lrsp(KAL_FALSE, msg_ptr->error_cause);
            }
            else
            {
                rmmi_ptr->current_src = msg_ptr->src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->error_cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_cphs_update_als_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = msg_ptr->src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }

    }

}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_sat_setup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_sat_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SAT__
    l4ccsm_cc_sat_setup_cnf_struct *msg_ptr;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_sat_setup_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)
    {
        l4c_ptr->cc_retry_ongoing_flag = KAL_FALSE;
    }

    if (l4c_ptr->cc_current_action[SAT_SRC] == SAT_ATD_EXE)
    {
        //mtk01616_100223: sat redial
        if((l4c_ptr->sat_redial_flag == KAL_TRUE)
            && (msg_ptr->response == L4C_ERROR)
            && (l4c_search_all_src(l4c_current_mod_id,ATH_EXE) != KAL_TRUE) // consider MMI abort SAT callsetup, CSM still send sat_call_setup_cnf 			
            && (l4c_ptr->retry_ss != KAL_TRUE)
            && (l4c_ptr->cc_parameter[src_id].length > 0)
            && (l4c_ptr->retry_count < l4c_ptr->max_retry_count))
        {
            l4ccsm_cc_sat_setup_req_struct *param_ptr = NULL;

            param_ptr = (l4ccsm_cc_sat_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;

            param_ptr->l4c_retry = KAL_TRUE;

            if (msg_ptr->size_of_ccp > 0)
            {
                param_ptr->ccp_present = KAL_TRUE;
                param_ptr->size_of_ccp = msg_ptr->size_of_ccp;
                if(msg_ptr->size_of_ccp > MAX_SAT_SIZE_OF_CCP)
                {
		            ASSERT(0);
                }
                kal_mem_cpy(param_ptr->ccp, msg_ptr->ccp, msg_ptr->size_of_ccp);
            }
            param_ptr->called_sub_addr_present = msg_ptr->connected_sub_addr_present;
            kal_mem_cpy(&param_ptr->called_sub_addr, &msg_ptr->connected_sub_addr, sizeof(l4ccsm_cc_sub_addr_struct));

            param_ptr->type_of_modification = msg_ptr->type_of_modification; 

            /* maxium sat redial number is not defined in spec, we only redial one time */
            l4c_clear_sat_redial_duration_timer_hdlr();			
            
            /* start sat redial immediately */		
            kal_trace(TRACE_INFO, INFO_L4C_START_SAT_REDIAL);                            
            l4c_ptr->retry_cc = KAL_TRUE;
            l4c_ptr->retry_src_id = src_id;
            l4c_ptr->retry_count++;			
            l4c_retry_hdlr();

            /* maxium sat redial number is not defined in spec, we only redial one time */
            l4c_ptr->sat_redial_flag = KAL_FALSE;
            l4c_ptr->sat_redial_duration = 0;
			
            return;
        }

        //MAUI_02174911 SAT call retry only search PLMN when cause is CM_RR_PLMN_SRCH_REJ_EMERGENCY
        if ((l4c_is_test_sim() == KAL_FALSE)
            && (msg_ptr->cause_present == KAL_TRUE)
            && (l4c_cc_retry_allow(src_id) == KAL_TRUE))
        {
   
            if (l4c_need_retry(msg_ptr->cause) == KAL_TRUE)
            {
                l4ccsm_cc_sat_setup_req_struct *param_ptr = NULL;

                /* modify local param */
                param_ptr = (l4ccsm_cc_sat_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;

                param_ptr->l4c_retry = KAL_TRUE;

                if (msg_ptr->size_of_ccp > 0)
                {
                    param_ptr->ccp_present = KAL_TRUE;
                    param_ptr->size_of_ccp = msg_ptr->size_of_ccp;
		            if(msg_ptr->size_of_ccp>MAX_SAT_SIZE_OF_CCP)
                    {
		                ASSERT(0);
                    }
                    kal_mem_cpy(param_ptr->ccp, msg_ptr->ccp, msg_ptr->size_of_ccp);
                }
                param_ptr->called_sub_addr_present = msg_ptr->connected_sub_addr_present;
                kal_mem_cpy(&param_ptr->called_sub_addr, &msg_ptr->connected_sub_addr, sizeof(l4ccsm_cc_sub_addr_struct));
                param_ptr->type_of_modification = msg_ptr->type_of_modification;
                l4c_ptr->retry_cc = KAL_TRUE;
                l4c_start_retry_timer_hdlr(src_id);
                return;
            }
        }
        /* no retry */
        l4c_clear_cc_queued_msg(src_id);

        l4c_ptr->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
        if (msg_ptr->response == L4C_ERROR)
        {
            result.flag = L4C_ERROR;
            if (msg_ptr->cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->cause;
            }
            else
            {
                result.cause = CM_L4C_GEN_CAUSE;
            }			
        #if defined(__BT_SUPPORT__) && !defined(__UCM_SUPPORT__)
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_NONE);
        #endif 
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
 
        //if (msg_ptr->type_of_modification == SIMCALLCONTROL_NOMODIFY)
        /* MAUI_02845635: after call control by SIM change to call, L4C still needs to send TR */
        {
        #ifdef __RSAT__
            //mtk00924: sat setup call should return terminal response by modem
            sat_setup_call_res_struct *param_ptr = (sat_setup_call_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_setup_call_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
            if (msg_ptr->terminal_res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->terminal_res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->cause = msg_ptr->additional_res; /* additional info */

            l4c_sat_setup_call_res(param_ptr);
        #endif /* __RSAT__ */ 
        
    #ifdef __OP01__
        {
            kal_uint8 temp_src;
            rmmi_mo_state_enum call_state = RMMI_MO_STATE_CONF;
            rmmi_cm_call_end_status_enum end_status = CM_CALL_END_OFFLINE;
    
            if (result.flag == L4C_ERROR)
            {
                call_state = RMMI_MO_STATE_CEND;
                end_status = CM_CALL_END_CONF_FAILED;
            }
            temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_cc_call_state_rind(call_state, msg_ptr->call_id,0,end_status, KAL_FALSE,(ps_cause_enum)0, CSMCC_VOICE_CALL, KAL_FALSE);
            rmmi_ptr->current_src = temp_src;
        }
    #endif
        #if defined(__MMI_FMI__)
            l4c_sat_call_setup_lrsp(result, msg_ptr->terminal_res, msg_ptr->additional_res);
        #endif 
        }
    }
    /* MAUI_02079020 UCM3.0 uses CHLD_REQ to disconnect the call and then wait for DIAL_IND/RELEASE_IND 
       If the MO call is in retry, chld_req() will clean the action of MO source 
       Terminal Response is responded in chld_req() */
    else if ((l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE) && (msg_ptr->response == L4C_ERROR))
    {
        result.flag = L4C_ERROR;
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            result.cause = msg_ptr->cause;
        }
        else
        {
            result.cause = CM_L4C_GEN_CAUSE;
        }
        l4c_clear_cc_queued_msg(src_id); //we need clean the MO src_id's context
        l4c_sat_call_setup_lrsp(result, msg_ptr->terminal_res, msg_ptr->additional_res);
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    }
    else
    {
        /* error */
    }
#endif /* __SAT__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_sat_send_dtmf_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_sat_send_dtmf_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SAT__
    l4ccsm_cc_sat_send_dtmf_cnf_struct *msg_ptr;

#ifdef __RSAT__
    sat_send_dtmf_res_struct *param_ptr = (sat_send_dtmf_res_struct*)
        construct_local_para(
            (kal_uint16) sizeof(sat_send_dtmf_res_struct),
            TD_RESET);
#endif /* __RSAT__ */ 
    msg_ptr = (l4ccsm_cc_sat_send_dtmf_cnf_struct*) local_para_ptr;
#ifdef __RSAT__
    //l4c_sat_stktrind_rind(msg_ptr->res, 1, &(msg_ptr->cause));

    kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

    if (msg_ptr->res == SAT_CMD_PERFORMED_SUCCESSFULLY && RMMI_PTR->sat_icon_displayed == KAL_FALSE)
    {
        param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
    }
    else
    {
        param_ptr->res = msg_ptr->res;
    }

    RMMI_PTR->sat_icon_displayed = KAL_TRUE;

    param_ptr->additional_info = msg_ptr->cause;

    l4c_send_msg_to_sim(MSG_ID_SAT_SEND_DTMF_RES, param_ptr, NULL);
#endif /* __RSAT__ */ 
#if defined(__MMI_FMI__)
    l4c_sat_send_dtmf_lrsp(msg_ptr->res, msg_ptr->cause);
#endif 
#endif /* __SAT__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_cpi_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_cpi_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_cpi_ind_struct *msg_ptr;
    kal_uint8 temp_src;
    kal_uint8 msg_bit = 0;
    l4c_call_entry_struct *call_info;
#if defined(__MMI_FMI__)
    l4c_number_struct addr;
#endif
#ifdef __OP01__
    rmmi_dsci_call_state_enum dsci_call_state = RMMI_DSCI_STATE_NONE;
    kal_bool is_ecc = KAL_FALSE;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_cc_cpi_ind_struct*) local_para_ptr;
    call_info = &(msg_ptr->call_entry);

    /* MAUI_01608719: add for +CEER report */
    if ((msg_ptr->msg_type == CSMCC_DISCONNECT_MSG) && (msg_ptr->disc_cause != CSMCC_NO_CAUSE))
    {
        l4c_ptr->ceer_report = msg_ptr->disc_cause;
    }

#if defined(__CMUX_MODEM_STATUS_SUPPORT__)
    if(msg_ptr->msg_type == CSMCC_CALL_CONNECTED_MSG)
    {
        l4c_ctrl_dcd_status(RMMI_PTR->rmmi_urc_channel_src, MOD_ATCI);
    }
#endif


    if(msg_ptr->msg_type == CSMCC_MO_CALL_ID_ASSIGN_MSG)
    {
        l4c_ptr->mo_call_id = call_info->call_id;
    }

    if((msg_ptr->msg_type == CSMCC_DISCONNECT_MSG) && (call_info->call_id == l4c_ptr->mt_call_id))
    {
        // to prevent "RING" shown during mt call disconnecting state
        if (l4c_ptr->event_id[6] != 0)
        {
            kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[6]);
			
            evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[6]));					   
            l4c_ptr->event_id[6] = 0;
        }
    }

    /* abort mo retry when MT call comes, if call_present_ind is enabled, abort mo retry when call_present_ind */
    #if !defined(__AUTO_CALL_REJECTION__)
    if(msg_ptr->msg_type == CSMCC_SETUP_MSG)
    {
        l4c_clear_retry_call();
    }
    #endif /* __AUTO_CALL_REJECTION__ */
	
    if ((l4c_ptr->retry_cc == KAL_TRUE)&&
        ((msg_ptr->msg_type == CSMCC_ALL_CALLS_DISC_MSG) ||
         (msg_ptr->msg_type == CSMCC_MO_CALL_ID_ASSIGN_MSG ) ||       
         (msg_ptr->msg_type == CSMCC_DISCONNECT_MSG && call_info->call_id == l4c_ptr->mo_call_id)))
    {  
        /* mtk01616_090426: prevent call disconnect event or call_id assign again for MO retry call */        
        return;
    }

    kal_brief_trace(L4C_CCSS_TRC, CPI_INFO_TYPE,
		            msg_ptr->msg_type,
		            call_info->call_id,
		            l4c_ptr->retry_cc,
		            l4c_ptr->cc_retry_ongoing_flag,
		            l4c_ptr->mo_call_id);

   /*************************************************************************************
    * For backward compatiable , we keep the original +ECPI value which is              *
    * not bit number, so we need to convert cpi value to cpi bit first                  *
    *************************************************************************************/
    if(msg_ptr->msg_type <= CSMCC_CALL_CONNECTED_MSG)
    {
        msg_bit = msg_ptr->msg_type;
    }
    else if((msg_ptr->msg_type >= CSMCC_ALL_CALLS_DISC_MSG) && (msg_ptr->msg_type < CSMCC_CPI_END))
    {
        msg_bit = (kal_uint8)(msg_ptr->msg_type - CSMCC_ALL_CALLS_DISC_MSG + 7);
    }
    else
    {
	//invalid cpi msg_type
        return;
    }

    /* send CPI indication to LMMI */
    #if defined(__MMI_FMI__)	
    if(L4C_COMM_PTR->cpi_mode & (INFO_REPORT_MASK << msg_bit))
    {
        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));

        if (msg_ptr->number.addr_length > 0)
        {
            addr.length = convert_to_digit_24008(
                        (kal_uint8*) & (msg_ptr->number.addr_bcd[1]),
                        (kal_uint8*) addr.number);
	
            addr.type = msg_ptr->number.addr_bcd[0];
        }

        /* We don't support dial number with 'a'. If we meet 'a' in MO call event,    *
         * it should come from "MMI bypass auto DTMF,let modem handle" or ATDxxxPxxx; */
        if((msg_ptr->msg_type == CSMCC_MO_CALL_ID_ASSIGN_MSG) || 
           ((msg_ptr->msg_type == CSMCC_CALL_PROCESS_MSG) && (call_info->call_orig == CLCC_MO_CALL)) ||			
           ((msg_ptr->msg_type == CSMCC_CALL_CONNECTED_MSG) && (call_info->call_orig == CLCC_MO_CALL)))
        {
            kal_uint8 i=0;
		
            for(i=0;i<addr.length;i++)
            {
                if((addr.number[i] == rmmi_char_a) || (addr.number[i] == RMMI_CHAR_A))
                {
                    addr.number[i] = rmmi_char_p;
                }
            }
        }
		
        l4c_cc_cpi_lind(call_info->call_id,msg_ptr->msg_type,
				     msg_ptr->is_ibt,
				     msg_ptr->is_tch,
				     (clcc_dir_enum)(call_info->call_orig),
				     (clcc_mode_enum)(call_info->call_mode),
				     msg_ptr->numberP,
				     &addr,
				     msg_ptr->disc_cause,
				     msg_ptr->src_id,
				     call_info->call_type);
    }
    #endif 


    /* send +ECPI URC to RMMI */
    if(rmmi_ptr->report_mode.ecpi & (INFO_REPORT_MASK << msg_bit))			
    {	
        temp_src = rmmi_ptr->current_src;    
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_cpi_rind(msg_ptr);
        rmmi_ptr->current_src = temp_src;
    }

#ifdef __OP01__
    if (msg_ptr->msg_type == CSMCC_CALL_CONNECTED_MSG)
    {
        if (msg_ptr->numberP == KAL_TRUE)
        {
            is_ecc = ecc_custom_verify_emergency_number(msg_ptr->number.addr_bcd, 
                                                        msg_ptr->number.addr_length, 
                                                        ECC_ENCODING_BCD, 
                                                        (ECC_SIM1_CALL + (ecc_call_type_enum)(l4c_current_mod_id - MOD_L4C)),
                                                        NULL, NULL, NULL);
        }
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_call_state_rind(RMMI_MO_STATE_CONN,
                               call_info->call_id, 0, (rmmi_cm_call_end_status_enum)0 /* only used in ^CEND */,
                               KAL_FALSE,(ps_cause_enum)0, /* cause */
                               (csmcc_call_type_enum)(call_info->call_type), is_ecc);
        rmmi_ptr->current_src = temp_src;
    }
                                   
    /* send ^DSCI URC to RMMI */
    if (rmmi_ptr->op01_report_mode.dsci != 0)
    {
        switch (msg_ptr->msg_type)
        {
            case CSMCC_SETUP_MSG:
                dsci_call_state = (rmmi_dsci_call_state_enum)(call_info->call_state); //CLCC_CALL_INCOMING or CLCC_CALL_WAITING
                break;
            case CSMCC_ALERT_MSG:
                dsci_call_state = RMMI_DSCI_STATE_MO_ALERT;
                break;
            default:
                return;
        }

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_dsci_rind(call_info->call_id, 
                         (clcc_dir_enum)(call_info->call_orig), 
                         dsci_call_state, 
                         (csmcc_call_type_enum)(call_info->call_type), 
                         (clcc_mpty_enum)(call_info->mpty), 
                         msg_ptr->number, 
                         CSMCC_NO_CAUSE/*no disc cause*/);
        rmmi_ptr->current_src = temp_src;
    }
#endif /* __OP01__ */

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_update_call_state_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_update_call_state_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_update_call_state_ind_struct *msg_ptr;
    kal_uint8 temp_src;
    csmcc_cpi_msg_type_enum msg_type = CSMCC_CPI_END;
#if defined(__MMI_FMI__)
    l4c_number_struct addr;
    kal_uint8 msg_bit = 0;
#endif
#ifdef __OP01__
    rmmi_dsci_call_state_enum dsci_call_state = RMMI_DSCI_STATE_NONE;
    rmmi_mo_state_enum call_state = RMMI_MO_STATE_NONE;
    kal_bool cause_present = KAL_FALSE;
    ps_cause_enum cause = (ps_cause_enum)0;
    rmmi_cm_call_end_status_enum end_status = CM_CALL_END_OFFLINE;
    kal_bool is_ecc = KAL_FALSE;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#if defined(__VTS_LATE_RESPONSE__)
    kal_uint8 id;
#endif
	
    msg_ptr = (l4ccsm_cc_update_call_state_ind_struct*) local_para_ptr;

    /* convert to cpi event */
    switch(msg_ptr->call_state)
    {
        case CSMCC_CALL_IDLE:
            msg_type = CSMCC_STATE_CHANGE_DISCONNECTED;
            break;
        case CSMCC_CALL_HOLD:
            msg_type = CSMCC_STATE_CHANGE_HELD;
        #ifdef __OP01__
            dsci_call_state = RMMI_DSCI_STATE_HELD;
        #endif
            break;
        case CSMCC_CALL_ACTIVE:
            msg_type = CSMCC_STATE_CHANGE_ACTIVE;
        #ifdef __OP01__
            dsci_call_state = RMMI_DSCI_STATE_ACTIVE;
        #endif
            break;
        case CSMCC_MS_CALL_DISC:
            msg_type = CSMCC_STATE_CHANGE_MO_DISCONNECTING;
        #ifdef __OP01__
            if ((l4c_search_all_src(l4c_current_mod_id, ATH_EXE) == KAL_TRUE) ||
                (l4c_search_all_src(l4c_current_mod_id, CHLD_EXE) == KAL_TRUE))
            {
                /* 
                   CSM will change call state to CSMCC_MS_CALL_DISC in NW initiated call clearing when 
                   MS sends RELEASE back to NW after receiving DISCONNECT, so we shlall check L4C action
                   to ensure user initiated call clearing 
                */
                call_state = RMMI_MO_STATE_CEND;
                end_status = CM_CALL_END_CLIENT_END;
                cause_present = KAL_TRUE;
                cause = (l4c_ptr->mt_call_id == msg_ptr->call_entry.call_id)? CM_USER_BUSY : CM_NORMAL_CALL_CLR;
            }
        #endif
            break;
        #ifdef __OP01__
        case CSMCC_CALL_INIT:
            if (msg_ptr->call_entry.call_id == l4c_ptr->mo_call_id)
            {
                dsci_call_state = RMMI_DSCI_STATE_MO_DIALING;
                call_state = RMMI_MO_STATE_ORIG;
            }
            break;
        case CSMCC_NW_CALL_DISC:
            call_state = RMMI_MO_STATE_CEND;
            if (l4c_ptr->ceer_report != CSMCC_NO_CAUSE)
            {
                cause_present = KAL_TRUE;
                cause =(ps_cause_enum) l4c_ptr->ceer_report;
            }
            end_status = CM_CALL_END_NETWORK_END;
            break;
        #endif
        default:
            return;
    }	

#if defined(__VTS_LATE_RESPONSE__)
    /* dtmf_revise: After call released, CSM won't send START_DTMF_CNF later
       we have to respond OK for AT+VTS and reset VTS_EXE here */
    if ((msg_ptr->call_entry.call_id == l4c_ptr->dtmf_call_id) &&
        ((msg_type == CSMCC_STATE_CHANGE_DISCONNECTED) || (msg_type == CSMCC_STATE_CHANGE_HELD)))
    {
        for (id = RMMI_SRC; id < RMMI_ALL; id++)
        {
            if (l4c_ptr->cc_current_action[id] == VTS_EXE)
            {
                rmmi_ptr->current_src = id;
                rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
                l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                l4c_ptr->dtmf_call_id = CSMCC_INVALID_CALL_ID;
                break;
            }
        }
    }
#endif

    #if defined(__AUTO_CALL_REJECTION__)
    if ((l4c_ptr->present_call_id == msg_ptr->call_entry.call_id) && (msg_type == CSMCC_STATE_CHANGE_DISCONNECTED))
    {  
        l4c_ptr->present_call_id = CSMCC_INVALID_CALL_ID; //reset 
    }
    #endif

    if ((l4c_ptr->retry_cc == KAL_TRUE) && (msg_type == CSMCC_STATE_CHANGE_DISCONNECTED) && 
        (msg_ptr->call_entry.call_id == l4c_ptr->mo_call_id))
    {  
        /* mtk01616_090426: prevent call disconnect event for MO retry call */        
        return;
    }

    /* mo_call_id is also used during call retry period. so we shall prevent clear it when call retry */    
    if ((l4c_ptr->mo_call_id == msg_ptr->call_entry.call_id) && (msg_type == CSMCC_STATE_CHANGE_DISCONNECTED))
    {  
        l4c_ptr->mo_call_id = CSMCC_INVALID_CALL_ID; //reset 
    }

    /* send CPI indication to LMMI */
    #if defined(__MMI_FMI__)
    /* convert cpi event to its corresponding bit ex: STATE_CHANGE_HELD(131) is the 10th event*/
    msg_bit = msg_type - CSMCC_ALL_CALLS_DISC_MSG + 7;
    if(L4C_COMM_PTR->cpi_mode & (INFO_REPORT_MASK << msg_bit))
    {
        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
        l4c_cc_cpi_lind(msg_ptr->call_entry.call_id,
                        msg_type,0,0,CLCC_UNKNOWN_DIR,CLCC_UNKNOWN_MODE,0,&addr,0,
                        msg_ptr->call_entry.src_id, msg_ptr->call_entry.call_type); //MAUI_02580295
    }
    #endif 

    /* send CPI indication to RMMI */
    temp_src = rmmi_ptr->current_src;    	
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_cc_update_call_state_rind((kal_uint8)msg_type,msg_ptr->call_entry.call_id); //MAUI_02580295
    rmmi_ptr->current_src = temp_src;	

#ifdef __OP01__
    if (call_state != RMMI_MO_STATE_NONE)
    {
        is_ecc = ecc_custom_verify_emergency_number(msg_ptr->call_entry.number.addr_bcd, 
                                                    msg_ptr->call_entry.number.addr_length, 
                                                    ECC_ENCODING_BCD, 
                                                    (ECC_SIM1_CALL + (ecc_call_type_enum)(l4c_current_mod_id - MOD_L4C)),
                                                    NULL, NULL, NULL);

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_call_state_rind(call_state, msg_ptr->call_entry.call_id, 0 /*reserve*/,
                               end_status,
                               cause_present,
                               cause,
                               (csmcc_call_type_enum)msg_ptr->call_entry.call_type,
                               is_ecc);
        rmmi_ptr->current_src = temp_src;
    }
    
    /* send ^DSCI URC to RMMI */
    if ((rmmi_ptr->op01_report_mode.dsci != 0) && (dsci_call_state != RMMI_DSCI_STATE_NONE))
    {
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cc_dsci_rind(msg_ptr->call_entry.call_id, 
                         (clcc_dir_enum)(msg_ptr->call_entry.call_orig), 
                         dsci_call_state, 
                         (csmcc_call_type_enum)(msg_ptr->call_entry.call_type), 
                         (clcc_mpty_enum)(msg_ptr->call_entry.mpty), 
                         msg_ptr->call_entry.number, 
                         l4c_ptr->ceer_report /*disc cause for RMMI_DSCI_STATE_CALL_END*/);
        rmmi_ptr->current_src = temp_src;
    }
#endif /* __OP01__ */

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_sync_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_sync_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_cc_call_sync_req_ind();
}


#if defined(__TCPIP_OVER_CSD__)


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_set_csd_prof_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_set_csd_prof_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_set_csd_prof_cnf_struct *msg_ptr;
    kal_uint8 src_id;

    msg_ptr = (l4ccsm_cc_set_csd_prof_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

#ifdef __SATCE__
    if (src_id == SAT_SRC)
    {
        l4csmu_sat_set_csd_prof_res_struct *local_ptr = construct_local_para((kal_uint16) sizeof(l4csmu_sat_set_csd_prof_res_struct), TD_RESET);

        if (msg_ptr->result == L4C_OK)  // Benson add to trans the result
        {
            local_ptr->res = KAL_TRUE;
        }
        else
        {
            local_ptr->res = KAL_FALSE;
        }

        l4c_send_msg_to_smu(MSG_ID_L4CSMU_SAT_SET_CSD_PROF_RES, local_ptr);
        return;
    }
#endif /* __SATCE__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_abm_setup_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_abm_setup_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_cc_abm_setup_req_struct *msg_ptr;
    l4ccsm_cc_call_setup_req_struct *param_ptr;
    l4c_number_struct dest;
    kal_bool active_call_exist;
    kal_uint8 call_id;
    l4cppp_csd_activate_req_struct *ppp_param_ptr;
    l4c_csd_account_info_struct *csd_account;
    kal_uint8 count;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#if defined(__PHB_APPROVE_BY_MMI__) && !defined(__UCM_SUPPORT__)
    kal_uint16 cause = CM_L4C_GEN_CAUSE;
    kal_bool is_ecc = KAL_FALSE;
    kal_uint8 ecc_category;
    l4ccsm_cc_emergency_call_setup_req_struct *ecc_param_ptr;
    l4c_result_struct result;
#endif

#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    csmcc_sat_profile_struct sat_profile;
#endif 
#endif

#if !defined(__UCM_SUPPORT__) && !defined(__PHB_APPROVE_BY_MMI__)
    l4cphb_approve_req_struct *param1_ptr;
#endif

    msg_ptr = (l4c_cc_abm_setup_req_struct*) local_para_ptr;
    kal_mem_set(&dest,0,sizeof(l4c_number_struct));
    csd_account = &(msg_ptr->csd_account_info);

#ifdef __EXT_MODEM__
    if (custom_get_ext_modem_profile_id() == msg_ptr->csd_profile_id)
    {
        l4c_ext_modem_setup_req_struct *param2_ptr;

        param2_ptr = (l4c_ext_modem_setup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4c_ext_modem_setup_req_struct), TD_RESET);
        param2_ptr->csd_profile_id = msg_ptr->csd_profile_id;
        l4c_send_msg_to_ext_modem(MSG_ID_L4C_EXT_MODEM_SETUP_REQ, param2_ptr);
        return;
    }
#endif /* __EXT_MODEM__ */ 

    active_call_exist = l4ccsm_cc_get_active_call(&call_id);

    if (is_cmd_conflict(LMMI_SRC, ABM_ACT_APP) == KAL_TRUE || (l4c_ptr->mt_call_incoming == KAL_TRUE) ||
        (active_call_exist == KAL_TRUE)
#if 0        
/* under construction !*/
#endif //10A_DA_Revise, L4C only blocks GPRS/CSD dialup, mtk02285        
#ifdef __GEMINI__
        || L4C_COMM_PTR->during_sim_mode_switch
#endif 
        )       // karen
    {
        // l4c busy
        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
        return;
    }

    l4c_ptr->cc_current_action[LMMI_SRC] = ABM_ACT_APP;

    //MAUI_02395134 save local parameter for activating PPP
    l4c_ptr->csd_parameter.length = sizeof(l4cppp_csd_activate_req_struct);
    l4c_ptr->csd_parameter.data = (l4cppp_csd_activate_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cppp_csd_activate_req_struct), TD_RESET);

    ppp_param_ptr = (l4cppp_csd_activate_req_struct*) l4c_ptr->csd_parameter.data;
    if (csd_account->csd_module == KAL_TRUE)
    {
        /* Transparent */
   	    ppp_param_ptr->csd_mod_id = MOD_TDT;
    }
    else
    {
        /* Non-Transparent */
        ppp_param_ptr->csd_mod_id = MOD_L2R;
    }
    
    kal_mem_cpy(ppp_param_ptr->username, csd_account->user_name, 32);
    kal_mem_cpy(ppp_param_ptr->password, csd_account->password, 32);
    kal_mem_cpy(ppp_param_ptr->default_pri_dns_addr, csd_account->dns, 4);
    kal_mem_cpy(ppp_param_ptr->default_sec_dns_addr, csd_account->sec_dns, 4);
            
    l4c_ptr->cc_parameter[LMMI_SRC].length = sizeof(l4ccsm_cc_call_setup_req_struct);

    l4c_ptr->cc_parameter[LMMI_SRC].data = (l4ccsm_cc_call_setup_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_setup_req_struct), TD_RESET);

    param_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[LMMI_SRC].data;
    param_ptr->src_id = LMMI_SRC;
    param_ptr->als_type = ALS_DIAL_BY_SETTING;	

#ifdef __SATCE_CSD__ //MAUI_02395134
#if defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)
    if(msg_ptr->profile_type == DATA_ACCT_SAT_PROF && 
       msg_ptr->csd_profile_id == CBM_SAT_CSD_ACCT_ID) //MAUI_02395134
    {
        param_ptr->call_type = CSMCC_SAT_DATA_CALL;
        l4ccsm_cc_get_sat_prof(msg_ptr->csd_profile_id, &sat_profile);
        dest.type = sat_profile.addr.addr_bcd[0];
        if (sat_profile.addr.addr_length == 0)
        {
            dest.length = 0;
        }
        else
        {
            dest.length = convert_to_digit(&sat_profile.addr.addr_bcd[1], dest.number);
        }
        kal_mem_cpy(&(param_ptr->called_number), &(sat_profile.addr), sizeof(l4_addr_bcd_struct)); //MAUI_02127149
    }
    else
#endif 
#endif /* __SATCE_CSD__ */
    {
        param_ptr->call_type = CSMCC_CSD_CALL;
        if (csd_account->addr_str[0] == RMMI_CHAR_PLUS)
        {
            dest.type = 0x91;
            strcpy((char*)dest.number, (char*)&(csd_account->addr_str[1]));
        }
        else
        {
            dest.type = 0x81;
            strcpy((char*)dest.number, (char*)&(csd_account->addr_str[0]));
        }
        dest.length = strlen((char*)dest.number);
        param_ptr->called_number.addr_bcd[0] = dest.type;
        count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->called_number.addr_bcd[1]), MAX_CC_ADDR_LEN-1);
        param_ptr->called_number.addr_length = count + 1;
    }

    //MAUI_02395134 set CSD profile information to CSM
    csmcc_fill_csd_bc_param(csd_account->csd_ur, csd_account->csd_type, csd_account->csd_module);

    
#ifdef __UCM_SUPPORT__
    // In UCM project, PHB approve message is constructed in l4c_cc_data_call_res_req
    l4c_cc_data_call_req_lind(LMMI_SRC,CALL_DIAL, param_ptr->call_type,dest);
    return;    
#else /* !__UCM_SUPPORT__ */ 
    l4c_cc_call_setup_req_ind(dest, CSMCC_CSD_CALL, CLIR_SUPPRESS, KAL_FALSE);

#if defined(__PHB_APPROVE_BY_MMI__)
    /* 
       PHB approve by MMI via function call
       check ECC first
    */
    is_ecc = ecc_custom_verify_emergency_number(
                    param_ptr->called_number.addr_bcd, 
                    param_ptr->called_number.addr_length, 
                    ECC_ENCODING_BCD, 
                    (ecc_call_type_enum)(ECC_SIM1_CALL + (l4c_current_mod_id - MOD_L4C)),
                    &ecc_category, NULL, NULL);
    
    if (is_ecc == KAL_TRUE)
    {
        /* free original normal call setup parameter and reconstruct ECC setup parameter */
        l4c_clear_cc_parameter(LMMI_SRC);
        l4c_ptr->cc_parameter[LMMI_SRC].length = sizeof(l4ccsm_cc_emergency_call_setup_req_struct);

        l4c_ptr->cc_parameter[LMMI_SRC].data = (l4ccsm_cc_emergency_call_setup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4ccsm_cc_emergency_call_setup_req_struct), TD_RESET);

        ecc_param_ptr = (l4ccsm_cc_emergency_call_setup_req_struct*) l4c_ptr->cc_parameter.data;
        ecc_param_ptr->src_id = LMMI_SRC;
        ecc_param_ptr->called_number.addr_bcd[0] = dest.type;
        ecc_param_ptr->called_number.addr_length = 1 + convert_to_bcd(
                            (kal_uint8*) dest.number, (kal_uint8*) & (ecc_param_ptr->called_number.addr_bcd[1]), 40);
        ecc_param_ptr->service_category = ecc_category; //for R5 ECC category
        l4c_ptr->cc_current_action[LMMI_SRC] = ABM_ACT_ECC;                
    }
    else if (KAL_FALSE == custom_phb_xmgnt_approve_fdn(param_ptr->called_number.addr_bcd, 
                                                       param_ptr->called_number.addr_length,
                                                       (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                       L4C_CALL_OPERATION,
                                                       &cause))
    {
        /* approve fail */
        result.flag = L4C_ERROR;
        result.cause = (cause == PHB_APPROVE_FDN_BLOCKED)? (PHB_CAUSE_FDN_BLOCKED) : (CM_L4C_GEN_CAUSE); //MAUI_02990419
    #if defined(__TCPIP_OVER_CSD__)
        l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
    #endif
        //response to LMMI
        l4c_cc_exe_call_dial_lrsp(LMMI_SRC, result.flag, result.cause, 0, KAL_FALSE, 0); //MAUI_01924242
        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
        l4c_clear_cc_queued_msg(LMMI_SRC);
        return;
    }
    else
    {
        /* normal CSD call */
        l4c_ptr->cc_current_action[LMMI_SRC] = ABM_ACT;
    }
    l4c_send_msg_hdlr(LMMI_SRC, L4C_CALL_OPERATION);
#else /* !defined(__PHB_APPROVE_BY_MMI__) */
    param1_ptr = (l4cphb_approve_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4cphb_approve_req_struct),
                                                TD_RESET);

    param1_ptr->src_id = LMMI_SRC;
    param1_ptr->is_retrieve = KAL_FALSE;
    //mtk01616_090216: current src_id for internal csd operation is always lmmi_src
    param1_ptr->approval_type = l4_custom_approval_type(L4C_CSD_OPERATION,LMMI_SRC);

#ifdef __SATCE_CSD__ //MAUI_02395134
#ifdef __SATCE__
    //mtk01616_070530 : set call_type for SATe
    if(msg_ptr->profile_type == DATA_ACCT_SAT_PROF && 
       msg_ptr->csd_profile_id == CBM_SAT_CSD_ACCT_ID) //MAUI_02395134
    {
        kal_mem_cpy(&param1_ptr->tel_number, &sat_profile.addr, sizeof(l4_addr_bcd_struct));
    }
    else
#endif /* __SATCE__ */ 
#endif
    kal_mem_cpy(&param1_ptr->tel_number, &param_ptr->called_number, sizeof(l4_addr_bcd_struct));

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
#endif /* defined(__PHB_APPROVE_BY_MMI__) */ 
#endif /* __UCM_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_abm_disc_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_abm_disc_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    l4c_result_struct result;
    kal_bool ret;
#ifdef __EXT_MODEM__
    l4c_cc_abm_disc_req_struct *msg_ptr = NULL;
#endif 
l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

#ifdef __EXT_MODEM__
    msg_ptr = (l4c_cc_abm_disc_req_struct*) local_para_ptr;

    if (custom_get_ext_modem_profile_id() == msg_ptr->csd_profile_id)
    {
        l4c_ext_modem_disc_req_struct *param2_ptr;

        param2_ptr = (l4c_ext_modem_disc_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4c_ext_modem_disc_req_struct), TD_RESET);
        param2_ptr->csd_profile_id = msg_ptr->csd_profile_id;
        l4c_send_msg_to_ext_modem(MSG_ID_L4C_EXT_MODEM_DISC_REQ, param2_ptr);
        return;
    }
#endif /* __EXT_MODEM__ */ 

    if (is_cmd_conflict(LMMI_SRC, ABM_DEACT) == KAL_TRUE)
    {
        // l4c busy
        //l4c_cc_abm_disc_rsp_fail_helper (KAL_FALSE);
        return;
    }

    if (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_APP)
    {
        l4c_cc_abm_disc_rsp_struct *param_ptr;

        param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                    TD_RESET);

        param_ptr->result = KAL_TRUE;
        l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);
   
        result.flag = L4C_ERROR;
        result.cause = CM_L4C_GEN_CAUSE;
        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
        l4c_clear_cc_queued_msg(LMMI_SRC);
        return;
    }

    if ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT) || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC))
    {
        ret = l4c_cc_exe_disc_aux_req(LMMI_SRC);
        if (ret == KAL_FALSE)
        {
            l4c_cc_abm_disc_rsp_struct *param_ptr;

            param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                        TD_RESET);

            param_ptr->result = KAL_TRUE;
            l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);
   
            result.flag = L4C_ERROR;
            result.cause = CM_L4C_GEN_CAUSE;
            l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
            l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
            l4c_clear_cc_queued_msg(LMMI_SRC);
            return;
        }
    }
    else if ((l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT)
             || (l4c_ptr->cc_current_action[LMMI_SRC] == L4C_NO_ACTION))
    {
        l4c_ppp_csd_deactivate_helper(PPPE_MOBILE_DEACT);
    }
    //else if (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_DISC)
    /* if current action is ABM_DISC, do nothing and change action to ABM_DEACT */

    l4c_ptr->cc_current_action[LMMI_SRC] = ABM_DEACT;
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_csd_activate_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cppp_csd_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_csd_activate_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4cppp_csd_activate_cnf_struct*) local_para_ptr;
    //During PPP activation, RMMI release CSD call , L4C will bein L4C_NO_ACTION state 

    if (l4c_ptr->cc_current_action[LMMI_SRC] == L4C_NO_ACTION)
    {
        l4c_ptr->cc_current_action[LMMI_SRC] = PPP_ACT;
    }

    //if (l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT)
    {
        l4c_cc_abm_setup_rsp_struct *param_ptr;

        if (msg_ptr->result == L4C_ERROR)
        {
            stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_GPRS);
            l4c_cc_exe_disc_aux_req(LMMI_SRC);

        }
        else
        {
            param_ptr = (l4c_cc_abm_setup_rsp_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_cc_abm_setup_rsp_struct),
                                                        TD_RESET);

            param_ptr->result = (msg_ptr->result == L4C_OK) ? KAL_TRUE : KAL_FALSE;

            param_ptr->err_cause = pppl4c_get_error_type() /* msg_ptr->err_cause */ ;
            kal_mem_cpy(param_ptr->ip_addr, msg_ptr->ip_addr, 4);
            kal_mem_cpy(param_ptr->pri_dns_addr, msg_ptr->pri_dns_addr, 4);
            kal_mem_cpy(param_ptr->sec_dns_addr, msg_ptr->sec_dns_addr, 4);
            param_ptr->mtu = msg_ptr->mtu;

            l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_SETUP_RSP, param_ptr);

            l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
        }
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_csd_deactivate_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cppp_csd_deactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
//MAUI_02580295    l4cppp_csd_deactivate_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    kal_bool result;
    kal_uint16 old_action = l4c_ptr->cc_current_action[LMMI_SRC];
    kal_uint8 src_id; //MAUI_02574001

//MAUI_02580295    msg_ptr = (l4cppp_csd_deactivate_cnf_struct*) local_para_ptr;

    stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_GPRS);

    //MAUI_01810924 first check if any source is disconnecting CSD
#if 0 //MAUI_02574001
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    if (l4c_search_all_src_ext(l4c_current_mod_id, CHLD_CSD_DEACT, &src_id) == KAL_TRUE) //MAUI_02574001
    {
        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CRSS_REQ, l4c_ptr->cc_parameter[src_id].data, NULL, 0);
        l4c_ptr->cc_parameter[src_id].data = NULL;
        l4c_ptr->cc_parameter[src_id].length = 0;
    }
    else if ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_DEACT)
        || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_DISC) 
        || (l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT))
    {
        result = l4c_cc_exe_disc_aux_req(LMMI_SRC);
        if (result == KAL_FALSE)        //there is no call exist
        {
            switch (old_action) //cc_current_action of LMMI_SRC has been cleared in l4c_cc_exe_disc_aux_req()
            {
                case PPP_ACT:
//                  l4c_cc_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE);
                    l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
                    break;
                case ABM_DEACT:
                    l4c_cc_abm_disc_rsp_helper(KAL_TRUE);
                    break;
                default:
                    l4c_cc_abm_disc_ind_helper(CM_L4C_GEN_CAUSE);
            }

        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_csd_deactivate_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cppp_csd_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_GPRS);

    if (L4C_PTR->cc_current_action[LMMI_SRC] == L4C_NO_ACTION)
    {
        l4c_cc_exe_disc_aux_req(LMMI_SRC);
        L4C_PTR->cc_current_action[LMMI_SRC] = ABM_DISC;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_abm_setup_rsp_fail_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_abm_setup_rsp_fail_helper(kal_uint16 cause)
{
    l4c_cc_abm_setup_rsp_struct *param_ptr;

    param_ptr = (l4c_cc_abm_setup_rsp_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_setup_rsp_struct),
                                                TD_RESET);

    param_ptr->result = KAL_FALSE;
//  param_ptr->err_cause = pppl4c_get_error_type() /* cause */ ;	// karen,  Dynamic Data Account
    param_ptr->err_cause = cause;	// karen,  Dynamic Data Account

    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_SETUP_RSP, param_ptr);

    //MAUI_02395134 clear saved parameter for activating PPP
    l4c_clear_csd_parameter();
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_abm_disc_rsp_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_abm_disc_rsp_helper(kal_bool result)
{
    l4c_cc_abm_disc_rsp_struct *param_ptr;

    param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                TD_RESET);

    param_ptr->result = result;
    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);

    //MAUI_02395134 clear saved parameter for activating PPP
    l4c_clear_csd_parameter();
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_abm_disc_ind_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_abm_disc_ind_helper(kal_uint16 cause)
{
    l4c_cc_abm_disc_ind_struct *param_ptr;


    param_ptr = (l4c_cc_abm_disc_ind_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_disc_ind_struct),
                                                TD_RESET);

    param_ptr->err_cause = cause;

    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_IND, param_ptr);

    //MAUI_02395134 clear saved parameter for activating PPP
    l4c_clear_csd_parameter();
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ppp_csd_deactivate_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ppp_csd_deactivate_helper(kal_uint8 cause)
{
    l4cppp_csd_deactivate_req_struct *param_ptr;

    param_ptr = (l4cppp_csd_deactivate_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4cppp_csd_deactivate_req_struct),
                                                        TD_RESET);
    param_ptr->deact_cause = cause;

    stack_change_default_priority_by_module_ID(MOD_PPP, TASK_PRIORITY_PPP_CSD);

    l4c_send_msg_to_ppp(MSG_ID_L4CPPP_CSD_DEACTIVATE_REQ, param_ptr);
}

#endif /* __TCPIP__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_abm_dialup_disc_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_dialup_disc_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __TCPIP__ /* ABM */
    l4c_abm_dialup_disc_req_struct *msg_ptr;
    kal_bool ret_val;

    msg_ptr = (l4c_abm_dialup_disc_req_struct*) local_para_ptr;

    if (msg_ptr->connect_type == CSD_BEARER_DIALUP)
    {
        L4C_PTR->disc_dialup_req = CSD_BEARER_DIALUP;
        ret_val = l4c_cc_exe_chld_req(LMMI_SRC, CSMCC_REL_ALL_EXCEPT_WAITING_CALL, CSMCC_INVALID_CALL_ID);
        if (ret_val == KAL_FALSE)
        {
            l4c_abm_dialup_disc_rsp_helper(CSD_BEARER_DIALUP, msg_ptr->call_id, 0, KAL_FALSE);
        }
    }
#if defined(__MOD_TCM__) && defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)
    else if (msg_ptr->connect_type == GPRS_BEARER_DIALUP)
    {
        if (uart_port_null != l4c_ps_dialup_get_port(msg_ptr->context_id))
        {
           //l4c_ps_disc_ppp_dialup_req(WAP_SRC, data_src_id, msg_ptr->context_id, KAL_FALSE);
           l4c_ps_dialup_disc_req(WAP_SRC, msg_ptr->context_id, KAL_FALSE);
        }		
        else
        {
            kal_trace(TRACE_INFO, INFO_NO_GPRS_DIALUP_EXIST);
            l4c_abm_dialup_disc_rsp_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id, KAL_FALSE);
            return;
        }
    }
#endif /* defined(__MOD_TCM__) && defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) */
    return;
#endif /* __TCPIP__, ABM */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_abm_dialup_disc_rsp_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  conn_type       [IN]        
 *  call_id         [IN]        
 *  context_id      [IN]        
 *  result          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_dialup_disc_rsp_helper(kal_uint8 conn_type, kal_uint8 call_id, kal_uint8 context_id, kal_bool result)
{
#if defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT))
    l4c_abm_dialup_disc_rsp_struct *param_ptr;

    param_ptr = (l4c_abm_dialup_disc_rsp_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4c_abm_dialup_disc_rsp_struct),
                                                    TD_RESET);

    param_ptr->connect_type = conn_type;
    param_ptr->call_id = call_id;
    param_ptr->context_id = context_id;
    param_ptr->result = result;

    if (result == KAL_TRUE)	// [MAUI_01366937]
    {
    	L4C_PTR->ongoing_csd_dialup = KAL_FALSE; //MAUI_02284187, mtk02285
    }

    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DIALUP_DISC_RSP, param_ptr);
#endif /* defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT)) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_abm_dialup_connect_ind_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  conn_type       [IN]        
 *  call_id         [IN]        
 *  context_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_dialup_connect_ind_helper(kal_uint8 conn_type, kal_uint8 call_id, kal_uint8 context_id)
{
#if defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT))
    l4c_abm_dialup_connect_ind_struct *param_ptr;

    param_ptr = (l4c_abm_dialup_connect_ind_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_abm_dialup_connect_ind_struct),
                                                        TD_RESET);

    param_ptr->connect_type = conn_type;
    param_ptr->call_id = call_id;
    param_ptr->context_id = context_id;
    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DIALUP_CONNECT_IND, param_ptr);
#endif /* defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT)) */ 
}

/*****************************************************************************
 * FUNCTION
 *  l4c_abm_dialup_connecting_ind_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  conn_type       [IN]        
 *  call_id         [IN]        
 *  context_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_dialup_connecting_ind_helper(kal_uint8 conn_type, kal_uint8 call_id, kal_uint8 context_id)
{
#if defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT))
    l4c_abm_dialup_connecting_ind_struct *param_ptr;

    param_ptr = (l4c_abm_dialup_connecting_ind_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4c_abm_dialup_connect_ind_struct),
                                                        TD_RESET);

    param_ptr->connect_type = conn_type;
    param_ptr->call_id = call_id;
    param_ptr->context_id = context_id;
    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DIALUP_CONNECTING_IND, param_ptr);
#endif /* defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT)) */ 
} //connecting_by_te

/*****************************************************************************
 * FUNCTION
 *  l4c_abm_dialup_disc_ind_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  conn_type       [IN]        
 *  call_id         [IN]        
 *  context_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_dialup_disc_ind_helper(kal_uint8 conn_type, kal_uint8 call_id, kal_uint8 context_id)
{
#if defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT))
    l4c_abm_dialup_disc_ind_struct *param_ptr;

    param_ptr = (l4c_abm_dialup_disc_ind_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4c_abm_dialup_disc_ind_struct),
                                                    TD_RESET);

    param_ptr->connect_type = conn_type;
    param_ptr->call_id = call_id;
    param_ptr->context_id = context_id;
    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DIALUP_DISC_IND, param_ptr);
#endif /* defined(__TCPIP__) && (defined(__PS_DIALUP__) || defined(CSD_SUPPORT)) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_abm_gprs_status_ind_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  gprs_status     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_gprs_status_ind_helper(kal_uint8 gprs_status)
{
#ifdef __TCPIP__ /* ABM */
    l4c_abm_gprs_status_ind_struct *param_ptr;

    param_ptr = (l4c_abm_gprs_status_ind_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4c_abm_gprs_status_ind_struct),
                                                    TD_RESET);

    param_ptr->gprs_status = gprs_status;
    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_GPRS_STATUS_IND, param_ptr);
#endif /* __TCPIP__, ABM */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_video_call_status_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_video_call_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __VIDEO_CALL_SUPPORT__
    l4ccsm_cc_video_call_status_ind_struct *msg_ptr;
#ifdef __VT_TRANSPORT_SUPPORT__
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
#if defined(__GEMINI__) && defined(__WM_RIL_SUPPORT__)
    kal_uint8 vt_port = uart_port_null;
    sim_interface_enum current_sim = (l4c_current_mod_id == MOD_L4C)?(SIM1):(SIM2);
#endif
#endif /* __VT_TRANSPORT_SUPPORT__ */

    msg_ptr = (l4ccsm_cc_video_call_status_ind_struct*) local_para_ptr;

    l4c_cc_video_call_status_ind(msg_ptr->call_id, msg_ptr->action, msg_ptr->result, msg_ptr->cause);

#ifdef __VT_TRANSPORT_SUPPORT__
#if defined(__GEMINI__) && defined(__WM_RIL_SUPPORT__)
    if ((current_sim == SIM1) && //currntly only SIM1 needs to set VT port owner to ATCI2
        (msg_ptr->action == CSMCC_VIDEO_CALL_DEACTIVATE) && (msg_ptr->result == KAL_TRUE))
    {
        vt_port = (kal_uint8)cmux_get_vt_port_number(current_sim);
        if (vt_port != uart_port_null)
        {
            /*
               SIM1 end vt call -> MOD_ATCI_2 obtains UART
               SIM2 end vt call -> MOD_ATCI obtains UART, not happen now
            */
            rmmi_context_selection(SIM2);
            rmmi_obtain_uart_control(vt_port, KAL_FALSE);
            rmmi_context_selection(current_sim);
        }
    }
#endif /* defined(__GEMINI__) && defined(__WM_RIL_SUPPORT__) */
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_cc_video_call_status_rind(msg_ptr->call_id, msg_ptr->action, msg_ptr->result);
    rmmi_ptr->current_src = temp_src;
#endif /* __VT_TRANSPORT_SUPPORT__ */
#endif /* __VIDEO_CALL_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_call_present_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_call_present_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __AUTO_CALL_REJECTION__
    l4ccsm_cc_call_present_ind_struct *msg_ptr = NULL;
    l4ccsm_cc_call_present_rsp_struct *param_ptr;
    l4c_number_struct addr;
    l4c_number_struct redirect_addr;    //mtk01616 070428: pass redirecting number for MMI 
    l4c_sub_addr_struct subaddr;
    kal_uint8 name_present = 0;
    kal_uint8 cnap_info_exist = 0;
    kal_uint8 tag = 0;
    l4_name_struct l4_name_ptr;
    kal_uint8 temp_src;//MAUI_02063785
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&subaddr, 0, sizeof(l4c_sub_addr_struct));
    kal_mem_set(&redirect_addr, 0, sizeof(l4c_number_struct));
    kal_mem_set(&l4_name_ptr, 0, sizeof(l4_name_struct));

    msg_ptr = (l4ccsm_cc_call_present_ind_struct*) local_para_ptr;


    /* abort mo retry when MT call comes, if call_present_ind is enabled, abort when call_present */		
    l4c_clear_retry_call();

    if ((l4c_ptr->mt_call_approval == MT_CALL_APPROVAL_DISABLE) || (l4c_ptr->cfun_state != 1))
    {
        param_ptr = (l4ccsm_cc_call_present_rsp_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_call_present_rsp_struct),
                                                    TD_RESET);
		
        param_ptr->call_id = msg_ptr->call_id;
        param_ptr->seq_num = msg_ptr->seq_num; //MAUI_02601330
		
        if(l4c_ptr->mt_call_approval == MT_CALL_APPROVAL_DISABLE)
        {
            param_ptr->is_mt_call_allowed = KAL_TRUE;
        }	

        if(l4c_ptr->cfun_state != 1)
        {
            param_ptr->is_mt_call_allowed = KAL_FALSE;
        }
	
        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP, param_ptr, NULL, 0);
        return;
    }

    if (msg_ptr->calling_number_present == KAL_TRUE)
    {
        addr.length = convert_to_digit_24008(
                        (kal_uint8*) & (msg_ptr->calling_number.addr.addr_bcd[1]),
                        (kal_uint8*) addr.number);

        addr.type = msg_ptr->calling_number.addr.addr_bcd[0];
    }

    //mtk01616 070428: pass redirecting number for MMI to distinguish the divert call belongs to whcih sim card (for N card , 1 phone)
    if (msg_ptr->redirecting_number_present == KAL_TRUE)
    {
        redirect_addr.length = convert_to_digit_24008(
                                (kal_uint8*) & (msg_ptr->redirecting_number.addr.addr_bcd[1]),
                                (kal_uint8*) redirect_addr.number);
        redirect_addr.type = msg_ptr->redirecting_number.addr.addr_bcd[0];
    }

    l4c_ptr->present_call_id = msg_ptr->call_id;  

    l4c_cc_call_present_lind(
            msg_ptr->call_id,
            &addr,
            &subaddr,
            &redirect_addr,
            name_present,
            cnap_info_exist,
            tag,
            l4_name_ptr.name,
            l4_name_ptr.name_dcs,
            l4_name_ptr.name_length,
            msg_ptr->auto_answer,
            msg_ptr->call_type,
            msg_ptr->calling_number.addr_ind_present,
            msg_ptr->calling_number.addr_ind,
            msg_ptr->signal_value_present,
            msg_ptr->signal_value,
            msg_ptr->alerting_pattern_present,
            msg_ptr->alerting_pattern,
            msg_ptr->no_cli_cause_present,
            msg_ptr->no_cli_cause,
            msg_ptr->call_priority_present,
            msg_ptr->call_priority,
            msg_ptr->seq_num
            );
    
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_cc_call_present_rind(msg_ptr->call_id, &addr, msg_ptr->seq_num);
    rmmi_ptr->current_src = temp_src;
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cc_sat_evdl_call_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cc_sat_evdl_call_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cc_sat_evdl_call_ind_struct *msg_ptr;

    msg_ptr = (l4ccsm_cc_sat_evdl_call_ind_struct*) local_para_ptr;

    l4c_sat_evdl_call_rind(msg_ptr->ti,
                           msg_ptr->status,
                           msg_ptr->is_mt_call,
                           msg_ptr->is_far_end,
                           msg_ptr->cause,
                           msg_ptr->cause_len); 
}


#ifdef __EXT_MODEM__


/*****************************************************************************
 * FUNCTION
 *  l4c_ext_modem_setup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ext_modem_setup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_ext_modem_setup_cnf_struct *msg_ptr;
    l4c_cc_abm_setup_rsp_struct *param_ptr;

    msg_ptr = (l4c_ext_modem_setup_cnf_struct*) local_para_ptr;

    param_ptr = (l4c_cc_abm_setup_rsp_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_setup_rsp_struct),
                                                TD_RESET);

    param_ptr->result = (msg_ptr->result == L4C_OK) ? KAL_TRUE : KAL_FALSE;
    param_ptr->err_cause = msg_ptr->err_cause;
    kal_mem_cpy(param_ptr->ip_addr, msg_ptr->ip_addr, 4);
    kal_mem_cpy(param_ptr->pri_dns_addr, msg_ptr->pri_dns_addr, 4);
    kal_mem_cpy(param_ptr->sec_dns_addr, msg_ptr->sec_dns_addr, 4);
    param_ptr->mtu = msg_ptr->mtu;

    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_SETUP_RSP, param_ptr);
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ext_modem_disc_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ext_modem_disc_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_ext_modem_disc_cnf_struct *msg_ptr;
    l4c_cc_abm_disc_rsp_struct *param_ptr;

    msg_ptr = (l4c_ext_modem_disc_cnf_struct*) local_para_ptr;

    param_ptr = (l4c_cc_abm_disc_rsp_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_disc_rsp_struct),
                                                TD_RESET);

    param_ptr->result = (msg_ptr->result == L4C_OK) ? KAL_TRUE : KAL_FALSE;
    param_ptr->err_cause = msg_ptr->err_cause;
    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_RSP, param_ptr);
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ext_modem_disc_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ext_modem_disc_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_ext_modem_disc_ind_struct *msg_ptr;
    l4c_cc_abm_disc_ind_struct *param_ptr;

    msg_ptr = (l4c_ext_modem_disc_ind_struct*) local_para_ptr;

    param_ptr = (l4c_cc_abm_disc_ind_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_cc_abm_disc_ind_struct),
                                                TD_RESET);

    param_ptr->err_cause = msg_ptr->err_cause;

    l4c_send_msg_to_abm(MSG_ID_L4C_CC_ABM_DISC_IND, param_ptr);
    return;
}

#endif /* __EXT_MODEM__ */ 


#if defined(__TCPIP__)
/*****************************************************************************
 * FUNCTION
 *  l4c_abm_disallow_gprs_and_csd_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_disallow_gprs_and_csd_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__TCPIP__)
#if defined(CSD_SUPPORT) || (defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__))
    l4c_abm_disallow_gprs_and_csd_rsp_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    param_ptr = (l4c_abm_disallow_gprs_and_csd_rsp_struct*) construct_local_para(
                                                                (kal_uint16) sizeof (l4c_abm_disallow_gprs_and_csd_rsp_struct),
                                                                TD_RESET);

    if ((l4c_ptr->ongoing_csd_dialup == KAL_TRUE)
#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)
        || l4c_search_all_src(l4c_current_mod_id, CGDATA_EXE) 
        || (KAL_TRUE == l4c_ps_dialup_check_existence(L4C_GET_SIM_ID(l4c_current_mod_id))) /*L4CPPP_FB_2*/         
#endif        
 	   ) //MAUI_02284187, mtk02285
    {
        param_ptr->result = KAL_FALSE;
        l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DISALLOW_GPRS_AND_CSD_RSP, param_ptr);
    }
    else
    {
        l4c_ptr->disallow_gprs_and_csd = KAL_TRUE;
        param_ptr->result = KAL_TRUE;
        l4c_send_msg_to_abm(MSG_ID_L4C_ABM_DISALLOW_GPRS_AND_CSD_RSP, param_ptr);
    }
#endif /* defined(CSD_SUPPORT) || (defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)) */
#endif /* defined(__TCPIP__) */     
}


/*****************************************************************************
 * FUNCTION
 *  l4c_abm_allow_gprs_and_csd_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_abm_allow_gprs_and_csd_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__TCPIP__)
#if defined(CSD_SUPPORT) || (defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__))
    l4c_abm_allow_gprs_and_csd_rsp_struct *param_ptr;

    param_ptr = (l4c_abm_allow_gprs_and_csd_rsp_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4c_abm_allow_gprs_and_csd_rsp_struct),
                                                            TD_RESET);

    L4C_PTR->disallow_gprs_and_csd = KAL_FALSE;
    param_ptr->result = KAL_TRUE;
    l4c_send_msg_to_abm(MSG_ID_L4C_ABM_ALLOW_GPRS_AND_CSD_RSP, param_ptr);
#endif /* defined(CSD_SUPPORT) || (defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__))    */
#endif /* defined(__TCPIP__) */
}
#endif /* __TCPIP__ */

#endif /* __MOD_CSM__ */ 

