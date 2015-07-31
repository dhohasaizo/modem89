/*
 *  RFC 1186/1320 compliant MD4 implementation
 *
 *  Copyright (C) 2003-2006  Christophe Devine
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License, version 2.1 as published by the Free Software Foundation.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */
/*
 *  The MD4 algorithm was designed by Ron Rivest in 1990.
 *
 *  http://www.ietf.org/rfc/rfc1186.txt
 *  http://www.ietf.org/rfc/rfc1320.txt
 */

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    md4.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   MD4 Engine
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * code review. add log placeholder.
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef __MD4_H__
#define __MD4_H__



#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief          MD4 context structure
 */
typedef struct
{
   unsigned long total[2];     /*!< number of bytes processed  */
   unsigned long state[4];     /*!< intermediate digest state  */
   unsigned char buffer[64];   /*!< data block being processed */
}
md4_context;

/**
 * \brief          MD4 context setup
 *
 * \param ctx      MD4 context to be initialized
 */
void CHE_md4_init( md4_context *ctx );

/**
 * \brief          MD4 process buffer
 *
 * \param ctx      MD4 context
 * \param input    buffer holding the  data
 * \param ilen     length of the input data
 */
void CHE_md4_append( md4_context *ctx, unsigned char *input, int ilen );

/**
 * \brief          MD4 final digest
 *
 * \param ctx      MD4 context
 * \param output   MD4 checksum result
 */
void CHE_md4_finish( md4_context *ctx, unsigned char output[16] );

/**
 * \brief          Output = MD4( input buffer )
 *
 * \param input    buffer holding the  data
 * \param ilen     length of the input data
 * \param output   MD4 checksum result
 */
void md4_csum( unsigned char *input, int ilen,
               unsigned char output[16] );



/**
 * \brief          Output = HMAC-MD4( input buffer, hmac key )
 *
 * \param key      HMAC secret key
 * \param keylen   length of the HMAC key
 * \param input    buffer holding the  data
 * \param ilen     length of the input data
 * \param output   HMAC-MD4 result
 */
void md4_hmac( unsigned char *key, int keylen,
               unsigned char *input, int ilen,
               unsigned char output[16] );

/**
 * \brief          Checkup routine
 *
 * \return         0 if successful, or 1 if the test failed
 */
int md4_self_test( void );

#ifdef __cplusplus
}
#endif

#endif /* __MD4_H__ */
