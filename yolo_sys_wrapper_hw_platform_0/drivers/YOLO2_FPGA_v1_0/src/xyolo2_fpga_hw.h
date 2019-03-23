// ==============================================================
// File generated on Thu Mar 21 17:12:41 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// CTRL_BUS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of Input_r
//        bit 31~0 - Input_r[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of Output_r
//        bit 31~0 - Output_r[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of Weight
//        bit 31~0 - Weight[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of Beta
//        bit 31~0 - Beta[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of InFM_num
//        bit 31~0 - InFM_num[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of OutFM_num
//        bit 31~0 - OutFM_num[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of Kernel_size
//        bit 31~0 - Kernel_size[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of Kernel_stride
//        bit 31~0 - Kernel_stride[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of Input_w
//        bit 31~0 - Input_w[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of Input_h
//        bit 31~0 - Input_h[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of Padding
//        bit 31~0 - Padding[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of IsNL
//        bit 0  - IsNL[0] (Read/Write)
//        others - reserved
// 0x6c : reserved
// 0x70 : Data signal of IsBN
//        bit 0  - IsBN[0] (Read/Write)
//        others - reserved
// 0x74 : reserved
// 0x78 : Data signal of TM
//        bit 31~0 - TM[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of TN
//        bit 31~0 - TN[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of TR
//        bit 31~0 - TR[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of TC
//        bit 31~0 - TC[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of mLoops
//        bit 31~0 - mLoops[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of nLoops
//        bit 31~0 - nLoops[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of rLoops
//        bit 31~0 - rLoops[31:0] (Read/Write)
// 0xac : reserved
// 0xb0 : Data signal of cLoops
//        bit 31~0 - cLoops[31:0] (Read/Write)
// 0xb4 : reserved
// 0xb8 : Data signal of LayerType
//        bit 31~0 - LayerType[31:0] (Read/Write)
// 0xbc : reserved
// 0xc0 : Data signal of InputQ
//        bit 31~0 - InputQ[31:0] (Read/Write)
// 0xc4 : reserved
// 0xc8 : Data signal of OutputQ
//        bit 31~0 - OutputQ[31:0] (Read/Write)
// 0xcc : reserved
// 0xd0 : Data signal of WeightQ
//        bit 31~0 - WeightQ[31:0] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of BetaQ
//        bit 31~0 - BetaQ[31:0] (Read/Write)
// 0xdc : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL            0x00
#define XYOLO2_FPGA_CTRL_BUS_ADDR_GIE                0x04
#define XYOLO2_FPGA_CTRL_BUS_ADDR_IER                0x08
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISR                0x0c
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_R_DATA       0x10
#define XYOLO2_FPGA_CTRL_BUS_BITS_INPUT_R_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUT_R_DATA      0x18
#define XYOLO2_FPGA_CTRL_BUS_BITS_OUTPUT_R_DATA      32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHT_DATA        0x20
#define XYOLO2_FPGA_CTRL_BUS_BITS_WEIGHT_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_BETA_DATA          0x28
#define XYOLO2_FPGA_CTRL_BUS_BITS_BETA_DATA          32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INFM_NUM_DATA      0x30
#define XYOLO2_FPGA_CTRL_BUS_BITS_INFM_NUM_DATA      32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTFM_NUM_DATA     0x38
#define XYOLO2_FPGA_CTRL_BUS_BITS_OUTFM_NUM_DATA     32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_SIZE_DATA   0x40
#define XYOLO2_FPGA_CTRL_BUS_BITS_KERNEL_SIZE_DATA   32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_STRIDE_DATA 0x48
#define XYOLO2_FPGA_CTRL_BUS_BITS_KERNEL_STRIDE_DATA 32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_W_DATA       0x50
#define XYOLO2_FPGA_CTRL_BUS_BITS_INPUT_W_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_H_DATA       0x58
#define XYOLO2_FPGA_CTRL_BUS_BITS_INPUT_H_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_PADDING_DATA       0x60
#define XYOLO2_FPGA_CTRL_BUS_BITS_PADDING_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISNL_DATA          0x68
#define XYOLO2_FPGA_CTRL_BUS_BITS_ISNL_DATA          1
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISBN_DATA          0x70
#define XYOLO2_FPGA_CTRL_BUS_BITS_ISBN_DATA          1
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TM_DATA            0x78
#define XYOLO2_FPGA_CTRL_BUS_BITS_TM_DATA            32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TN_DATA            0x80
#define XYOLO2_FPGA_CTRL_BUS_BITS_TN_DATA            32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TR_DATA            0x88
#define XYOLO2_FPGA_CTRL_BUS_BITS_TR_DATA            32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TC_DATA            0x90
#define XYOLO2_FPGA_CTRL_BUS_BITS_TC_DATA            32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_MLOOPS_DATA        0x98
#define XYOLO2_FPGA_CTRL_BUS_BITS_MLOOPS_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_NLOOPS_DATA        0xa0
#define XYOLO2_FPGA_CTRL_BUS_BITS_NLOOPS_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_RLOOPS_DATA        0xa8
#define XYOLO2_FPGA_CTRL_BUS_BITS_RLOOPS_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_CLOOPS_DATA        0xb0
#define XYOLO2_FPGA_CTRL_BUS_BITS_CLOOPS_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_LAYERTYPE_DATA     0xb8
#define XYOLO2_FPGA_CTRL_BUS_BITS_LAYERTYPE_DATA     32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUTQ_DATA        0xc0
#define XYOLO2_FPGA_CTRL_BUS_BITS_INPUTQ_DATA        32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUTQ_DATA       0xc8
#define XYOLO2_FPGA_CTRL_BUS_BITS_OUTPUTQ_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHTQ_DATA       0xd0
#define XYOLO2_FPGA_CTRL_BUS_BITS_WEIGHTQ_DATA       32
#define XYOLO2_FPGA_CTRL_BUS_ADDR_BETAQ_DATA         0xd8
#define XYOLO2_FPGA_CTRL_BUS_BITS_BETAQ_DATA         32

