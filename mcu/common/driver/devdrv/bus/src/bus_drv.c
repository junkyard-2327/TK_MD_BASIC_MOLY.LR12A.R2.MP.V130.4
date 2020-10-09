/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * -----------
 *   bus_drv.c
 *
 * Project:
 * -----------
 *   MOLY
 *
 * Description:
 * ------------
 *   Bus Related Driver Code
 *   (Refer to WR8's Bus Driver API Interface, But Not Include Prefetch Buffer API)
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 22 2017 shin-chieh.tsai
 * [MOLY00279927] [BIANCO][BUS]Update SMI BUS ESL Golden Setting
 * .
 *
 * 09 19 2017 shin-chieh.tsai
 * [MOLY00279036] [BIANCO][BUS]Fix the setting for Bank2/3 read/write-allocation
 * .
 *
 * 07 31 2017 shin-chieh.tsai
 * [MOLY00266925] [MT6763][Bus]Re-enable MDINFRA SMI configuration after Dormant recover flow
 * .
 *
 * 06 02 2017 shin-chieh.tsai
 * [MOLY00254437] [System Service][MOLY Kernel Internal Request] add debug information for bus protect staus
 * .
 *
 * 06 02 2017 shin-chieh.tsai
 * [MOLY00254437] [System Service][MOLY Kernel Internal Request] add debug information for bus protect staus
 * .
 *
 * 05 23 2017 shin-chieh.tsai
 * [MOLY00251583] [BIANCO][BUS][System Services] Reconfig bus configuration after leave dormant
 * .
 *
 * 04 13 2017 shin-chieh.tsai
 * [MOLY00241230] [BIANCO][BUS][System Service]User polling API in exception for AP-MD deadlock HW issue
 * .
 *
 * 04 13 2017 shin-chieh.tsai
 * [MOLY00241147] [BIANCO][BUS]Update related SMI setting
 * .
 *
 * 03 29 2017 shin-chieh.tsai
 * [MOLY00238338] [BIANCO][BUS]Update PWB setting
 * .
 *
 * 03 15 2017 shin-chieh.tsai
 * [MOLY00235556] [BIANCO][BUS][System Serivce]Mask MD2G DDR_EN control, workaround for MD2G dynamic control CG issue
 * .
 *
 * 02 21 2017 wellken.chen
 * [MOLY00231012] [System Service][Bus][BIANCO] Raise backdoor IDSPRAM to high priority
 *
 * 01 04 2017 wellken.chen
 * [MOLY00222815] [MT6293][Bus] Update bus driver
 *
 * 12 05 2016 wellken.chen
 * [MOLY00216827] [MT6293][Bus] Bus driver enable SPRAM init while BusDrv_PDDomain_Init()
 *
 * 12 01 2016 wellken.chen
 * [MOLY00216424] [Bus][System Service] Update bus driver, 1st step enable PWB
 *
 *
 *
 ****************************************************************************/
#include "bus_drv.h"
#include "reg_base.h"
#include "kal_public_api.h"

#include "intrCtrl.h"
#include "mips_ia_utils.h"
#include "sync_data.h"
#include "ex_mem_manager_public.h"
#include "ex_item.h"

#if 0
/* under construction !*/
/* under construction !*/
#endif
/*************************************************************************
 * Define HW register
 *************************************************************************/

#define MCU_BUS_CONFIG0			(volatile kal_uint32 *)(BASE_MADDR_MDMCU_BUS_CONFIG + 0x0000)
#define MCU_BUS_CONFIG5			(volatile kal_uint32 *)(BASE_MADDR_MDMCU_BUS_CONFIG + 0x0018)
#define MCU_BUS_CONFIG6			(volatile kal_uint32 *)(BASE_MADDR_MDMCU_BUS_CONFIG + 0x001C)
#define MCU_BUS_CONFIG7			(volatile kal_uint32 *)(BASE_MADDR_MDMCU_BUS_CONFIG + 0x0020)

#define MCU_CBUS_CONFIG5		(volatile kal_uint32 *)(BASE_MADDR_AP_EMI_CONFIG + 0x7c0)
#define MCU_CBUS_CONFIG6		(volatile kal_uint32 *)(BASE_MADDR_AP_EMI_CONFIG + 0x7c4)

#define IA_CORE_DUMMY_OUT0		(volatile kal_uint32 *)(BASE_MADDR_MDMCU_MDCORESYS_MISC_REG_ADR_IF + 0x0014)	
#define IA_CORE_DUMMY_OUT1		(volatile kal_uint32 *)(BASE_MADDR_MDMCU_MDCORESYS_MISC_REG_ADR_IF + 0x0018)

#define MDINFRABUS_BASE			(BASE_MADDR_MDINFRA_MDSMICFG)

#define MDSYS_DDR_PHY_CTL     	(volatile kal_uint32 *)(BASE_MADDR_MDPERI_MDPERISYS_MISC_REG + 0x404)

#define AP2MD_DUMMY				(volatile kal_uint32 *)(BASE_MADDR_MDPERI_MDPERISYS_MISC_REG + 0x300)

/*******************************************************************************
 * Locally Used Macro Function
 *******************************************************************************/
typedef struct _BUSDRV_INFO {
    kal_uint32      mm_1x4_decErr_addr;
    kal_uint32      mcu2md_1x6_decErr_addr;
    kal_uint32      usip2l1bus_decErr_addr;
    kal_uint32      mdinfra_decErr_addr;
    kal_uint32      spram_1x3_decErr_addr;
    kal_uint32      mcu_bus_status11;
    kal_uint32      mcu_bus_status13;
    kal_uint32      mcu_bus_status14;
	kal_uint32		mcu_cbus_config5;
  kal_uint32		mcu_cbus_config6;
} BUSDRV_INFO;

typedef struct _BUSDRV_EMM {
    kal_uint32      caller;
    kal_uint32      time;
    kal_uint16      vpe;
    bus_APMDaccess  status;
} BUSDRV_EMM;

typedef enum {
	BUS_PWB_ENTRY_32 = 0x1F,
} BUS_PWB_ENTRY;


BUSDRV_INFO busInfo = {0};

kal_uint32 u32MCUPeri_BusErrAddr = 0;
kal_uint32 u32MCUPeri_BusErrInfo = 0;
kal_uint32 bus_dbg_ptr;
kal_uint32 bus_dbg_ptr_size;
kal_uint32 bus_dbg_max_count;
kal_atomic_uint32 bus_dbg_index;
kal_atomic_int32 bus_emm_atomic;
__attribute__ ((zero_init, section ("NONCACHEDZI")))
volatile kal_uint32 stall_var;

#ifdef __MTK_TARGET__ /* should NOT be compiled on MODIS */
kal_bool BusDrv_Enable_PWB(kal_uint8 enable, kal_uint32 entry)
{
	//=================================================	
	//PWB default is disable, and the entry maximum is 32entry
	//Bus driver init should enable PWB and config it to 32entry, 0x11111 = 32entry
	//=================================================	
	if (enable)
	{
		*MCU_BUS_CONFIG0 |= (0x20000 | (entry << 22));
	}
	else
	{
		*MCU_BUS_CONFIG0 &= ~(0x20000);
	}
	return KAL_TRUE;
}

kal_bool BusDrv_Set_MDL1SysBus_SMI(void)
{
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
#endif
	return KAL_TRUE;
}

kal_bool BusDrv_Set_MDInfraBus_SMI(void)
{
	//LVL1 BW limiter
	kal_uint32 smi_value;
	smi_value = *(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x100);
  //[13]	write throttle enable
	//[12:5]	write throttle threshold, sum of axlen > threshold
  smi_value = smi_value &~((0x1 << 13) + (0x18 << 5)); //clear
  smi_value = smi_value|((0x1 << 13) + (0x18 << 5)); //set
	*(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x100) = smi_value;
	
  //larb0 9x1 mi BW limiter
	*(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x104) = (0x0 <<26) +	//reg_smi_ostd_r_soft_en_larb0: select ostd soft control for read channel
													(0x0	<< 25) +	//reg_smi_ostd_w_soft_en_larb0: select ostd soft control for write channel	
													(0x1	<< 24) +	//reg_smi_ostd_ctrl_en_en_larb0: enable outstanding control
													(0x4	<< 19) +	//reg_smi_ostd_w_max_larb0: 20W
													(0x3	<< 14) +	//reg_smi_ostd_r_max_larb0: 20R
													(0x0	<< 13) +	//reg_smi_hfilter_en_larb0: select soft limiter mode
													(0x1	<< 12) +	//reg_smi_bw_filter_en_larb0: enable bw limiter
													(0x2C4);			//reg_smi_filter_max_gnt_larb0: max BW R=100M, W=150M

	//larb1 Bram BW limiter
	*(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x108) = (0x0 <<26) +	//reg_smi_ostd_r_soft_en_larb1: select ostd soft control for read channel
													(0x0	<< 25) +	//reg_smi_ostd_w_soft_en_larb1: select ostd soft control for write channel	
													(0x1	<< 24) +	//reg_smi_ostd_ctrl_en_en_larb1: enable outstanding control
													(0x6	<< 19) +	//reg_smi_ostd_w_max_larb1: 16W
													(0x4	<< 14) +	//reg_smi_ostd_r_max_larb1: 8R
													(0x0	<< 13) +	//reg_smi_hfilter_en_larb1: select soft limiter mode
													(0x1	<< 12) +	//reg_smi_bw_filter_en_larb1: enable bw limiter
													(0x203);			//reg_smi_filter_max_gnt_larb1: max BW R=80M, W=250M
		
	//larb2 rxbrp BW limiter
	*(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x10C) = (0x0 <<26) +	//reg_smi_ostd_r_soft_en_larb2: select ostd soft control for read channel
													(0x0	<< 25) +	//reg_smi_ostd_w_soft_en_larb2: select ostd soft control for write channel	
													(0x1	<< 24) +	//reg_smi_ostd_ctrl_en_en_larb2: enable outstanding control
													(0x4	<< 19) +	//reg_smi_ostd_w_max_larb2: 16W
													(0x3	<< 14) +	//reg_smi_ostd_r_max_larb2: 16R
													(0x0	<< 13) +	//reg_smi_hfilter_en_larb2: select soft limiter mode
													(0x1	<< 12) +	//reg_smi_bw_filter_en_larb2: enable bw limiter
													(0x07c);			//reg_smi_filter_max_gnt_larb2: max BW R=228M, W=186M
	
	//larb3 MML2 BW limiter
	*(volatile kal_uint32 *)(MDINFRABUS_BASE + 0x110) = (0x0 <<26) +	//reg_smi_ostd_r_soft_en_larb3: select ostd soft control for read channel
													(0x0	<< 25) +	//reg_smi_ostd_w_soft_en_larb3: select ostd soft control for write channel	
													(0x1	<< 24) +	//reg_smi_ostd_ctrl_en_en_larb3: enable outstanding control
													(0x2	<< 19) +	//reg_smi_ostd_w_max_larb3: 16W
													(0x4	<< 14) +	//reg_smi_ostd_r_max_larb3: 16R
													(0x0	<< 13) +	//reg_smi_hfilter_en_larb3: select soft limiter mode
													(0x1	<< 12) +	//reg_smi_bw_filter_en_larb3: enable bw limiter
													(0x203);			//reg_smi_filter_max_gnt_larb3: max BW R=200M, W=100M

	return KAL_TRUE;
}


kal_bool BusDrv_Set_MEMInfraBus_SMI(void)
{
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
#endif
	return KAL_TRUE;
}

kal_bool BusDrv_Set_MDMCU_BUS_INTF(void)
{
	//EMI Bank premask setting
	if(!((busInfo.mcu_cbus_config5==0)&&(busInfo.mcu_cbus_config6==0)))
	{
		*MCU_BUS_CONFIG5 = busInfo.mcu_cbus_config5;
		*MCU_BUS_CONFIG6 = busInfo.mcu_cbus_config6;
	}
	*MCU_BUS_CONFIG7 = 0xA1;
	return KAL_TRUE;
}


kal_bool BusDrv_Set_Bank23Allocation(void)
{
	//set bank2 = non-read allocation + non-write allocation bit[15][13]
	//set bank3 = read allocation + write allocation bit[16][14]
	*MCU_BUS_CONFIG7 &= ~(0xA000);
	*MCU_BUS_CONFIG7 |= 0x14000;
	return KAL_TRUE;
}

kal_bool BusDrv_Set_MDSYS_DDR_PHY_CTR_ddr_on(void)
{
	//mask MD2G DDR_EN control, workaround for MD2G dynamic control CG issue
	*MDSYS_DDR_PHY_CTL &= ~((0x1  << 31));  //set bit[31] as 0. md_ddr_clock_ena SW configure bit
	//set bit[11:0] as 1, except bit[4]
	*MDSYS_DDR_PHY_CTL |= (0xFEF);
	*MDSYS_DDR_PHY_CTL &= ~((0x1  << 4));   //bit[4] md2g_ddr_clock_ena mask, 0:mask/1:unmask
	return KAL_TRUE;
}

bus_APMDaccess BusDrv_GetAP2MDStatus(void)
{	
	volatile kal_uint32 check_bit = 0xff;
	bus_APMDaccess return_val = MD_Not_Allow;
	kal_uint32 ret_addr;
	BUSDRV_EMM *bus_dbg_strut_ptr;
	BUSDRV_EMM *bus_dbg_strut_pre_ptr;
	kal_uint32 bus_dbg_index_local;

	GET_RETURN_ADDRESS(ret_addr);
	if(0 == bus_dbg_ptr_size)
	{
		EMM_DirInfo_Query(EMM_DIRECT_WRITE_BUS, &bus_dbg_ptr, &bus_dbg_ptr_size);
		bus_dbg_max_count = bus_dbg_ptr_size/sizeof(BUSDRV_EMM);
	}
	
	check_bit = ((*AP2MD_DUMMY) & (1<<(0)));
	
	if(check_bit==1) //AP cannot access MD
	{
		return_val = MD_Allow_Access;  
	}
	else  //AP access MD
	{
		return_val = MD_Not_Allow; 
	}
	
	if(bus_dbg_max_count && (0!=sst_get_exception_count()))
	{
        bus_dbg_strut_ptr = (BUSDRV_EMM *)bus_dbg_ptr;
        while(0 != kal_atomic_compare_and_swap_return(&bus_emm_atomic, 0, 1))
        {
            bus_dbg_index_local = stall_var;
        }
        bus_dbg_index_local = kal_atomic_read(&bus_dbg_index);
        if(bus_dbg_index_local == 0)
        {
            kal_atomic_inc(&bus_dbg_index);
            bus_dbg_strut_ptr->caller = ret_addr;
            bus_dbg_strut_ptr->status = return_val;
            bus_dbg_strut_ptr->time = ust_get_current_time();
            bus_dbg_strut_ptr->vpe = (kal_uint16)kal_get_current_vpe_id();
        }
        else
        {
            bus_dbg_strut_pre_ptr = bus_dbg_strut_ptr + ((bus_dbg_index_local-1)%bus_dbg_max_count);
            if((bus_dbg_strut_pre_ptr->status != return_val)) //|| (bus_dbg_strut_pre_ptr->caller != ret_addr))
            {
                kal_atomic_inc(&bus_dbg_index);
                bus_dbg_strut_ptr = bus_dbg_strut_ptr + (bus_dbg_index_local%bus_dbg_max_count);
                bus_dbg_strut_ptr->caller = ret_addr;
                bus_dbg_strut_ptr->status = return_val;
                bus_dbg_strut_ptr->time = ust_get_current_time();
                bus_dbg_strut_ptr->vpe = (kal_uint16)kal_get_current_vpe_id();
            }
        }
        kal_atomic_compare_and_swap_return(&bus_emm_atomic, 1, 0);
	}
	return return_val;
}

kal_bool BusDrv_ESL_MDHW_Bus_Setting(void)
{
	//re-init SMI setting
	BusDrv_Set_MDInfraBus_SMI();
	//BusDrv_Set_MDL1SysBus_SMI();
	//BusDrv_Set_MEMInfraBus_SMI();
	
	//mdmcu bus emi bank premask(for latency improve)
	BusDrv_Set_MDMCU_BUS_INTF();
	
  return KAL_TRUE;
}
kal_bool BusDrv_PDDomain_Init(void)
{
	//re-init PWB
	BusDrv_Enable_PWB(1, BUS_PWB_ENTRY_32);

	//reinit SPRAM backdoor
	_miu_gcr_init_spram_backdor();

	//enable backdoor access high priority
	BusDrv_Enable_BackdoorHighPri(KAL_TRUE);
	
	// ELM initialize
	//ELM_INIT();

	//ESL Bus setting
	BusDrv_ESL_MDHW_Bus_Setting();

	//set bank2 & bank3 allocation policy
	BusDrv_Set_Bank23Allocation();
	
	//enable l2 interface, for L2-copro request
	//BusDrv_Enable_L2Interface(KAL_TRUE);

	//enable ISPRAM write function
	//BusDrv_Enable_IDSPAMWrite(KAL_FALSE);

	MO_Sync();
	
	return KAL_TRUE;
}


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
#endif


void BusDrv_DecErr_MCUBusErr(void)
{
	return;
}

void BusDrv_DecErr_MDInfraBusErr(void)
{
	return;
}

kal_bool BusDrv_Enable_MCU2Backdoor(kal_bool enable)
{
    return KAL_TRUE;
}

kal_bool BusDrv_Enable_BusDecErr(kal_bool enable)
{
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
#endif
    return KAL_TRUE;
}



kal_bool BusDrv_Init(void)
{
  kal_uint32 vpe_id = 0;
 
	vpe_id = kal_get_current_vpe_id();

	if (vpe_id == 0)
	{	
	    //reset bus driver info
	    kal_mem_set(&busInfo, 0, sizeof(BUSDRV_INFO));

		//Read EMI setting
		busInfo.mcu_cbus_config5 = *(volatile kal_uint32 *)(MCU_CBUS_CONFIG5); 
		busInfo.mcu_cbus_config6 = *(volatile kal_uint32 *)(MCU_CBUS_CONFIG6); 

  		//initial smi related setting
  		BusDrv_PDDomain_Init();

		//mask MD2G DDR_EN control, workaround for MD2G dynamic control CG issue, 93 would set by MD topsm team: Guo-Huei
		//BusDrv_Set_MDSYS_DDR_PHY_CTR_ddr_on();
      
		//get all bus setting APB completion
		MO_Sync();

		//enable bus decode error function
		//BusDrv_Enable_BusDecErr(1);
		
		//disable mcu2backdoor
		//BusDrv_Enable_MCU2Backdoor(0);
	}

    return KAL_TRUE;
}

kal_bool BusDrv_Config_DormantEnter(void)
{
    return KAL_TRUE;
}

kal_bool BusDrv_Config_DormantLeave(void)
{
  
    kal_uint32 vpe_id = 0;
    vpe_id = kal_get_current_vpe_id();
  	
    if(vpe_id == 0)
    {
      //initial smi related setting
  	  BusDrv_PDDomain_Init();
    }
    return KAL_TRUE;
}

kal_bool BusDrv_Enable_BackdoorHighPri(kal_bool enable)
{
	if (enable)
	{
		*IA_CORE_DUMMY_OUT0 |= 0x300;
		*IA_CORE_DUMMY_OUT1 |= 0x300;
	}
	else
	{
		*IA_CORE_DUMMY_OUT0 &= ~(0x300);
		*IA_CORE_DUMMY_OUT1 &= ~(0x300);

	}
    return KAL_TRUE;
}


kal_bool BusDrv_GetDumpInfo(void **ppstart, kal_uint32 *pu32Len)
{
    *ppstart = (void*)(&busInfo);
    *pu32Len = sizeof(BUSDRV_INFO);
    return KAL_TRUE;
}

#endif /* should NOT be compiled on MODIS */
