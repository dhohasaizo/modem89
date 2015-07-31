#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
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
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   sysGenUtility.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This module collects the subroutines for common utility. 
#*       
#*
#* Author:
#* -------
#*   Qmei Yang (mtk03726)
#*
#****************************************************************************/

#****************************************************************************
# SYSGEN ERROR MESSAGE
#****************************************************************************
package genERR;
use constant SYSERR_1_1         => "SYSGEN ERROR: [1.1][Feature Option Related]";
use constant SYSERR_1_2         => "SYSGEN ERROR: [1.2][Memory Expired]";
use constant SYSERR_1_3         => "SYSGEN ERROR: [1.3][UnSupported/Wrong Configuration]";
use constant SYSERR_1_4         => "SYSGEN ERROR: [1.4][File/Path doesn't exist]";
use constant SYSERR_1_5         => "SYSGEN ERROR: [1.5][Other errors]";
use constant SYSERR_2_0         => "SYSGEN ERROR: [2.0]";
use constant SYSERR_3_1         => "SYSGEN ERROR: [3.1]";
use constant SYSERR_3_2         => "SYSGEN ERROR: [3.2]";

package sysUtil;
use strict;
use Cwd;
#use warnings;

#****************************************************************************
# Constants
#****************************************************************************
my $SYSGENUTILITY_VERNO     = " m0.23";
             # m0.23, 2012/12/19, Add 89/72/82 into is_sv5
             # m0.21, 2012/10/31, Refine Error Message not to meet \w+ for easier function naming in ldsGen
             # m0.20, 2012/10/02, [Reserved for MOLY]
             # m0.19, 2012/09/23, Rename MT6583 to MT6589
             # m0.18, 2012/09/18, Remove GetSPRamSize() due to covering in ldsGenLib.pl
             # m0.17, 2012/09/02, Support ALPS database check-in history 
             # m0.16, 2012/08/30, Modify MT6583_MD2 RamSize from 6MB to 13MB
             # m0.15, 2012/08/17, Support Total RAM size in smartphone
             #                    Support MT6583 MD1/MD2
             # m0.14, 2012/08/13, Support MT6577
             # m0.13, 2012/08/07, Move Dec2Hex to CommonUtility.pm and add isDummyScatter()
             # m0.12, 2012/07/24, Support sysgen common error code/messages.
             # m0.11, 2012/07/12, Remove booting type query to FileInfoParser.pm
             # m0.10, 2012/07/02, Remove PrintDependency() to use tools::pack_dep_gen; PrintDependModule();
             # m0.09, 2012/07/02, Support SwitchToClonedChip
             # m0.08, 2012/06/28, Support MOLY database check-in history 
             # m0.07, 2012/05/28, Support path and filename case sensitive on Linux
             # m0.06, 2012/05/01, Support lds description_file_header
             # m0.05, 2012/01/20, Support NOR for CR4 
             # m0.04, 2012/01/13, Support MT6280 BLscatGen
             # m0.03, 2012/01/13, Remove MT6280 from SmartPhone
             # m0.02, 2012/01/08, Support MT6280
             # m0.01 , 2012/05/07, Move DSPTXRX_query_length from scatGenLib.pl to here.
             # v0.22 , 2012/04/12,  Modify GetIntsramInfo() to enhance 6250 FTE performance
             # v0.21 , 2012/03/26,  Modify the query method of vivaHelper.pm in query_viva_size()
             # v0.20 , 2012/03/22,  Add query_viva_size to support VIVA
             # v0.19 , 2012/03/21,  Support MT6250
             # v0.18 , 2012/04/17,  Support EWS to print file dependency
             # v0.17 , 2012/02/14,  Add check_cs1_base() and modify query_cs1_addr() to determine CS1 base address
             # v0.16 , 2012/01/30,  Support MT6922
             # v0.15 , 2012/01/28,  Add is_NOR() without supporting smartphone part
             # v0.14 , 2012/01/08,  Add is_CR4(), GetIntsramHWBoundary() and Support TK6280
             # v0.13 , 2012/01/08,  Add GetIntsramInfo() to get intsram CODE/DATA's information
             # v0.12 , 2012/01/08,  Remove has_cache()
             # v0.11 , 2011/11/04,  Remove phased-out chips and add is_arm7()
             # v0.10 , 2011/10/29,  modify query_cs1_addr for MT6255 bootloader workaround
             # v0.09 , 2011/10/28,  To support MT6255
             # v0.08 , 2011/10/28,  print an error message if the file can't be deleted
             # v0.07 , 2011/10/10,  Add has_cache()
             # v0.06 , 2011/09/25,  Move ChangeDefineValue() to auto_adjust_mem.pm and 
             #                      seperate HasCheckinHistory out from del_noCheckinHistory_file
             # v0.05 , 2011/09/16,  Add ChangeDefineValue() for common usage 
             #                      if needed to modify define value in some header files.
             # v0.04 , 2011/09/15,  Collect common functions which can be reused
             # v0.02 , 2011/05/24,  Support MT6921 in arm9 family
             # v0.01 , 2011/03/30,  Initial revision

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

#****************************************************************************
# Subroutine:  sysgenUtility_verno - to query this package's version number
# Parameters:  x
# Returns:     version number string
#****************************************************************************
sub sysgenUtility_verno
{
    return $SYSGENUTILITY_VERNO;
}

#****************************************************************************
# Subroutine:  GetIntsramInfo - to query INTSRAM_CODE and INTSRAM_DATA's Base/MaxSize
# Parameters:  BB chip  (eg. MT6276)
# Returns:     $strCODEBase, $strCODESize, $strDATABase, $strDATASize
#****************************************************************************
sub GetIntsramInfo
{
    my ($bb) = @_;
    my ($strCODEBase, $strCODESize, $strDATABase, $strDATASize) = (undef, undef, undef, undef);
    my %BB_INTSRAM_tbl =
       (        # $bb => [INTSRAM_CODE_Base, INTSRAM_CODE_Size, INTSRAM_DATA_Base, INTSRAM_DATA_Size]
                'MT6516'  => ["0x50000000", "0x0000E540", "0x5000E740", "0x00007200"],
                'MT6235'  => ["0x50000000", "0x0000C000", "0x50100000", "0x00008C00"],
                'MT6235B' => ["0x50000000", "0x0000C000", "0x50100000", "0x00008C00"], #MT6235
                'MT6236'  => ["0x50000000", "0x00010000", "0x50100000", "0x0000B000"],
                'MT6236B' => ["0x50000000", "0x00010000", "0x50100000", "0x0000B000"], #MT6236
                'MT6921'  => ["0x50000000", "0x00010000", "0x50100000", "0x0000B000"], #MT6236
                'MT6268'  => ["0x50000000", "0x00026000", "0x50100000", "0x00013800"],
                'MT6253'  => ["0x40000000", "0x00006A70", "0x40006A70", "0x00006200"],
                'MT6253E' => ["0x40008000", "0x00002C00", "0x4000AC00", "0x00002000"], 
                'MT6253L' => ["0x40008000", "0x00002C00", "0x4000AC00", "0x00002000"], #MT6253E
                'MT6252H' => ["0x40008000", "0x00002C00", "0x4000AC00", "0x00002000"], #MT6253E
                'MT6252'  => ["0x40008000", "0x00002C00", "0x4000AC00", "0x00002000"], #MT6253E
                'MT6250'  => ["0x70008000", "0x00002800", "0x7000A800", "0x00000C00"],
                'MT6276'  => ["0x50000000", "0x00010000", "0x50100000", "0x00010000"],
                'MT6573'  => ["0x50000000", "0x00010000", "0x50100000", "0x00010000"], #MT6276
                'MT6575'  => ["0x50000000", "0x00010000", "0x50100000", "0x00010000"], #MT6276
                'MT6577'  => ["0x50000000", "0x00010000", "0x50100000", "0x00010000"], #MT6276
                'MT6256'  => ["0x50000000", "0x00003000", "0x50100000", "0x00003000"],
                'MT6255'  => ["0x50000000", "0x00002000", "0x50100000", "0x00002000"],
                'MT6922'  => ["0x50000000", "0x00002000", "0x50100000", "0x00002000"], #MT6255
                'TK6280'  => ["0x58020000", "0x00020000", "0x58040000", "0x00020000"],
                'MT6280'  => ["0x70000000", "0x00038000", "+0x0",       "0x00038000"],
            'MT6589_MD1'  => ["0x70000000", "0x00040000", "+0x0",       "0x00040000"],
            'MT6589_MD2'  => ["0x70000000", "0x00002000", "0x70002000", "0x00002000"],
       );
    if(exists $BB_INTSRAM_tbl{$bb})
    {
        $strCODEBase = $BB_INTSRAM_tbl{$bb}[0];
        $strCODESize = $BB_INTSRAM_tbl{$bb}[1];
        $strDATABase = $BB_INTSRAM_tbl{$bb}[2];
        $strDATASize = $BB_INTSRAM_tbl{$bb}[3];
    }
    return ($strCODEBase, $strCODESize, $strDATABase, $strDATASize);
}
#****************************************************************************
# Subroutine:  GetIntsramHWBoundary - to query INTSRAM_PHYSICAL_BOUNDARY's Base/MaxSize
# Parameters:  BB chip  (eg. MT6276)
# Returns:     $strBase, $strSize
#****************************************************************************
sub GetIntsramHWBoundary
{
    my ($bb) = @_;
    my ($strBase, $strSize) = (undef, undef);
    my %BB_tbl =
       (        # $bb => [ Base, Size]
                'TK6280'  => ["0x58040000", "0x00020000"],
                'MT6280'  => ["0x70020000", "0x00018000"],
            'MT6589_MD1'  => ["0x70020000", "0x00020000"],
       );
    if(&is_CR4($bb)==1 and exists $BB_tbl{$bb})
    {
        $strBase = $BB_tbl{$bb}[0];
        $strSize = $BB_tbl{$bb}[1];
    }
    return ($strBase, $strSize);
}
#****************************************************************************
# Subroutine:  is_arm7 - Query if it's ARM7 Family
# Parameters:  BB chip  (eg. MT6276)
# Returns:     1=belongs arm7 family, undef=not arm7 family
#****************************************************************************
sub is_arm7
{
    my ($bb) = @_;
    my %BBtbl_ARM7_Family =
       (        
                'MT6253'  => 1,
                'MT6252H' => 1,
                'MT6252'  => 1,
                'MT6251'  => 1,
                'MT6250'  => 1,
       );
    return $BBtbl_ARM7_Family{$bb};
}
#****************************************************************************
# subroutine: is_mpu_capable - Query if it has mpu capability
# Input:      BB chip  (eg. MT6276)
# Output:     1=has mpu capability, others=doesn't have mpu capability
#****************************************************************************
sub is_mpu_capable
{
    my ($bb) = (@_);
    my %BBtbl_MPU_Capability =
       (       
                'MT6253'  => 1,
                'MT6252H' => 1,
                'MT6252'  => 1,
                'MT6251'  => 1,
                'MT6250'  => 1,
       );
    return $BBtbl_MPU_Capability{$bb};  
}

#****************************************************************************
# Subroutine:  is_arm9 - Query if it's ARM9 Family
# Parameters:  BB chip (eg. MT6235)
# Returns:     1=belongs arm9 family, undef=not arm9 family
#****************************************************************************
sub is_arm9
{
    my ($bb) = @_;
    my %BBtbl_ARM9_Family =
       (        
                'MT6235'  => 1,
                'MT6235B' => 1,
                'MT6236'  => 1,
                'MT6236B' => 1,
                'MT6268A' => 1,
                'MT6268'  => 1,
                'MT6921'  => 1,
                'MT6255'  => 1,
                'MT6922'  => 1,
            'MT6589_MD2'  => 1,
       );
    return $BBtbl_ARM9_Family{$bb};
}


#****************************************************************************
# Subroutine:  is_arm11 - Query if it's ARM11 Family
# Parameters:  BB chip  (eg. MT6276)
# Returns:     1=belongs arm11 family, undef=not arm11 family
#****************************************************************************
sub is_arm11
{
    my ($bb) = @_;
    my %BBtbl_ARM11_Family =
       (        
                'MT6256'  => 1,
                'MT6276'  => 1,
                'MT6573'  => 1,
                'MT6575'  => 1,
                'MT6577'  => 1,
       );
    return $BBtbl_ARM11_Family{$bb};
}

#****************************************************************************
# Subroutine:  is_CR4 - Query if it's CR4
# Parameters:  BB chip  (eg. MT6280)
# Returns:     1=belongs CR4, undef=not CR4
#****************************************************************************
sub is_CR4
{
    my ($bb) = @_;
    my %BBtbl_CR4_Family =
       (        
                'TK6280'  => 1,
                'MT6280'  => 1,
            'MT6589_MD1'  => 1,
       );
    return $BBtbl_CR4_Family{$bb};
}

#****************************************************************************
# subroutine:  Query if it has MMU(arm9, arm11, mtkmmu) 
#              to map the address like 0xf------- 
# input:       BB chip  (eg. MT6276)
# Output:      0=non-mmu, 1=it has mmu
#****************************************************************************
sub is_mmu
{
	my ($bb) = (@_);
	my $nIsMMU = 0; #0=non-MMU, 1=hasMMU;
	my %BBtbl_MTKMMU_Family =
       (        
                'MT6252'   => 1,
                'MT6252H'  => 1,
                'MT6250'   => 1,
       );
	if(&is_arm9($bb) or &is_arm11($bb) or defined $BBtbl_MTKMMU_Family{$bb} or &is_CR4($bb))
	{
		$nIsMMU = 1;
	}
	return $nIsMMU;	
}
#****************************************************************************
# subroutine: is_sv5 - Query if it's SV5 Family
# Input:      BB chip  (eg. MT6276)
# Output:     1=belongs sv5 family, undef=not sv5 family
#****************************************************************************
sub is_sv5
{
    my ($bb) = (@_);
    my %BBtbl_SV5_Family =
       (        
                'MT6276'  => 1,
                'MT6251'  => 1,
                'MT6256'  => 1,
                'MT6255'  => 1,
                'MT6922'  => 1,
                'MT6250'  => 1,
                'MT6280'  => 1,
            'MT6589_MD1'  => 1,
            'MT6589_MD2'  => 1,
                'MT6572'  => 1,
                'MT6582'  => 1,
       );
    return $BBtbl_SV5_Family{$bb};  
}

#****************************************************************************
# subroutine: is_UMTS - Query if it's UMTS
# Input:      BB chip  (eg. MT6276)
# Output:     1=belongs UMTS Family, others=not UMTS Family
#****************************************************************************
sub is_UMTS
{
    my ($bb) = (@_);
    my %BBtbl_UMTS_Family =
       (        
                'MT6268'  => 1,
       );
    return $BBtbl_UMTS_Family{$bb};  
}

#****************************************************************************
# subroutine: DSPTXRX_query_length
# purpose : Exec View :: DSP TX RX :: Size Of TX RX query
# Input:      1. $bb: e.g. MT6280 
#             2. $mode: e.g. BASIC, L1S, GSM, GPRS, UMTS
# Output:     (nTXLength, nRXLength)
#****************************************************************************
sub DSPTXRX_query_length
{
    my ($bb, $mode) = @_;
    # --- --- --- 
    my %BBtbl_gprs_tx =
       (        'MT6235'  => 0x20000,
                'MT6235B' => 0x20000,
                'MT6236'  => 0x20000,
                'MT6236B' => 0x20000,
                'MT6921'  => 0x08000,
                'MT6268'  => 0x20000,
                'MT6253'  => 0x02000,
                'MT6516'  => 0x20000,
                'MT6276'  => 0x10000,
                'MT6253E' => 0x02000,
                'MT6253L' => 0x02000,
                'MT6252H' => 0x02000,
                'MT6252'  => 0x02000,
                'MT6573'  => 0x10000,
                'MT6575'  => 0x10000,
                'MT6577'  => 0x10000,
                'MT6255'  => 0x20000,
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
                'MT6922'  => 0x20000,
                'MT6250'  => 0x06000,                
       );
       #map {print $_, "\n";} keys %BBtbl;
    my %BBtbl_gprs_rx =
       (        'MT6235'  => 0x20000,
                'MT6235B' => 0x20000,
                'MT6236'  => 0x20000,
                'MT6236B' => 0x20000,
                'MT6921'  => 0x20000,
                'MT6268'  => 0x20000,
                'MT6253'  => 0x02000,
                'MT6516'  => 0x20000,
                'MT6276'  => 0x18000,
                'MT6253E' => 0x02000,
                'MT6253L' => 0x02000,
                'MT6252H' => 0x02000,
                'MT6252'  => 0x02000,
                'MT6573'  => 0x18000,
                'MT6575'  => 0x18000,
                'MT6577'  => 0x18000,
                'MT6255'  => 0x20000,
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
                'MT6922'  => 0x20000,
                'MT6250'  => 0x0F000,                
       );
       #map {print $_, "\n";} keys %BBtbl;
    my %BBtbl_gsm_tx =
       (        'MT6235'  => 0x20000,
                'MT6235B' => 0x20000,
                'MT6236'  => 0x20000,
                'MT6236B' => 0x20000,
                'MT6921'  => 0x08000,
                'MT6268'  => 0x20000,
                'MT6253'  => 0x01000,
                'MT6516'  => 0x20000,
                'MT6276'  => 0x20000,
                'MT6253E' => 0x02000,
                'MT6253L' => 0x02000,
                'MT6252H' => 0x02000,
                'MT6252'  => 0x02000,
                'MT6573'  => 0x10000,
                'MT6575'  => 0x10000,
                'MT6577'  => 0x10000,
                'MT6255'  => 0x20000,
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
                'MT6922'  => 0x20000,
                'MT6250'  => 0x01000,               
       );
       #map {print $_, "\n";} keys %BBtbl;
    my %BBtbl_gsm_rx =
       (        'MT6235'  => 0x20000,
                'MT6235B' => 0x20000,
                'MT6236'  => 0x20000,
                'MT6236B' => 0x20000,
                'MT6921'  => 0x20000,
                'MT6268'  => 0x20000,
                'MT6253'  => 0x01000,
                'MT6516'  => 0x20000,
                'MT6276'  => 0x20000,
                'MT6253E' => 0x02000,
                'MT6253L' => 0x02000,
                'MT6252H' => 0x02000,
                'MT6252'  => 0x02000,
                'MT6573'  => 0x18000,
                'MT6575'  => 0x18000,
                'MT6577'  => 0x18000,
                'MT6255'  => 0x20000,
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
                'MT6922'  => 0x20000,
                'MT6250'  => 0x03000,                
       );
       #map {print $_, "\n";} keys %BBtbl;
    my %BBtbl_l1s_tx =
       (        'MT6276'  => 0x20000,
                'MT6573'  => 0x20000,
                'MT6575'  => 0x20000,
                'MT6577'  => 0x20000,
                'MT6250'  => 0x18000,               
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
       );
       #map {print $_, "\n";} keys %BBtbl;
    my %BBtbl_l1s_rx =
       (        'MT6276'  => 0x20000,
                'MT6573'  => 0x20000,
                'MT6575'  => 0x20000,
                'MT6577'  => 0x20000,
                'MT6250'  => 0x0F000,       	        
                'MT6280'  => 0x20000,
            'MT6589_MD1'  => 0x20000,
            'MT6589_MD2'  => 0x20000,
       );
       #map {print $_, "\n";} keys %BBtbl;
    # --- --- --- 
    if ($mode =~ /L1S/i)
    {
        if ((exists $BBtbl_l1s_tx{$bb}) and (exists $BBtbl_l1s_rx{$bb}))
        {
            return ($BBtbl_l1s_tx{$bb}, $BBtbl_l1s_rx{$bb});
        }
    }
    if ($mode =~ /gsm/i)
    {
        if ((!exists $BBtbl_gsm_tx{$bb}) or (!exists $BBtbl_gsm_rx{$bb}))
        {
            return (0, 0);
        }
        return ($BBtbl_gsm_tx{$bb}, $BBtbl_gsm_rx{$bb});
    }
    else
    {
        if ((!exists $BBtbl_gprs_tx{$bb}) or (!exists $BBtbl_gprs_rx{$bb}))
        {
            return (0, 0);
        }
        return ($BBtbl_gprs_tx{$bb}, $BBtbl_gprs_rx{$bb});
    }
}

#****************************************************************************
# subroutine:  determine CS1 base address
# input:       BB chip
# Output:      1 = CS1 base address is 0x08000000, others = CS1 base address is 0x10000000
#****************************************************************************
sub check_cs1_base
{
    my ($bb) = (@_);
    my %BBtbl_cs1_base =
       (
            'MT6253'  => 1,
            'MT6252H' => 1,
            'MT6252'  => 1,
            'MT6251'  => 1,
       );
    return $BBtbl_cs1_base{$bb};

}

#****************************************************************************
# subroutine:  SCHEME Configure Routines :: Query :: CS1 base address
# Note      :  this function doesn't guarantee if the chip needs to remap.
#              it only returns the address if needing remapping.
# input:       BB chip, base address(if no input, it's 0 in default), isBootloader(undef or 0= not bootloader)
# Output:      CS1 default base address
#****************************************************************************
sub query_cs1_addr
{
    my ($bb, $nBaseAddress, $bisBL) = @_;
    $nBaseAddress = 0 if(!defined $nBaseAddress);
    my $nCS1BaseAddress = $nBaseAddress;
    if (&check_cs1_base($bb) == 1)
    {
        $nCS1BaseAddress = $nBaseAddress ^ 0x08000000;
    }
    else
    {
        $nCS1BaseAddress = $nBaseAddress ^ 0x10000000;
    }
    if(defined $bisBL and $bisBL != 0)
    {
        if($bb eq "MT6255" or $bb eq "MT6280" or $bb eq "MT6922" or $bb eq "MT6250")
        {
            $nCS1BaseAddress = $nBaseAddress;
        }
    }
    return $nCS1BaseAddress;
}
#****************************************************************************
# subroutine:  SCHEME Configure Routines :: Query :: viva header size
# note:        This function is used to get viva header size if
#              DCMP support or ZIMAGE support or ALICE support
# input:       BB chip
# Output:      viva header size
#****************************************************************************
sub query_viva_size
{
    require "tools/vivaHelper.pm";
    my ($bb) = @_;
    my $viva_size = &vivaHelper::GetVIVAHeaderSize_NI(&is_sv5($bb));
    return $viva_size;
}
#****************************************************************************
# subroutine:  is_XIP_Shadowing
# Note      :  this function is to query which chip needs to do shadowing
#              due to speeding up on NOR or Serial Flash
# input:       BB chip
# Output:      0=unsupported, 1=supported
#****************************************************************************
sub is_XIP_Shadowing
{
    my ($bb) = @_;
    my %BBtbl_Family =
       (        
            'MT6280'  => 1,
       );
    return $BBtbl_Family{$bb};  
}

#****************************************************************************
# subroutine:  SwitchToClonedChip
# Note      :  this function is to get original cloned chip 
#              otherwises it returns input chip.
# input:       strBBChip (e.g. MT6280) 
# Output:      strBBChip (e.g. MT6280)
#****************************************************************************
sub SwitchToClonedChip
{
    my ($bb) = @_;
    my %BBtbl_Family =
       (        
            "MT6577"  => "MT6575",
       );
    $bb = $BBtbl_Family{$bb} if(defined $BBtbl_Family{$bb});
    return $bb;
}

#****************************************************************************
# Subroutine:   del_noCheckinHistory_file
# Parameters:   one file path
# Returns:      N/A
#****************************************************************************
sub del_noCheckinHistory_file
{
    my ($filepath) = @_;
    return unless (-e $filepath);

    my $nHas = &HasCheckinHistory($filepath);
    if($nHas == 1)
    {
        print "$filepath: Check-in message is found. No need to update.\n";
    }
    elsif($nHas == 0)
    {
        unlink $filepath;
        print "$filepath can't be deleted properly!\n" if(-f $filepath);
    }
    return;
}
#****************************************************************************
# Subroutine:   HasCheckinHistory
# Parameters:   one file path
# Returns:      undef=not exists, 0=no history, 1=has history
#****************************************************************************
sub HasCheckinHistory
{
    my ($filepath) = @_;
    return undef unless (-e $filepath);
    my $nReturn = 0; # Empty=not exists, 0=no history, 1=has history

    ## Now check if the $target file check-in or auto-gen
    open SRC_FILE_R , "<$filepath" or &error_handler("$filepath: file error!", __FILE__, __LINE__);
    my $reading;
    {
		local $/;
		$reading = <SRC_FILE_R>; 
	}    
    close SRC_FILE_R;

    ## Look for check-in pattern ##
    if (($reading =~ /\[MAUI_\d{8}\]|\[MOLY\d{8}\]|\[ALPS\d{8}\]/) or ($reading =~ /MANUAL-CHECKIN/i))
    {
        $nReturn = 1;
    }   
    return $nReturn;
}
#****************************************************************************
# Subroutine:   isDummyScatter
# Parameters:   $bINSIDE_MTK = 0 or 1, $strDUMMY_SCATTER_FORCE = TRUE or FALSE
# Returns:      0=not dummy , 1=is dummy
#****************************************************************************
sub isDummyScatter
{
    my ($bINSIDE_MTK, $strDUMMY_SCATTER_FORCE) = @_;
    my $bIsDummy = 0; #not dummy by default
    if (1 == &FileInfo::is_NOR())
    {
        if(&FileInfo::is('dummy_scatter_enable', "TRUE"))
        {
            $bIsDummy = 1 if($bINSIDE_MTK == 1);
        }
    }
    $bIsDummy = 1 if($strDUMMY_SCATTER_FORCE eq 'TRUE');
    return $bIsDummy;
}

#****************************************************************************
# subroutine:  error_handler
# input:       $error_msg:     error message
#****************************************************************************
sub error_handler
{
    my ($error_msg, $file, $line_no, $strTitle) = @_;
       
    my $final_error_msg = "$strTitle ERROR: $error_msg at $file line $line_no : $!\n";
    print $final_error_msg;
    die $final_error_msg;
}

sub sysgen_die
{
    my ($error_msg, $file, $line_no) = @_;
    &error_handler($error_msg, $file, $line_no, 'SYSGEN');
}
sub sysUtil_die
{
    my ($error_msg, $file, $line_no) = @_;
    &error_handler($error_msg, $file, $line_no, 'SYSGENUTILITY');
}

#****************************************************************************
# subroutine:  description_file_header
# return:      file header -- description 
# input:       $filename:     filename
# input:       $description:  one line description
# input:       $author:       optional
# input:       $strComment:   optional
# input:       $bAutoGen      optional: 1=AutoGen, 0 or undef = not AutoGen
#****************************************************************************
sub description_file_header
{
    my ($filename, $description, $author, $strComment, $bAutoGen) = @_;
    $filename =~ s/.*\///;
    my $strAutoGeneratedDate = " *\n";
    my $strWarning;
    if($bAutoGen == 1)
    {
        my ($day, $month, $year) = (localtime)[3,4,5]; $month++; $year+=1900;
        $strAutoGeneratedDate = <<"__TEMPLATE";
 *
 * Auto Generated Date:
 * -------
 *   $year/$month/$day
 *
__TEMPLATE
        $strWarning = <<"__TEMPLATE";
 * This file is auto-generated and please DO NOT change the content at will
 *=========================================================================
__TEMPLATE
        $strComment = $strWarning.$strComment;
    }
    my $template = <<"__TEMPLATE";
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   $filename
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   $description
 *
 * Author:
 * -------
 *   $author
$strAutoGeneratedDate
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * \$Revision\$
 * \$Modtime\$
 * \$Log\$
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
$strComment
 ****************************************************************************/

__TEMPLATE

   return $template;
}

#****************************************************************************
# subroutine:  copyright_file_header
# return:      file header -- copyright
#****************************************************************************
sub copyright_file_header
{
    my $template = <<"__TEMPLATE";
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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

__TEMPLATE

   return $template;
}
