


/**
@file	LMS8001_parameters.cpp
@author Lime Microsystems (www.limemicro.com)
@brief 	Definition of LMS8001 transceiver control parameters registers
*/

#include "../lime/LMS8001_parameters.h"

//std::vector<const LMS8Parameter*> LMS8parameterList;
std::vector<const LMS8Parameter*> LMS8parameterList = 
{
& SPI_SDIO_DS,
& SPI_SDO_DS,
& SPI_SDIO_PE,
& SPI_SDO_PE,
& SPI_SCLK_PE,
& SPI_SEN_PE,
& SPIMODE,
& GPIO_OUT_SPI,
& GPIO_OUT_SPI_0,
& GPIO_OUT_SPI_1,
& GPIO_OUT_SPI_2,
& GPIO_OUT_SPI_3,
& GPIO_OUT_SPI_4,
& GPIO_OUT_SPI_5,
& GPIO_OUT_SPI_6,
& GPIO_OUT_SPI_7,
& GPIO_OUT_SPI_8,
& GPIO0_SEL,
& GPIO1_SEL,
& GPIO2_SEL,
& GPIO3_SEL,
& GPIO4_SEL,
& GPIO5_SEL,
& GPIO6_SEL,
& GPIO7_SEL,
& GPIO8_SEL,
& GPIO_IN,
& GPIO_IN_0,
& GPIO_IN_1,
& GPIO_IN_2,
& GPIO_IN_3,
& GPIO_IN_4,
& GPIO_IN_5,
& GPIO_IN_6,
& GPIO_IN_7,
& GPIO_IN_8,
& GPIO_PE,
& GPIO_PE_0,
& GPIO_PE_1,
& GPIO_PE_2,
& GPIO_PE_3,
& GPIO_PE_4,
& GPIO_PE_5,
& GPIO_PE_6,
& GPIO_PE_7,
& GPIO_PE_8,
& GPIO_DS,
& GPIO_DS_0,
& GPIO_DS_1,
& GPIO_DS_2,
& GPIO_DS_3,
& GPIO_DS_4,
& GPIO_DS_5,
& GPIO_DS_6,
& GPIO_DS_7,
& GPIO_DS_8,
& GPIO_InO,
& GPIO_InO_0,
& GPIO_InO_1,
& GPIO_InO_2,
& GPIO_InO_3,
& GPIO_InO_4,
& GPIO_InO_5,
& GPIO_InO_6,
& GPIO_InO_7,
& GPIO_InO_8,
& TEMP_SENS_EN,
& TEMP_SENS_CLKEN,
& TEMP_START_CONV,
& TEMP_READ,
& VER,
& REV,
& MASK,
& PD_CALIB_COMP,
& RP_CALIB_COMP,
& RP_CALIB_BIAS,
& PD_FRP_BIAS,
& PD_F_BIAS,
& PD_PTRP_BIAS,
& PD_PT_BIAS,
& PD_BIAS,

& EN_LDO_LOBUFA,
& EN_LDO_LOBUFB,
& EN_LDO_LOBUFC,
& EN_LDO_LOBUFD,

& EN_LDO_HFLNAA,
& EN_LDO_HFLNAB,
& EN_LDO_HFLNAC,
& EN_LDO_HFLNAD,

& EN_LDO_CLK_BUF,
& EN_LDO_PLL_DIV,
& EN_LDO_PLL_CP,
& PD_LDO_DIG_CORE,

& SPDUP_LDO_LOBUFA,
& SPDUP_LDO_LOBUFB,
& SPDUP_LDO_LOBUFC,
& SPDUP_LDO_LOBUFD,

& SPDUP_LDO_HFLNAA,
& SPDUP_LDO_HFLNAB,
& SPDUP_LDO_HFLNAC,
& SPDUP_LDO_HFLNAD,

& SPDUP_LDO_CLK_BUF,
& SPDUP_LDO_PLL_DIV,
& SPDUP_LDO_PLL_CP,
& SPDUP_LDO_DIG_CORE,

& EN_LOADIMP_LDO_LOBUFA,
& EN_LOADIMP_LDO_LOBUFB,
& EN_LOADIMP_LDO_LOBUFC,
& EN_LOADIMP_LDO_LOBUFD,

& EN_LOADIMP_LDO_HFLNAA,
& EN_LOADIMP_LDO_HFLNAB,
& EN_LOADIMP_LDO_HFLNAC,
& EN_LOADIMP_LDO_HFLNAD,

& EN_LOADIMP_LDO_CLK_BUF,
& EN_LOADIMP_LDO_PLL_DIV,
& EN_LOADIMP_LDO_PLL_CP,
& EN_LOADIMP_LDO_DIG_CORE,

& RDIV_LOBUFA,
& RDIV_LOBUFB,
& RDIV_LOBUFC,
& RDIV_LOBUFD,

& RDIV_HFLNAA,
& RDIV_HFLNAB,
& RDIV_HFLNAC,
& RDIV_HFLNAD,

& RDIV_CLK_BUF,
& RDIV_PLL_DIV,
& RDIV_PLL_CP,
& RDIV_DIG_CORE,

& CHx_MIXB_ICT,
& CHx_MIXA_ICT,

& CHx_PA_ILIN2X,
& CHx_PA_ICT_LIN,
& CHx_PA_ICT_MAIN,

& CHx_PA_R50_EN0,
& CHx_PA_BYPASS0,
& CHx_PA_PD0,
& CHx_MIXB_LOBUFF_PD0,
& CHx_MIXB_BIAS_PD0,
& CHx_MIXA_LOBUFF_PD0,
& CHx_MIXA_BIAS_PD0,
& CHx_LNA_PD0,

& CHx_LNA_ICT_LIN0,
& CHx_LNA_ICT_MAIN0,
& CHx_LNA_CGSCTRL0,
& CHx_LNA_GCTRL0,

& CHx_PA_LIN_LOSS0,
& CHx_PA_MAIN_LOSS0,

& CHx_PA_R50_EN1,
& CHx_PA_BYPASS1,
& CHx_PA_PD1,
& CHx_MIXB_LOBUFF_PD1,
& CHx_MIXB_BIAS_PD1,
& CHx_MIXA_LOBUFF_PD1,
& CHx_MIXA_BIAS_PD1,
& CHx_LNA_PD1,

& CHx_LNA_ICT_LIN1,
& CHx_LNA_ICT_MAIN1,
& CHx_LNA_CGSCTRL1,
& CHx_LNA_GCTRL1,

& CHx_PA_LIN_LOSS1,
& CHx_PA_MAIN_LOSS1,

& CHx_PA_R50_EN2,
& CHx_PA_BYPASS2,
& CHx_PA_PD2,
& CHx_MIXB_LOBUFF_PD2,
& CHx_MIXB_BIAS_PD2,
& CHx_MIXA_LOBUFF_PD2,
& CHx_MIXA_BIAS_PD2,
& CHx_LNA_PD2,

& CHx_LNA_ICT_LIN2,
& CHx_LNA_ICT_MAIN2,
& CHx_LNA_CGSCTRL2,
& CHx_LNA_GCTRL2,

& CHx_PA_LIN_LOSS2,
& CHx_PA_MAIN_LOSS2,

& CHx_PA_R50_EN3,
& CHx_PA_BYPASS3,
& CHx_PA_PD3,
& CHx_MIXB_LOBUFF_PD3,
& CHx_MIXB_BIAS_PD3,
& CHx_MIXA_LOBUFF_PD3,
& CHx_MIXA_BIAS_PD3,
& CHx_LNA_PD3,

& CHx_LNA_ICT_LIN3,
& CHx_LNA_ICT_MAIN3,
& CHx_LNA_CGSCTRL3,
& CHx_LNA_GCTRL3,

& CHx_PA_LIN_LOSS3,
& CHx_PA_MAIN_LOSS3,

& CHx_PA_R50_EN_RB,
& CHx_PA_BYPASS_RB,
& CHx_PA_PD_RB,
& CHx_MIXB_LOBUFF_PD_RB,
& CHx_MIXB_BIAS_PD_RB,
& CHx_MIXA_LOBUFF_PD_RB,
& CHx_MIXA_BIAS_PD_RB,
& CHx_LNA_PD_RB,

& CHx_LNA_ICT_LIN_RB,
& CHx_LNA_ICT_MAIN_RB,
& CHx_LNA_CGSCTRL_RB,
& CHx_LNA_GCTRL_RB,

& CHx_PA_LIN_LOSS_RB,
& CHx_PA_MAIN_LOSS_RB,

& CHx_PD_SEL0_INTERNAL,
& CHx_PD_SEL0_INVERT,
& CHx_PD_SEL0_MASK0,
& CHx_PD_SEL0_MASK1,
& CHx_PD_SEL0_MASK2,
& CHx_PD_SEL0_MASK3,
& CHx_PD_SEL0_MASK4,
& CHx_PD_SEL0_MASK5,
& CHx_PD_SEL0_MASK6,
& CHx_PD_SEL0_MASK7,
& CHx_PD_SEL0_MASK8,

& CHx_PD_SEL1_INTERNAL,
& CHx_PD_SEL1_INVERT,
& CHx_PD_SEL1_MASK0,
& CHx_PD_SEL1_MASK1,
& CHx_PD_SEL1_MASK2,
& CHx_PD_SEL1_MASK3,
& CHx_PD_SEL1_MASK4,
& CHx_PD_SEL1_MASK5,
& CHx_PD_SEL1_MASK6,
& CHx_PD_SEL1_MASK7,
& CHx_PD_SEL1_MASK8,

& CHx_LNA_SEL0_INTERNAL,
& CHx_LNA_SEL0_INVERT,
& CHx_LNA_SEL0_MASK0,
& CHx_LNA_SEL0_MASK1,
& CHx_LNA_SEL0_MASK2,
& CHx_LNA_SEL0_MASK3,
& CHx_LNA_SEL0_MASK4,
& CHx_LNA_SEL0_MASK5,
& CHx_LNA_SEL0_MASK6,
& CHx_LNA_SEL0_MASK7,
& CHx_LNA_SEL0_MASK8,

& CHx_LNA_SEL1_INTERNAL,
& CHx_LNA_SEL1_INVERT,
& CHx_LNA_SEL1_MASK0,
& CHx_LNA_SEL1_MASK1,
& CHx_LNA_SEL1_MASK2,
& CHx_LNA_SEL1_MASK3,
& CHx_LNA_SEL1_MASK4,
& CHx_LNA_SEL1_MASK5,
& CHx_LNA_SEL1_MASK6,
& CHx_LNA_SEL1_MASK7,
& CHx_LNA_SEL1_MASK8,

& CHx_PA_SEL0_INTERNAL,
& CHx_PA_SEL0_INVERT,
& CHx_PA_SEL0_MASK0,
& CHx_PA_SEL0_MASK1,
& CHx_PA_SEL0_MASK2,
& CHx_PA_SEL0_MASK3,
& CHx_PA_SEL0_MASK4,
& CHx_PA_SEL0_MASK5,
& CHx_PA_SEL0_MASK6,
& CHx_PA_SEL0_MASK7,
& CHx_PA_SEL0_MASK8,

& CHx_PA_SEL1_INTERNAL,
& CHx_PA_SEL1_INVERT,
& CHx_PA_SEL1_MASK0,
& CHx_PA_SEL1_MASK1,
& CHx_PA_SEL1_MASK2,
& CHx_PA_SEL1_MASK3,
& CHx_PA_SEL1_MASK4,
& CHx_PA_SEL1_MASK5,
& CHx_PA_SEL1_MASK6,
& CHx_PA_SEL1_MASK7,
& CHx_PA_SEL1_MASK8,

& CHx_PD_INT_SEL0,
& CHx_PD_INT_SEL1,

& CHx_LNA_INT_SEL0,
& CHx_LNA_INT_SEL1,

& CHx_PA_INT_SEL0,
& CHx_PA_INT_SEL1,

& HLMIXx_VGCAS0,
& HLMIXx_ICT_BIAS0,
& HLMIXx_BIAS_PD0,
& HLMIXx_LOBUF_PD0,
& HLMIXx_MIXLOSS0,

& HLMIXx_VGCAS1,
& HLMIXx_ICT_BIAS1,
& HLMIXx_BIAS_PD1,
& HLMIXx_LOBUF_PD1,
& HLMIXx_MIXLOSS1,

& HLMIXx_VGCAS2,
& HLMIXx_ICT_BIAS2,
& HLMIXx_BIAS_PD2,
& HLMIXx_LOBUF_PD2,
& HLMIXx_MIXLOSS2,

& HLMIXx_VGCAS3,
& HLMIXx_ICT_BIAS3,
& HLMIXx_BIAS_PD3,
& HLMIXx_LOBUF_PD3,
& HLMIXx_MIXLOSS3,

& HLMIXx_VGCAS_RB,
& HLMIXx_ICT_BIAS_RB,
& HLMIXx_BIAS_PD_RB,
& HLMIXx_LOBUF_PD_RB,
& HLMIXx_MIXLOSS_RB,

& HLMIXx_CONFIG_SEL0_INTERNAL,
& HLMIXx_CONFIG_SEL0_INVERT,
& HLMIXx_CONFIG_SEL0_MASK0,
& HLMIXx_CONFIG_SEL0_MASK1,
& HLMIXx_CONFIG_SEL0_MASK2,
& HLMIXx_CONFIG_SEL0_MASK3,
& HLMIXx_CONFIG_SEL0_MASK4,
& HLMIXx_CONFIG_SEL0_MASK5,
& HLMIXx_CONFIG_SEL0_MASK6,
& HLMIXx_CONFIG_SEL0_MASK7,
& HLMIXx_CONFIG_SEL0_MASK8,

& HLMIXx_CONFIG_SEL1_INTERNAL,
& HLMIXx_CONFIG_SEL1_INVERT,
& HLMIXx_CONFIG_SEL1_MASK0,
& HLMIXx_CONFIG_SEL1_MASK1,
& HLMIXx_CONFIG_SEL1_MASK2,
& HLMIXx_CONFIG_SEL1_MASK3,
& HLMIXx_CONFIG_SEL1_MASK4,
& HLMIXx_CONFIG_SEL1_MASK5,
& HLMIXx_CONFIG_SEL1_MASK6,
& HLMIXx_CONFIG_SEL1_MASK7,
& HLMIXx_CONFIG_SEL1_MASK8,

& HLMIXx_CONFIG_INT_SEL0,
& HLMIXx_CONFIG_INT_SEL1,

& HLMIXx_LOSS_SEL0_INTERNAL,
& HLMIXx_LOSS_SEL0_INVERT,
& HLMIXx_LOSS_SEL0_MASK0,
& HLMIXx_LOSS_SEL0_MASK1,
& HLMIXx_LOSS_SEL0_MASK2,
& HLMIXx_LOSS_SEL0_MASK3,
& HLMIXx_LOSS_SEL0_MASK4,
& HLMIXx_LOSS_SEL0_MASK5,
& HLMIXx_LOSS_SEL0_MASK6,
& HLMIXx_LOSS_SEL0_MASK7,
& HLMIXx_LOSS_SEL0_MASK8,

& HLMIXx_LOSS_SEL1_INTERNAL,
& HLMIXx_LOSS_SEL1_INVERT,
& HLMIXx_LOSS_SEL1_MASK0,
& HLMIXx_LOSS_SEL1_MASK1,
& HLMIXx_LOSS_SEL1_MASK2,
& HLMIXx_LOSS_SEL1_MASK3,
& HLMIXx_LOSS_SEL1_MASK4,
& HLMIXx_LOSS_SEL1_MASK5,
& HLMIXx_LOSS_SEL1_MASK6,
& HLMIXx_LOSS_SEL1_MASK7,
& HLMIXx_LOSS_SEL1_MASK8,

& HLMIXx_LOSS_INT_SEL0,
& HLMIXx_LOSS_INT_SEL1,

& EN_VCOBIAS,
& BYP_VCOREG,
& CURLIM_VCOREG,
& SPDUP_VCOREG,
& VDIV_VCOREG,

& PLL_XBUF_SLFBEN,
& PLL_XBUF_BYPEN,
& PLL_XBUF_EN,

& FCAL_START,
& VCO_SEL_FINAL_VAL,
& VCO_SEL_FINAL,
& FREQ_FINAL_VAL,
& FREQ_FINAL,
& VCO_SEL_FORCE,
& VCO_SEL_INIT,
& FREQ_INIT_POS,
& FREQ_INIT,
& FREQ_SETTLING_N,
& VTUNE_WAIT_N,
& VCO_SEL_FREQ_MAX,
& VCO_SEL_FREQ_MIN,

& VCO_FREQ_MAN,
& VCO_SEL_MAN,
& FREQ_HIGH,
& FREQ_EQUAL,
& FREQ_LOW,
& CTUNE_STEP_DONE,
& CTUNE_START,
& CTUNE_EN,

& PLL_CFG_SEL0_INTERNAL,
& PLL_CFG_SEL0_INVERT,
& PLL_CFG_SEL0_MASK0,
& PLL_CFG_SEL0_MASK1,
& PLL_CFG_SEL0_MASK2,
& PLL_CFG_SEL0_MASK3,
& PLL_CFG_SEL0_MASK4,
& PLL_CFG_SEL0_MASK5,
& PLL_CFG_SEL0_MASK6,
& PLL_CFG_SEL0_MASK7,
& PLL_CFG_SEL0_MASK8,

& PLL_CFG_SEL0,

& PLL_CFG_SEL1_INTERNAL,
& PLL_CFG_SEL1_INVERT,
& PLL_CFG_SEL1_MASK0,
& PLL_CFG_SEL1_MASK1,
& PLL_CFG_SEL1_MASK2,
& PLL_CFG_SEL1_MASK3,
& PLL_CFG_SEL1_MASK4,
& PLL_CFG_SEL1_MASK5,
& PLL_CFG_SEL1_MASK6,
& PLL_CFG_SEL1_MASK7,
& PLL_CFG_SEL1_MASK8,

& PLL_CFG_SEL1,

& PLL_CFG_SEL2_INTERNAL,
& PLL_CFG_SEL2_INVERT,
& PLL_CFG_SEL2_MASK0,
& PLL_CFG_SEL2_MASK1,
& PLL_CFG_SEL2_MASK2,
& PLL_CFG_SEL2_MASK3,
& PLL_CFG_SEL2_MASK4,
& PLL_CFG_SEL2_MASK5,
& PLL_CFG_SEL2_MASK6,
& PLL_CFG_SEL2_MASK7,
& PLL_CFG_SEL2_MASK8,

& PLL_CFG_SEL2,

& PLL_CFG_INT_SEL0,
& PLL_CFG_INT_SEL1,
& PLL_CFG_INT_SEL2,

& PLL_CFG_INT_SEL,

& PLL_RSTN,
& CTUNE_RES,
& PLL_CALIBRATION_MODE,
& PLL_CALIBRATION_EN,
& PLL_FLOCK_INTERNAL,
& PLL_FLOCK_INTVAL,

& VTUNE_HIGH,
& VTUNE_LOW,
& PLL_LOCK,

& SEL_BIAS_CORE,
& PLL_LODIST_ICT_CORE,
& PLL_LODIST_ICT_BUF,

& PLL_ICT_OUT0,
& PLL_ICT_OUT1,
& PLL_ICT_OUT2,
& PLL_ICT_OUT3,

& BSIGL,
& BSTATE,
& EN_SDM_TSTO,
& BEN,
& BSTART,

& BSIGH,

& PLL_LODIST_EN_BIAS_n,
& PLL_LODIST_EN_DIV2IQ_n,
& PLL_EN_VTUNE_COMP_n,
& PLL_EN_LD_n,
& PLL_EN_PFD_n,
& PLL_EN_CP_n,
& PLL_EN_CPOFS_n,
& PLL_EN_VCO_n,
& PLL_EN_FFDIV_n,
& PLL_EN_FB_PDIV2_n,
& PLL_EN_FFCORE_n,
& PLL_EN_FBDIV_n,
& PLL_SDM_CLK_EN_n,

& R3_n,
& R2_n,
& C2_n,
& C1_n,
& VTUNE_VCT_n,
& LPFSW_n,
& C3_n,

& FLIP_n,
& DEL_n,
& PULSE_n,
& OFS_n,
& LD_VCT_n,
& ICT_CP_n,

& VCO_FREQ_n,
& SPDUP_VCO_n,
& VCO_AAC_EN_n,
& VDIV_SWVDD_n,
& VCO_SEL_n,
& VCO_AMP_n,

& FFDIV_SEL_n,
& FFCORE_MOD_n,
& FF_MOD_n,
& INTMOD_EN_n,
& DITHER_EN_n,
& SEL_SDMCLK_n,
& REV_SDMCLK_n,
& INTMOD_n,
& FRACMODL_n,
& FRACMODH_n,

& PLL_LODIST_EN_OUT_n,
& PLL_LODIST_FSP_OUT3_n,
& PLL_LODIST_FSP_OUT2_n,
& PLL_LODIST_FSP_OUT1_n,
& PLL_LODIST_FSP_OUT0_n,
& FLOCK_R3_n,
& FLOCK_R2_n,
& FLOCK_C2_n,
& FLOCK_C1_n,
& FLOCK_C3_n,
& FLOCK_PULSE_n,
& FLOCK_OFS_n,
& FLOCK_LODIST_EN_OUT_n,
& FLOCK_VCO_SPDUP_n,
& FLOCK_N_n,

& FLOCK_LODIST_EN_OUT0_n,
& FLOCK_LODIST_EN_OUT1_n,
& FLOCK_LODIST_EN_OUT2_n,
& FLOCK_LODIST_EN_OUT3_n,

& PLL_LODIST_EN_OUT0_n,
& PLL_LODIST_EN_OUT1_n,
& PLL_LODIST_EN_OUT2_n,
& PLL_LODIST_EN_OUT3_n,

& PLL_LODIST_FSP_OUT02_n,
& PLL_LODIST_FSP_OUT12_n,
& PLL_LODIST_FSP_OUT22_n,
& PLL_LODIST_FSP_OUT32_n,

& PLL_LODIST_FSP_OUT010_n,
& PLL_LODIST_FSP_OUT110_n,
& PLL_LODIST_FSP_OUT210_n,
& PLL_LODIST_FSP_OUT310_n
};
//const struct LMS8Parameter MAC = { 0x0020, 1, 0, 3, "MAC", "Selects MIMO channel for communication" };