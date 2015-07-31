/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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


#ifdef __AGPS_CONTROL_PLANE__

#include "applib2_asn_memory.h"
#include "applib2_asn_common.h"
#include "applib2_asn_ber_common.h"
#include "applib2_mtkasn_global.h"
#include "kal_general_types.h"
#include "string.h"
#include "setjmp.h"
#include "ss_asn.h"


SS2_BearerServiceCode allBearerServices = {1,{0x00}};

SS2_BearerServiceCode allDataCDA_Services = {1,{0x10}};

SS2_BearerServiceCode dataCDA_300bps = {1,{0x11}};

SS2_BearerServiceCode dataCDA_1200bps = {1,{0x12}};

SS2_BearerServiceCode dataCDA_1200_75bps = {1,{0x13}};

SS2_BearerServiceCode dataCDA_2400bps = {1,{0x14}};

SS2_BearerServiceCode dataCDA_4800bps = {1,{0x15}};

SS2_BearerServiceCode dataCDA_9600bps = {1,{0x16}};

SS2_BearerServiceCode general_dataCDA = {1,{0x17}};

SS2_BearerServiceCode allDataCDS_Services = {1,{0x18}};

SS2_BearerServiceCode dataCDS_1200bps = {1,{0x1A}};

SS2_BearerServiceCode dataCDS_2400bps = {1,{0x1C}};

SS2_BearerServiceCode dataCDS_4800bps = {1,{0x1D}};

SS2_BearerServiceCode dataCDS_9600bps = {1,{0x1E}};

SS2_BearerServiceCode general_dataCDS = {1,{0x1F}};

SS2_BearerServiceCode allPadAccessCA_Services = {1,{0x20}};

SS2_BearerServiceCode padAccessCA_300bps = {1,{0x21}};

SS2_BearerServiceCode padAccessCA_1200bps = {1,{0x22}};

SS2_BearerServiceCode padAccessCA_1200_75bps = {1,{0x23}};

SS2_BearerServiceCode padAccessCA_2400bps = {1,{0x24}};

SS2_BearerServiceCode padAccessCA_4800bps = {1,{0x25}};

SS2_BearerServiceCode padAccessCA_9600bps = {1,{0x26}};

SS2_BearerServiceCode general_padAccessCA = {1,{0x27}};

SS2_BearerServiceCode allDataPDS_Services = {1,{0x28}};

SS2_BearerServiceCode dataPDS_2400bps = {1,{0x2C}};

SS2_BearerServiceCode dataPDS_4800bps = {1,{0x2D}};

SS2_BearerServiceCode dataPDS_9600bps = {1,{0x2E}};

SS2_BearerServiceCode general_dataPDS = {1,{0x2F}};

SS2_BearerServiceCode allAlternateSpeech_DataCDA = {1,{0x30}};

SS2_BearerServiceCode allAlternateSpeech_DataCDS = {1,{0x38}};

SS2_BearerServiceCode allSpeechFollowedByDataCDA = {1,{0x40}};

SS2_BearerServiceCode allSpeechFollowedByDataCDS = {1,{0x48}};

SS2_BearerServiceCode allDataCircuitAsynchronous = {1,{0x50}};

SS2_BearerServiceCode allAsynchronousServices = {1,{0x60}};

SS2_BearerServiceCode allDataCircuitSynchronous = {1,{0x58}};

SS2_BearerServiceCode allSynchronousServices = {1,{0x68}};

SS2_BearerServiceCode allPLMN_specificBS = {1,{0xD0}};

SS2_BearerServiceCode plmn_specificBS_1 = {1,{0xD1}};

SS2_BearerServiceCode plmn_specificBS_2 = {1,{0xD2}};

SS2_BearerServiceCode plmn_specificBS_3 = {1,{0xD3}};

SS2_BearerServiceCode plmn_specificBS_4 = {1,{0xD4}};

SS2_BearerServiceCode plmn_specificBS_5 = {1,{0xD5}};

SS2_BearerServiceCode plmn_specificBS_6 = {1,{0xD6}};

SS2_BearerServiceCode plmn_specificBS_7 = {1,{0xD7}};

SS2_BearerServiceCode plmn_specificBS_8 = {1,{0xD8}};

SS2_BearerServiceCode plmn_specificBS_9 = {1,{0xD9}};

SS2_BearerServiceCode plmn_specificBS_A = {1,{0xDA}};

SS2_BearerServiceCode plmn_specificBS_B = {1,{0xDB}};

SS2_BearerServiceCode plmn_specificBS_C = {1,{0xDC}};

SS2_BearerServiceCode plmn_specificBS_D = {1,{0xDD}};

SS2_BearerServiceCode plmn_specificBS_E = {1,{0xDE}};

SS2_BearerServiceCode plmn_specificBS_F = {1,{0xDF}};

SS2_AlertingPattern alertingLevel_0 = {1,{0x00}};

SS2_AlertingPattern alertingLevel_1 = {1,{0x01}};

SS2_AlertingPattern alertingLevel_2 = {1,{0x02}};

SS2_AlertingPattern alertingCategory_1 = {1,{0x04}};

SS2_AlertingPattern alertingCategory_2 = {1,{0x05}};

SS2_AlertingPattern alertingCategory_3 = {1,{0x06}};

SS2_AlertingPattern alertingCategory_4 = {1,{0x07}};

SS2_AlertingPattern alertingCategory_5 = {1,{0x08}};

SS2_SS_Code allSS = {1,{0x00}};

SS2_SS_Code allLineIdentificationSS = {1,{0x10}};

SS2_SS_Code clip = {1,{0x11}};

SS2_SS_Code clir = {1,{0x12}};

SS2_SS_Code colp = {1,{0x13}};

SS2_SS_Code colr = {1,{0x14}};

SS2_SS_Code mci = {1,{0x15}};

SS2_SS_Code allNameIdentificationSS = {1,{0x18}};

SS2_SS_Code cnap = {1,{0x19}};

SS2_SS_Code allForwardingSS = {1,{0x20}};

SS2_SS_Code cfu = {1,{0x21}};

SS2_SS_Code allCondForwardingSS = {1,{0x28}};

SS2_SS_Code cfb = {1,{0x29}};

SS2_SS_Code cfnry = {1,{0x2A}};

SS2_SS_Code cfnrc = {1,{0x2B}};

SS2_SS_Code cd = {1,{0x24}};

SS2_SS_Code allCallOfferingSS = {1,{0x30}};

SS2_SS_Code ect = {1,{0x31}};

SS2_SS_Code mah = {1,{0x32}};

SS2_SS_Code allCallCompletionSS = {1,{0x40}};

SS2_SS_Code cw = {1,{0x41}};

SS2_SS_Code hold = {1,{0x42}};

SS2_SS_Code ccbs_A = {1,{0x43}};

SS2_SS_Code ccbs_B = {1,{0x44}};

SS2_SS_Code mc = {1,{0x45}};

SS2_SS_Code allMultiPartySS = {1,{0x50}};

SS2_SS_Code multiPTY = {1,{0x51}};

SS2_SS_Code allCommunityOfInterest_SS = {1,{0x60}};

SS2_SS_Code cug = {1,{0x61}};

SS2_SS_Code allChargingSS = {1,{0x70}};

SS2_SS_Code aoci = {1,{0x71}};

SS2_SS_Code aocc = {1,{0x72}};

SS2_SS_Code allAdditionalInfoTransferSS = {1,{0x80}};

SS2_SS_Code uus1 = {1,{0x81}};

SS2_SS_Code uus2 = {1,{0x82}};

SS2_SS_Code uus3 = {1,{0x83}};

SS2_SS_Code allBarringSS = {1,{0x90}};

SS2_SS_Code barringOfOutgoingCalls = {1,{0x91}};

SS2_SS_Code baoc = {1,{0x92}};

SS2_SS_Code boic = {1,{0x93}};

SS2_SS_Code boicExHC = {1,{0x94}};

SS2_SS_Code barringOfIncomingCalls = {1,{0x99}};

SS2_SS_Code baic = {1,{0x9A}};

SS2_SS_Code bicRoam = {1,{0x9B}};

SS2_SS_Code allPLMN_specificSS = {1,{0xF0}};

SS2_SS_Code plmn_specificSS_1 = {1,{0xF1}};

SS2_SS_Code plmn_specificSS_2 = {1,{0xF2}};

SS2_SS_Code plmn_specificSS_3 = {1,{0xF3}};

SS2_SS_Code plmn_specificSS_4 = {1,{0xF4}};

SS2_SS_Code plmn_specificSS_5 = {1,{0xF5}};

SS2_SS_Code plmn_specificSS_6 = {1,{0xF6}};

SS2_SS_Code plmn_specificSS_7 = {1,{0xF7}};

SS2_SS_Code plmn_specificSS_8 = {1,{0xF8}};

SS2_SS_Code plmn_specificSS_9 = {1,{0xF9}};

SS2_SS_Code plmn_specificSS_A = {1,{0xFA}};

SS2_SS_Code plmn_specificSS_B = {1,{0xFB}};

SS2_SS_Code plmn_specificSS_C = {1,{0xFC}};

SS2_SS_Code plmn_specificSS_D = {1,{0xFD}};

SS2_SS_Code plmn_specificSS_E = {1,{0xFE}};

SS2_SS_Code plmn_specificSS_F = {1,{0xFF}};

SS2_SS_Code allCallPrioritySS = {1,{0xA0}};

SS2_SS_Code emlpp = {1,{0xA1}};

SS2_SS_Code allLCSPrivacyException = {1,{0xB0}};

SS2_SS_Code universal = {1,{0xB1}};

SS2_SS_Code callSessionRelated = {1,{0xB2}};

SS2_SS_Code callSessionUnrelated = {1,{0xB3}};

SS2_SS_Code plmnoperator = {1,{0xB4}};

SS2_SS_Code serviceType = {1,{0xB5}};

SS2_SS_Code allMOLR_SS = {1,{0xC0}};

SS2_SS_Code basicSelfLocation = {1,{0xC1}};

SS2_SS_Code autonomousSelfLocation = {1,{0xC2}};

SS2_SS_Code transferToThirdParty = {1,{0xC3}};

SS2_TeleserviceCode allTeleservices = {1,{0x00}};

SS2_TeleserviceCode allSpeechTransmissionServices = {1,{0x10}};

SS2_TeleserviceCode telephony = {1,{0x11}};

SS2_TeleserviceCode emergencyCalls = {1,{0x12}};

SS2_TeleserviceCode allShortMessageServices = {1,{0x20}};

SS2_TeleserviceCode shortMessageMT_PP = {1,{0x21}};

SS2_TeleserviceCode shortMessageMO_PP = {1,{0x22}};

SS2_TeleserviceCode allFacsimileTransmissionServices = {1,{0x60}};

SS2_TeleserviceCode facsimileGroup3AndAlterSpeech = {1,{0x61}};

SS2_TeleserviceCode automaticFacsimileGroup3 = {1,{0x62}};

SS2_TeleserviceCode facsimileGroup4 = {1,{0x63}};

SS2_TeleserviceCode allDataTeleservices = {1,{0x70}};

SS2_TeleserviceCode allTeleservices_ExeptSMS = {1,{0x80}};

SS2_TeleserviceCode allVoiceGroupCallServices = {1,{0x90}};

SS2_TeleserviceCode voiceGroupCall = {1,{0x91}};

SS2_TeleserviceCode voiceBroadcastCall = {1,{0x92}};

SS2_TeleserviceCode allPLMN_specificTS = {1,{0xD0}};

SS2_TeleserviceCode plmn_specificTS_1 = {1,{0xD1}};

SS2_TeleserviceCode plmn_specificTS_2 = {1,{0xD2}};

SS2_TeleserviceCode plmn_specificTS_3 = {1,{0xD3}};

SS2_TeleserviceCode plmn_specificTS_4 = {1,{0xD4}};

SS2_TeleserviceCode plmn_specificTS_5 = {1,{0xD5}};

SS2_TeleserviceCode plmn_specificTS_6 = {1,{0xD6}};

SS2_TeleserviceCode plmn_specificTS_7 = {1,{0xD7}};

SS2_TeleserviceCode plmn_specificTS_8 = {1,{0xD8}};

SS2_TeleserviceCode plmn_specificTS_9 = {1,{0xD9}};

SS2_TeleserviceCode plmn_specificTS_A = {1,{0xDA}};

SS2_TeleserviceCode plmn_specificTS_B = {1,{0xDB}};

SS2_TeleserviceCode plmn_specificTS_C = {1,{0xDC}};

SS2_TeleserviceCode plmn_specificTS_D = {1,{0xDD}};

SS2_TeleserviceCode plmn_specificTS_E = {1,{0xDE}};

SS2_TeleserviceCode plmn_specificTS_F = {1,{0xDF}};

AsnNull noInvokeId = 0;
#endif //__AGPS_CONTROL_PLANE__
