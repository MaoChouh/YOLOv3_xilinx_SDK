/*
 * yolo_hw.h
 *
 *  Created on: 2019��3��23��
 *      Author: Yello
 */

#ifndef SRC_YOLO_HW_H_
#define SRC_YOLO_HW_H_


//IP_base_address
#define IP_BASE_ADDRESS      0x43C00000
#define ADDRESS_RANGE       4000
#define XYOLO2_FPGA_CTRL_BUS_ADDR
#define XYOLO2_FPGA_CTRL_BUS_ADDR_AP_CTRL            0x00
#define XYOLO2_FPGA_CTRL_BUS_ADDR_GIE                0x04
#define XYOLO2_FPGA_CTRL_BUS_ADDR_IER                0x08
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISR                0x0c
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_R_DATA       0x10
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUT_R_DATA      0x18
#define XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHT_DATA        0x20
#define XYOLO2_FPGA_CTRL_BUS_ADDR_BETA_DATA          0x28
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INFM_NUM_DATA      0x30
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTFM_NUM_DATA     0x38
#define XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_SIZE_DATA   0x40
#define XYOLO2_FPGA_CTRL_BUS_ADDR_KERNEL_STRIDE_DATA 0x48
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_W_DATA       0x50
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUT_H_DATA       0x58
#define XYOLO2_FPGA_CTRL_BUS_ADDR_PADDING_DATA       0x60
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISNL_DATA          0x68
#define XYOLO2_FPGA_CTRL_BUS_ADDR_ISBN_DATA          0x70
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TM_DATA            0x78
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TN_DATA            0x80
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TR_DATA            0x88
#define XYOLO2_FPGA_CTRL_BUS_ADDR_TC_DATA            0x90
#define XYOLO2_FPGA_CTRL_BUS_ADDR_MLOOPS_DATA        0x98
#define XYOLO2_FPGA_CTRL_BUS_ADDR_NLOOPS_DATA        0xa0
#define XYOLO2_FPGA_CTRL_BUS_ADDR_RLOOPS_DATA        0xa8
#define XYOLO2_FPGA_CTRL_BUS_ADDR_CLOOPS_DATA        0xb0
#define XYOLO2_FPGA_CTRL_BUS_ADDR_LAYERTYPE_DATA     0xb8
#define XYOLO2_FPGA_CTRL_BUS_ADDR_INPUTQ_DATA        0xc0
#define XYOLO2_FPGA_CTRL_BUS_ADDR_OUTPUTQ_DATA       0xc8
#define XYOLO2_FPGA_CTRL_BUS_ADDR_WEIGHTQ_DATA       0xd0
#define XYOLO2_FPGA_CTRL_BUS_ADDR_BETAQ_DATA         0xd8




#endif /* SRC_YOLO_HW_H_ */