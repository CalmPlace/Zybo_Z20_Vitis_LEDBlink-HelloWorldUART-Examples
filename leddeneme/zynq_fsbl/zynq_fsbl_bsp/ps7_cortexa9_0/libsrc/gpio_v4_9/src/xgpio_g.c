
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version: 2022.2
* DO NOT EDIT.
*
* Copyright (C) 2010-2024 Xilinx, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT 

* 
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xgpio.h"

/*
* The configuration table for devices
*/

XGpio_Config XGpio_ConfigTable[XPAR_XGPIO_NUM_INSTANCES] =
{
	{
		XPAR_AXI_GPIO_BUTTON_DEVICE_ID,
		XPAR_AXI_GPIO_BUTTON_BASEADDR,
		XPAR_AXI_GPIO_BUTTON_INTERRUPT_PRESENT,
		XPAR_AXI_GPIO_BUTTON_IS_DUAL
	},
	{
		XPAR_AXI_GPIO_LED_DEVICE_ID,
		XPAR_AXI_GPIO_LED_BASEADDR,
		XPAR_AXI_GPIO_LED_INTERRUPT_PRESENT,
		XPAR_AXI_GPIO_LED_IS_DUAL
	},
	{
		XPAR_AXI_GPIO_SWITCH_DEVICE_ID,
		XPAR_AXI_GPIO_SWITCH_BASEADDR,
		XPAR_AXI_GPIO_SWITCH_INTERRUPT_PRESENT,
		XPAR_AXI_GPIO_SWITCH_IS_DUAL
	}
};


