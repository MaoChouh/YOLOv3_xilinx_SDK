// ==============================================================
// File generated on Thu Mar 21 17:12:41 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xyolo2_fpga.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XYolo2_fpga_CfgInitialize(XYolo2_fpga *InstancePtr, XYolo2_fpga_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Ctrl_bus_BaseAddress = ConfigPtr->Ctrl_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XYolo2_fpga_Start(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL) & 0x80;
    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XYolo2_fpga_IsDone(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XYolo2_fpga_IsIdle(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XYolo2_fpga_IsReady(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XYolo2_fpga_EnableAutoRestart(XYolo2_fpga *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL, 0x80);
}

void XYolo2_fpga_DisableAutoRestart(XYolo2_fpga *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL, 0);
}

void XYolo2_fpga_Set_Input_r(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_R_DATA, Data);
}

u32 XYolo2_fpga_Get_Input_r(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_R_DATA);
    return Data;
}

void XYolo2_fpga_Set_Output_r(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUT_R_DATA, Data);
}

u32 XYolo2_fpga_Get_Output_r(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUT_R_DATA);
    return Data;
}

void XYolo2_fpga_Set_Weight(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHT_DATA, Data);
}

u32 XYolo2_fpga_Get_Weight(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHT_DATA);
    return Data;
}

void XYolo2_fpga_Set_Beta(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_BETA_DATA, Data);
}

u32 XYolo2_fpga_Get_Beta(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_BETA_DATA);
    return Data;
}

void XYolo2_fpga_Set_InFM_num(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INFM_NUM_DATA, Data);
}

u32 XYolo2_fpga_Get_InFM_num(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INFM_NUM_DATA);
    return Data;
}

void XYolo2_fpga_Set_OutFM_num(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTFM_NUM_DATA, Data);
}

u32 XYolo2_fpga_Get_OutFM_num(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTFM_NUM_DATA);
    return Data;
}

void XYolo2_fpga_Set_Kernel_size(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_SIZE_DATA, Data);
}

u32 XYolo2_fpga_Get_Kernel_size(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_SIZE_DATA);
    return Data;
}

void XYolo2_fpga_Set_Kernel_stride(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_STRIDE_DATA, Data);
}

u32 XYolo2_fpga_Get_Kernel_stride(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_STRIDE_DATA);
    return Data;
}

void XYolo2_fpga_Set_Input_w(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_W_DATA, Data);
}

u32 XYolo2_fpga_Get_Input_w(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_W_DATA);
    return Data;
}

void XYolo2_fpga_Set_Input_h(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_H_DATA, Data);
}

u32 XYolo2_fpga_Get_Input_h(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_H_DATA);
    return Data;
}

void XYolo2_fpga_Set_Padding(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_PADDING_DATA, Data);
}

u32 XYolo2_fpga_Get_Padding(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_PADDING_DATA);
    return Data;
}

void XYolo2_fpga_Set_IsNL(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISNL_DATA, Data);
}

u32 XYolo2_fpga_Get_IsNL(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISNL_DATA);
    return Data;
}

void XYolo2_fpga_Set_IsBN(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISBN_DATA, Data);
}

u32 XYolo2_fpga_Get_IsBN(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISBN_DATA);
    return Data;
}

void XYolo2_fpga_Set_TM(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TM_DATA, Data);
}

u32 XYolo2_fpga_Get_TM(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TM_DATA);
    return Data;
}

void XYolo2_fpga_Set_TN(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TN_DATA, Data);
}

u32 XYolo2_fpga_Get_TN(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TN_DATA);
    return Data;
}

void XYolo2_fpga_Set_TR(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TR_DATA, Data);
}

u32 XYolo2_fpga_Get_TR(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TR_DATA);
    return Data;
}

void XYolo2_fpga_Set_TC(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TC_DATA, Data);
}

u32 XYolo2_fpga_Get_TC(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_TC_DATA);
    return Data;
}

void XYolo2_fpga_Set_mLoops(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_MLOOPS_DATA, Data);
}

u32 XYolo2_fpga_Get_mLoops(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_MLOOPS_DATA);
    return Data;
}

void XYolo2_fpga_Set_nLoops(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_NLOOPS_DATA, Data);
}

u32 XYolo2_fpga_Get_nLoops(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_NLOOPS_DATA);
    return Data;
}

void XYolo2_fpga_Set_rLoops(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_RLOOPS_DATA, Data);
}

u32 XYolo2_fpga_Get_rLoops(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_RLOOPS_DATA);
    return Data;
}

void XYolo2_fpga_Set_cLoops(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_CLOOPS_DATA, Data);
}

u32 XYolo2_fpga_Get_cLoops(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_CLOOPS_DATA);
    return Data;
}

void XYolo2_fpga_Set_LayerType(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_LAYERTYPE_DATA, Data);
}

u32 XYolo2_fpga_Get_LayerType(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_LAYERTYPE_DATA);
    return Data;
}

void XYolo2_fpga_Set_InputQ(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUTQ_DATA, Data);
}

u32 XYolo2_fpga_Get_InputQ(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_INPUTQ_DATA);
    return Data;
}

void XYolo2_fpga_Set_OutputQ(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUTQ_DATA, Data);
}

u32 XYolo2_fpga_Get_OutputQ(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUTQ_DATA);
    return Data;
}

void XYolo2_fpga_Set_WeightQ(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHTQ_DATA, Data);
}

u32 XYolo2_fpga_Get_WeightQ(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHTQ_DATA);
    return Data;
}

void XYolo2_fpga_Set_BetaQ(XYolo2_fpga *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_BETAQ_DATA, Data);
}

u32 XYolo2_fpga_Get_BetaQ(XYolo2_fpga *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_BETAQ_DATA);
    return Data;
}

void XYolo2_fpga_InterruptGlobalEnable(XYolo2_fpga *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_GIE, 1);
}

void XYolo2_fpga_InterruptGlobalDisable(XYolo2_fpga *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_GIE, 0);
}

void XYolo2_fpga_InterruptEnable(XYolo2_fpga *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_IER);
    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_IER, Register | Mask);
}

void XYolo2_fpga_InterruptDisable(XYolo2_fpga *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_IER);
    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_IER, Register & (~Mask));
}

void XYolo2_fpga_InterruptClear(XYolo2_fpga *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XYolo2_fpga_WriteReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISR, Mask);
}

u32 XYolo2_fpga_InterruptGetEnabled(XYolo2_fpga *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_IER);
}

u32 XYolo2_fpga_InterruptGetStatus(XYolo2_fpga *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XYolo2_fpga_ReadReg(InstancePtr->Ctrl_bus_BaseAddress, XYOLO2_FPGA_CTRL_BUS_ADDR_ISR);
}

