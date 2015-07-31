#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#


# Customer release setting for modules
# Applied by all the Customer release packages

# Include common settings
include make/rel/REL_COMP_COMMON.mak
CUS_REL_FILES_LIST += make/rel/REL_COMP_COMMON.mak

REL_SRC_COMP_CR_COMMON  =
REL_MTK_COMP_CR_COMMON  =
REL_PAR_SRC_COMP_CR_COMMON =

# Common source release modules

# Common library release modules

REL_MTK_COMP_CR_COMMON += adaptation_ma
REL_MTK_COMP_CR_COMMON += applib_inet
REL_MTK_COMP_CR_COMMON += applib_sqlite3
REL_MTK_COMP_CR_COMMON += alipay
REL_MTK_COMP_CR_COMMON += ast_l1_ast1001
REL_MTK_COMP_CR_COMMON += ast_l1_ast2001
REL_MTK_COMP_CR_COMMON += ast_l1_ast3001
REL_MTK_COMP_CR_COMMON += btadp
REL_MTK_COMP_CR_COMMON += btadp_btmtk_mt6612
REL_MTK_COMP_CR_COMMON += btadp_btmtk_mt6622
REL_MTK_COMP_CR_COMMON += btadp_btmtk_mt6626
REL_MTK_COMP_CR_COMMON += btdrv
REL_MTK_COMP_CR_COMMON += btmt
REL_MTK_COMP_CR_COMMON += btprofiles
REL_MTK_COMP_CR_COMMON += btprofiles_btmtk_mt6612
REL_MTK_COMP_CR_COMMON += btprofiles_btmtk_mt6622
REL_MTK_COMP_CR_COMMON += btprofiles_btmtk_mt6626
REL_MTK_COMP_CR_COMMON += config_ma
REL_MTK_COMP_CR_COMMON += dhcp
REL_MTK_COMP_CR_COMMON += eap
REL_MTK_COMP_CR_COMMON += ecompass
REL_MTK_COMP_CR_COMMON += fluency_sec
REL_MTK_COMP_CR_COMMON += fta
REL_MTK_COMP_CR_COMMON += gadget_adp
REL_MTK_COMP_CR_COMMON += gadget_lib
REL_MTK_COMP_CR_COMMON += google_app
REL_MTK_COMP_CR_COMMON += gps_sec
REL_MTK_COMP_CR_COMMON += ike
REL_MTK_COMP_CR_COMMON += init_ma
REL_MTK_COMP_CR_COMMON += insignia_dmsdk
REL_MTK_COMP_CR_COMMON += iperf
REL_MTK_COMP_CR_COMMON += ipsec
REL_MTK_COMP_CR_COMMON += kal_ma
REL_MTK_COMP_CR_COMMON += lqt
REL_MTK_COMP_CR_COMMON += mt5931
REL_MTK_COMP_CR_COMMON += mtkdebug
REL_MTK_COMP_CR_COMMON += netkey
REL_MTK_COMP_CR_COMMON += nmc
REL_MTK_COMP_CR_COMMON += nvram_sec
REL_MTK_COMP_CR_COMMON += ossl_crypto
REL_MTK_COMP_CR_COMMON += ossl_osadp
REL_MTK_COMP_CR_COMMON += ossl_pki
REL_MTK_COMP_CR_COMMON += ossl_pkiadp
REL_MTK_COMP_CR_COMMON += ossl_ssl
REL_MTK_COMP_CR_COMMON += ossl_ssladp
REL_MTK_COMP_CR_COMMON += saf
REL_MTK_COMP_CR_COMMON += sbpki2adp
REL_MTK_COMP_CR_COMMON += sdp
REL_MTK_COMP_CR_COMMON += sec_store
REL_MTK_COMP_CR_COMMON += seclib
REL_MTK_COMP_CR_COMMON += sip
REL_MTK_COMP_CR_COMMON += ssdvt
REL_MTK_COMP_CR_COMMON += sslplus5adp
REL_MTK_COMP_CR_COMMON += supc
REL_MTK_COMP_CR_COMMON += syncml
REL_MTK_COMP_CR_COMMON += voip

ifdef RELEASE_VRT
  REL_$(strip $(RELEASE_VRT))_COMP_CR_COMMON += vrt
  REL_$(strip $(RELEASE_VRT))_COMP_CR_COMMON += vrt16
else
  REL_MTK_COMP_CR_COMMON += vrt
  REL_MTK_COMP_CR_COMMON += vrt16
endif

# Obigo related modules

REL_SRC_COMP_CR_COMMON += obigo03cadp
REL_SRC_COMP_CR_COMMON += obigo03cfwadp
REL_SRC_COMP_CR_COMMON += obigo03cmmsadp
REL_SRC_COMP_CR_COMMON += obigo03cpushadp
REL_SRC_COMP_CR_COMMON += obigo03cstkadp
REL_SRC_COMP_CR_COMMON += obigo05aadp

ifdef RELEASE_WAE
  REL_$(strip $(RELEASE_WAE))_COMP_CR_COMMON += obigo03capp
else
  REL_MTK_COMP_CR_COMMON += obigo03capp
endif

ifdef RELEASE_WAP
  REL_$(strip $(RELEASE_WAP))_COMP_CR_COMMON += obigo03cfwlib
  REL_$(strip $(RELEASE_WAP))_COMP_CR_COMMON += obigo03cstklib
  REL_$(strip $(RELEASE_WAP))_COMP_CR_COMMON += obigo03clib
else
  REL_MTK_COMP_CR_COMMON += obigo03cfwlib
  REL_MTK_COMP_CR_COMMON += obigo03cstklib
  REL_MTK_COMP_CR_COMMON += obigo03clib
endif

REL_MTK_COMP_CR_COMMON += obigo03cpushlib
REL_MTK_COMP_CR_COMMON += obigo05alib

ifdef MMS_SUPPORT
  ifneq ($(strip $(MMS_SUPPORT)),NONE)
    ifdef RELEASE_$(strip $(MMS_SUPPORT))
      REL_$(strip $(RELEASE_$(strip $(MMS_SUPPORT))))_COMP_CR_COMMON += obigo03cmmslib
      REL_$(strip $(RELEASE_$(strip $(MMS_SUPPORT))))_COMP_CR_COMMON += obigo03cfwlib
    else
      REL_MTK_COMP_CR_COMMON += obigo03cmmslib
      REL_MTK_COMP_CR_COMMON += obigo03cfwlib
    endif
  endif
endif

# Input method related modules

ifdef INPUT_METHOD
  REL_$(strip $(RELEASE_$(strip $(INPUT_METHOD))))_COMP_CR_COMMON += t9
  REL_$(strip $(RELEASE_$(strip $(INPUT_METHOD))))_COMP_CR_COMMON += zi
endif
