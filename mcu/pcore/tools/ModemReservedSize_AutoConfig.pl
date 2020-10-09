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
#*   ModemReservedSize_AutoConfig.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script parses sym/linker script 
#*   and give some recommendation or create new MEMORY config file
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/

#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, "pcore/" , './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path             
use auto_adjust_mem; #pm file name without case sensitivity
use FileInfoParser;
use sysGenUtility;
use CommonUtility;
use BasicMemInfoQuery;
use systemInfo;
use ldsFrame;
use File::Basename;
use File::Copy;
use File::Path;
use LinkerOutputParser;
use POSIX qw(floor ceil);

#****************************************************************************
# AutoCheckin Information
#****************************************************************************
use constant OWNER        => "";
#****************************************************************************
# Constants
#****************************************************************************
my $MODEMSIZE_CONFIG_VERNO    = " a0.03";
                               #  a0.03  20170428 by Tero,  Added aligment configuration for memory allocation
                               #  a0.02  20170118 by Tero,  Added IOCU3 region
                               #  a0.01  20161222 by Tero,  AAPMC for LR13
                               #  u0.26  20161207 by Tero,  Removed Switch module dependency
                               #  u0.25  20161021 by Tero,  Disabled AAPMC from ESL_HRT_SPRAM/EMI builds
                               #  u0.24  20160801 by Tero,  Removed L1CORE and Copro support
                               #  u0.23  20160719 by Tero,  Removed unused sections
                               #  u0.22  20160531 by Tero,  Memory layout modified
                               #  u0.21  20160530 by Tero,  IOCU2 address calculation fixed
                               #  u0.20  20160321 by Tero,  Core spesific region memory claculation updated
                               #  u0.19  20160321 by Tero,  Added AAPMC support for LR12
                               #  u0.18  20150623 by Carl,  Refine the way to use GetSharedMemorySize. It includes dsp tx/rx section now
                               #  u0.17  20150518 by Carl,  Align the end address of MD to MPU alignment
                               #  u0.16  20150514 by Carl,  Support Ramdisk for TK6291
                               #  u0.15  20150126 by Carl,  Refine GetMPUAligned for adding debug log
                               #  u0.14  20150114 by Carl,  Refine Memory Utility
                               #  u0.13  20150106 by Carl,  lds refinement: 1) auto adjust shared region size, 2) reserve pcore, l1core SWLA space
                               #  u0.12  20141105 by Carl,  move align_for_mpu() to commun utility
                               #  u0.11  20140926 by Carl,  Support GFH + SIG
                               #  u0.10  20140905 by Carl,  Reduce default shared memory size for PCORE ONLY project
                               #  u0.09, 20140805 by Carl,  Increase default shared memory region size
                               #  u0.08, 20140731 by Carl,  Dump l1core region
                               #  ...
                               #  v0.08, 20130625 by mei, Support COPRO auto config
                               #  v0.07, 20130603 by mei, Add infomake.log input
                               #  v0.06, 20130425 by mei, Not to limit SetMemorySegment() in NOR project only 
                               #  v0.05, 20130321 by mei, Support to show basic ram info during checking load view
                               #  v0.04, 20130321 by mei, Set MT6572&6582 to be 2 MB aligned
                               #  v0.03, 20130208 by mei, perl 5.58 can't support: make_path
                               #  v0.02, 20130124 by mei, to replace chip with cloned chip
                               #  v0.01, initial draft

#****************************************************************************
# Inputs
#****************************************************************************
my $MAP_PATH                    = $ARGV[0];
my $SYM_PATH                    = $ARGV[1];
my $LDS_PATH                    = $ARGV[2];
my $BUILD_FOLDER                = $ARGV[3];
my $FEATURE_CONFIG_H            = $ARGV[3] . "/custom_FeatureConfig.h";
my $MAKE_FILE                   = $ARGV[4];
my $INTERMEDIATE_FILE           = $ARGV[5];  #build/.../tmp/~ModemReservedSize_AutoConfig.tmp 
my $LOG_PATH                    = $ARGV[6];
my $INFOMAKE_PATH               = $ARGV[7];
my $PROJECT_NAME                = basename($MAKE_FILE);

print "Input:\n$ARGV[0]\n$ARGV[1]\n$ARGV[2]\n$ARGV[3]\n$ARGV[4]\n$ARGV[5]\n$ARGV[6]\n$ARGV[7]\n$ARGV[8]\n";

#****************************************************************************
# Global Variables
#****************************************************************************
my %MAKEFILE_OPTIONS;
my %CmplOption;
my %RelOption;
my $g_bAutoConfig = 0;
my $ERR_CODE;
my $g_strMsg;
my @g_MRT = ({Section => "ROM",Aligment => 64},
	     {Section => "UROM",Aligment => 64},
	     {Section => "MCURO_HWRW",Aligment => 1024},
	     {Section => "RAM",Aligment => 8192},
	     {Section => "MCURW_HWRW",Aligment => 64},
	     {Section => "DSP_TXRX",Aligment => 128},
	     {Section => "IOCU2",Aligment => 64},
	     {Section => "IOCU3",Aligment => 64},
	     {Section => "L2C_LOCK",Aligment => 64},
	     {Section => "CORE0",Aligment => 1024},
	     {Section => "CORE1",Aligment => 1024});
	

#****************************************************************************
# >>>  Check if it's able to adjust
#****************************************************************************
my $bEnableAutoConfig = 
    IsEnabledAutoConfig($MAKE_FILE, \%MAKEFILE_OPTIONS, $INFOMAKE_PATH, \%CmplOption, \%RelOption);

my $bHasHistory = (1==sysUtil::HasCheckinHistory($LDS_PATH) ? 1 : 0);  # if may return undef
my $g_bb = sysUtil::SwitchToClonedChip(FileInfo::GetChip());
my $g_bSupportedToAdjustLoadView = sysUtil::isSupportedToAdjustLoadView($g_bb);
my $g_bSupportedToAdjustRAMSize = sysUtil::isSupportedToAdjustRAMSize($g_bb);
my $bSupportedCompiler = (FileInfo::GetCompiler() eq "GCC");
my $g_bPcoreOnly = &BuildInfo::exist(BuildOPT::CMPL, "__PC ORE_ONLY__"); #always 0 in LR12
$g_bAutoConfig = ($bEnableAutoConfig 
             and ($g_bSupportedToAdjustLoadView or $g_bSupportedToAdjustRAMSize) 
             and $bSupportedCompiler
             and !$bHasHistory
             and !$g_bPcoreOnly);
print "-----------------------------------------------------------------\n";
print "Check if it's able to adjust($g_bAutoConfig):\n";
print "bEnableAutoConfig      = $bEnableAutoConfig\n";
print "bHasHistory            = $bHasHistory\n";
print "SupportedMDAutoConfig  = (LoadView=$g_bSupportedToAdjustLoadView or RamSize=$g_bSupportedToAdjustRAMSize)\n";
print "bSupportedCompiler     = $bSupportedCompiler\n";
print "bPcoreOnly             = $g_bPcoreOnly\n";
my $strPrompt = (!$g_bAutoConfig) ? "disabled" : "enabled";
PrintLog("AutoConfig is $strPrompt\n");
#****************************************************************************
# >>>  Main Flow
#****************************************************************************
if(!$g_bAutoConfig) # not able to config
{
    if(!$bSupportedCompiler)
    {
        print "Unsupported Compiler: ".FileInfo::GetCompiler()."\n";
        $ERR_CODE = ERR::CANNOT_ADJUST;
    }
}
else
{
    $ERR_CODE = AutoAdjust($g_bb, $MAKE_FILE, $LDS_PATH, $MAP_PATH, $SYM_PATH);
}
#****************************************************************************
# oo >>>  Finished
#****************************************************************************
PrintLog("-----------------------------------------------------------------\n");
PrintLog("RESULT = ". ERR::QueryErrMeaning($ERR_CODE)."\n");
CommonUtil::WriteFileContent($INTERMEDIATE_FILE, $g_strMsg);
exit $ERR_CODE;

sub AutoAdjust
{
    my ($bb, $MAKE_FILE, $LDS_PATH, $MAP_PATH, $SYM_PATH)= @_;
    if ($SYM_PATH =~ /dummy_/i)
      {
	if(!-e $SYM_PATH)
	  {
	    $SYM_PATH =~ s/dummy_//g;
	  }
      }
    my $index = 0;
    foreach my $R_ref (@g_MRT)
      {
	my $name = $R_ref->{Section};
	$R_ref->{OrigBase} = hex(sysInfo::GetMemoryInfo($name, 1, $LDS_PATH));
	$R_ref->{OrigLen} = hex(sysInfo::GetMemoryInfo($name, 2, $LDS_PATH));
	my $prefix = $R_ref->{OrigBase}&0xf0000000;
	if($name =~ /ROM/)
	  {
	    $R_ref->{Used} = BasicMemInfo::DispatchCommand("CMD_GetLoadViewSize", $MAKE_FILE, $LDS_PATH, $MAP_PATH, $SYM_PATH, undef);
	    $R_ref->{AdjBase} = $R_ref->{OrigBase};
	  } else {
	    $R_ref->{Used} = GetRegionSizeInMemory($name, $LDS_PATH);
	    $R_ref->{AdjBase}  = ((($g_MRT[$index-1]->{AdjBase} + $g_MRT[$index-1]->{Used} + (($R_ref->{Aligment}*1024)-1)) & ~(($R_ref->{Aligment}*1024)-1))&0x0fffffff)|$prefix;
	  }
	    ($R_ref->{AdjSize},$R_ref->{AdjBase}) = GetMMURegion($R_ref->{Used} ,$R_ref->{AdjBase},$R_ref->{Aligment});
	$index += 1;
      }
    # Get LDS ROM Length and RAM Length, and the 1stRegion Base in RAM
    my $nActualROMSize = $g_MRT[GetSectionIndex("ROM")]->{AdjSize};
    my $nROM_Length = hex(sysInfo::GetMemoryInfo("ROM", 2, $LDS_PATH));
    my $nRAMUsage = ($g_MRT[-1]->{OrigBase}+$g_MRT[-1]->{OrigLen})- $g_MRT[GetSectionIndex("MCURO_HWRW")]->{OrigBase};
    my $nRAM_TOTAL_USAGE = ($g_MRT[-1]->{AdjBase}+$g_MRT[-1]->{AdjSize})- $g_MRT[GetSectionIndex("MCURO_HWRW")]->{AdjBase};
    my $ERsInRAM_aref = BasicMemInfo::DispatchCommand("GetERsInRAM", $MAKE_FILE, $LDS_PATH, $MAP_PATH, $SYM_PATH, undef);
    my $n1stERInRAMVMA = hex(&LinkerOutputParser::GetExeRegionInfo($ERsInRAM_aref->[0], Region::VMA));
    PrintLog("----------------------------------Auto Adjust----------------------------------\n");
    PrintLog("             +------------+------------+------------+------------+------------+\n");
    PrintLog("             |             LDS File                 |        ADJUSTED         |\n");
    PrintLog("+------------+------------+------------+------------+------------+------------+\n");
    PrintLog("|    Section |       Base |       Size |       Used |       Base |       Size |\n");
    PrintLog("+------------+------------+------------+------------+------------+------------+\n");

    foreach my $R_ref (@g_MRT)
      {
	PrintLog(sprintf("| %10s | 0x%.8x | 0x%.8x | 0x%.8x | 0x%.8x | 0x%.8x |\n",$R_ref->{Section},$R_ref->{OrigBase},$R_ref->{OrigLen},$R_ref->{Used},$R_ref->{AdjBase},$R_ref->{AdjSize}));
      }
    PrintLog("+------------+------------+------------+------------+------------+------------+\n");
    PrintLog("Actual ROM Size = ". CommonUtil::Dec2Hex($nActualROMSize)."\n");
    PrintLog("Actual RAM Usage = ". CommonUtil::Dec2Hex($nRAM_TOTAL_USAGE)."\n");
    PrintLog("current ROM Length in LDS = ". CommonUtil::Dec2Hex($nROM_Length)."\n");
    PrintLog("current total RAM Usage = ".CommonUtil::Dec2Hex($nRAMUsage)."\n");
    PrintLog("-------------------------------------------------------------------------------\n");
    my $err;
    if(($g_bSupportedToAdjustLoadView and ($nActualROMSize < $nROM_Length)) 
    or ($g_bSupportedToAdjustRAMSize  and ($nRAM_TOTAL_USAGE < $nRAMUsage) )) # RAM size is RAM BASE+LEN
    {
        my $strFilePath = PrepareFileToModify();
        ModifyMEMORY($strFilePath);
        $err = ERR::AUTOCONFIG_SELF_MODIFY_SUCCESS;
        RecommendDuringAutoAdjust($err, $nActualROMSize, $nROM_Length,
                                 $n1stERInRAMVMA, $ERsInRAM_aref->[0], $nRAM_TOTAL_USAGE, $nRAMUsage);
    }
    else
    {
        $err = ERR::NO_NEED_TO_UPDATE;
        $err = RecommendDuringAutoAdjust($err, $nActualROMSize, $nROM_Length,
                                 $n1stERInRAMVMA, $ERsInRAM_aref->[0], $nRAM_TOTAL_USAGE, $nRAMUsage);
    }

    return $err;
}

sub GetSectionIndex
  {
    my ($RegionName) = @_;
    my $index = 0;
    foreach my $R_ref (@g_MRT)
      {
	return $index if($R_ref->{Section} eq $RegionName);
	$index += 1;
      }
    return -1;
  }

sub GetRegionSizeInMemory
  {
    my ($RegionName, $LDS_FILE) = @_;
    my $mem_start = hex(sysInfo::GetMemoryInfo($RegionName, 1, $LDS_PATH))&0x0fffffff;
    my $mem_size = hex(sysInfo::GetMemoryInfo($RegionName, 2, $LDS_PATH));
    my $allRegions = &LinkerOutputParser::ListAllExeRegion(1);
#    PrintLog("Region ".$RegionName." Start:".CommonUtil::Dec2Hex($mem_start). " Size:".CommonUtil::Dec2Hex($mem_size)."\n");
    my @sections;
    my $ActualSize = 0;
    foreach my $Region (@{$allRegions})
      {
	my $reg_start = hex(LinkerOutputParser::GetExeRegionInfo($Region, Region::VMA))&0x0fffffff;
	next if (($reg_start < $mem_start) or ($reg_start > ($mem_start+$mem_size-1)));
	my $reg_size = hex(LinkerOutputParser::GetExeRegionInfo($Region, Region::Size));
	next if (!$reg_size);
        push @sections, $Region;
#        PrintLog($Region."\n");
      }
    $ActualSize =((hex(LinkerOutputParser::GetExeRegionInfo(@sections[-1], Region::VMA))+hex(LinkerOutputParser::GetExeRegionInfo(@sections[-1], Region::Size)))&0x0fffffff)- (hex(LinkerOutputParser::GetExeRegionInfo(@sections[0], Region::VMA))&0x0fffffff) if (@sections);
#     PrintLog("Actual size:".CommonUtil::Dec2Hex($ActualSize). "\n");
    return $ActualSize;
  }

sub GetMMURegion
{
  my ($OrigSize, $OrigAddr,$aligment) = @_;
  return $OrigSize,$OrigAddr if (!$OrigSize);
  $aligment = 4 if (!(defined $aligment));
  my $NewSize;
  $NewSize = CommonUtil::GetKBAligned($OrigSize,$aligment);
  return $NewSize,$OrigAddr  if (!$OrigAddr);
  $OrigAddr = ceil($OrigAddr/($aligment*1024))*(1024*$aligment);
  return $NewSize,$OrigAddr;
}

sub RecommendDuringAutoAdjust
{
    my ($err, $nActualROMSize, $nROM_Length, $n1stERInRAMVMA, $ER1st, $nRAM_Length, $nRAMTotalUsage) = @_;
    if($nActualROMSize > $nROM_Length)
    {
        if(!$g_bSupportedToAdjustLoadView)
        {
            PrintLog("Actual ROM Size > ROM Length in LDS\n");
            PrintLog("[Recommend] Setting ROM Length to " . CommonUtil::Dec2Hex($nActualROMSize)."\n");
        }
        $err = ERR::CANNOT_ADJUST;
    }
    if($nRAM_Length >  $nRAMTotalUsage)
    {
        if(!$g_bSupportedToAdjustRAMSize)
        {
            PrintLog("[Recommend] Setting RAM Length to " . CommonUtil::Dec2Hex($nRAM_Length)."\n");
        }
        $err = ERR::CANNOT_ADJUST;
    }
    return $err;
}

sub PrepareFileToModify
{
    ldsFrame::CleanCallBackFunc();
    my $strDefaultMEMORYPath = ldsFrame::GetPath($g_bb, ldsFrame::MEMORY);
    my $strFilePath = $strDefaultMEMORYPath;
    if($strDefaultMEMORYPath =~ /custom\/system\/(.+)/i)
    {
        my $strTemp = $1;
        $BUILD_FOLDER .= "/" if($BUILD_FOLDER !~ /\/$/);
        $strFilePath = $BUILD_FOLDER . $strTemp;
        if(!-e $strFilePath)
        {
            my $DIR = dirname($strFilePath);
            mkpath($DIR) if(!-f $DIR);
            print "[PrepareFileToModify]copy $strDefaultMEMORYPath \nto $strFilePath\n";
            copy($strDefaultMEMORYPath, $strFilePath) or config_die("Copy Fail!");
            # chmod for read-only codebase
            chmod(0640, $strFilePath) if($^O eq "MSWin32");
        }
    }
    return $strFilePath;
}
sub ModifyMEMORY
{
    my ($strFilePath) = @_;
    &ldsFrame::CleanCallBackFunc();
    &ldsFrame::SetCallBackFunc("GetChip", \&GetChip);
    &ldsFrame::SetCallBackFunc("SetMemorySegment", \&SetMemorySegment);
    &ldsFrame::SetCallBackFunc("GetCustomFolder", \&GetCustomFolder);
    my $strContent = ldsFrame::GenMEMORY(ldsFrame::MAIN);
    CommonUtil::WriteFileContent($strFilePath, $strContent);
    print "Generate $strFilePath successfully!\n";
}
sub GetCustomFolder  #ldsFrame's callback func
{
    return $BUILD_FOLDER;
}
sub GetChip  # ldsFrame's callback func
{
    return $g_bb;
}

sub SetMemorySegment # ldsFrame's callback func
{
    my ($MEMORY_SEGMENT_aref) = @_;
    my $nIndex = 0;
    foreach my $i (@$MEMORY_SEGMENT_aref)
    {
        my $strName = $i->[0];
	my $strExpectedSize = undef;
	my $strExpectedBase = undef;
	my $index = GetSectionIndex($strName);
        if($index == -1)
	  {
	    $nIndex++;
	    next;
	  }
	
	$strExpectedSize = CommonUtil::Dec2Hex($g_MRT[$index]->{AdjSize});
        $strExpectedBase = CommonUtil::Dec2Hex($g_MRT[$index]->{AdjBase});

	if(( $g_bSupportedToAdjustRAMSize) and (defined $strExpectedSize))
	  {
	    $MEMORY_SEGMENT_aref->[$nIndex]->[2] = $strExpectedSize;
	  }
	if(($g_bSupportedToAdjustLoadView) and (defined $strExpectedBase))
	  {
	    $MEMORY_SEGMENT_aref->[$nIndex]->[1] = $strExpectedBase;
	  }

        $nIndex++;
    }
}

sub PrintLog
{
    my ($strContent) = @_;
    print $strContent;
    $g_strMsg .= $strContent;
}

sub IsEnabledAutoConfig
{
    my ($MK_PATH, $mk_option_href, $INFOMAKELOG, $CmplOption_href, $RelOption_href) = @_; 
    if(!&FileInfo::PreProcess($MK_PATH, $mk_option_href, $INFOMAKELOG, $CmplOption_href, $RelOption_href))
    {
        print "MakeFile/Infomake.log Parse Error: ERR_UNEXPECTED\n";
        exit ERR::ERR_UNEXPECTED;
    }
    my $bEnable = FileInfo::get(uc("ModemReservedSize_AutoConfig")) eq "TRUE" ? 1 : 0;
    $bEnable = 0 if(BuildInfo::exist(BuildOPT::CMPL, "__ESL_SPRAM_LOAD__"));
    $bEnable = 0 if(BuildInfo::exist(BuildOPT::CMPL, "__ESL_EMI_ONLY_LOAD__"));
    return $bEnable;
}

sub IsPrvLinkedPASS
{
    my ($INTERMEDIATE_FILE) = @_;
    my $strContent = CommonUtil::GetFileContent($INTERMEDIATE_FILE);
    return $strContent eq ""; # equal "" = PASS, having contents = FAIL
}

#****************************************************************************
# subroutine:  config_die
# sample code: (message, __FILE__, __LINE__)
# input:       $error_msg, $file, $line_no
#****************************************************************************
sub config_die
{
    my ($error_msg) = @_;
    my ($pack_name, $file, $line_no) = caller;
    &AUTO_ADJUST::error_handler($error_msg, $file, $line_no, 'ModemReservedSize_Config');
}
