// ==============================================================
// File generated on Thu Mar 21 17:12:41 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xyolo2_fpga.h"

extern XYolo2_fpga_Config XYolo2_fpga_ConfigTable[];

XYolo2_fpga_Config *XYolo2_fpga_LookupConfig(u16 DeviceId) {
	XYolo2_fpga_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XYOLO2_FPGA_NUM_INSTANCES; Index++) {
		if (XYolo2_fpga_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XYolo2_fpga_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XYolo2_fpga_Initialize(XYolo2_fpga *InstancePtr, u16 DeviceId) {
	XYolo2_fpga_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XYolo2_fpga_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XYolo2_fpga_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

