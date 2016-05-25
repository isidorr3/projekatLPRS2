/*****************************************************************************
* Filename:          C:\materija\ra115\battle_city_fpga-master\battle_city_design/drivers/my_peripheral_sega_v1_00_a/src/my_peripheral_sega.h
* Version:           1.00.a
* Description:       my_peripheral_sega Driver Header File
* Date:              Wed May 11 19:02:26 2016 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef MY_PERIPHERAL_SEGA_H
#define MY_PERIPHERAL_SEGA_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 * -- SLV_REG2 : user logic slave module register 2
 * -- SLV_REG3 : user logic slave module register 3
 * -- SLV_REG4 : user logic slave module register 4
 * -- SLV_REG5 : user logic slave module register 5
 * -- SLV_REG6 : user logic slave module register 6
 * -- SLV_REG7 : user logic slave module register 7
 * -- SLV_REG8 : user logic slave module register 8
 * -- SLV_REG9 : user logic slave module register 9
 * -- SLV_REG10 : user logic slave module register 10
 * -- SLV_REG11 : user logic slave module register 11
 * -- SLV_REG12 : user logic slave module register 12
 * -- SLV_REG13 : user logic slave module register 13
 * -- SLV_REG14 : user logic slave module register 14
 * -- SLV_REG15 : user logic slave module register 15
 * -- SLV_REG16 : user logic slave module register 16
 * -- SLV_REG17 : user logic slave module register 17
 * -- SLV_REG18 : user logic slave module register 18
 * -- SLV_REG19 : user logic slave module register 19
 * -- SLV_REG20 : user logic slave module register 20
 * -- SLV_REG21 : user logic slave module register 21
 * -- SLV_REG22 : user logic slave module register 22
 * -- SLV_REG23 : user logic slave module register 23
 * -- SLV_REG24 : user logic slave module register 24
 * -- SLV_REG25 : user logic slave module register 25
 * -- SLV_REG26 : user logic slave module register 26
 * -- SLV_REG27 : user logic slave module register 27
 * -- SLV_REG28 : user logic slave module register 28
 * -- SLV_REG29 : user logic slave module register 29
 * -- SLV_REG30 : user logic slave module register 30
 * -- SLV_REG31 : user logic slave module register 31
 */
#define MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET (0x00000000)
#define MY_PERIPHERAL_SEGA_SLV_REG0_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000000)
#define MY_PERIPHERAL_SEGA_SLV_REG1_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000004)
#define MY_PERIPHERAL_SEGA_SLV_REG2_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000008)
#define MY_PERIPHERAL_SEGA_SLV_REG3_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000000C)
#define MY_PERIPHERAL_SEGA_SLV_REG4_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000010)
#define MY_PERIPHERAL_SEGA_SLV_REG5_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000014)
#define MY_PERIPHERAL_SEGA_SLV_REG6_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000018)
#define MY_PERIPHERAL_SEGA_SLV_REG7_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000001C)
#define MY_PERIPHERAL_SEGA_SLV_REG8_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000020)
#define MY_PERIPHERAL_SEGA_SLV_REG9_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000024)
#define MY_PERIPHERAL_SEGA_SLV_REG10_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000028)
#define MY_PERIPHERAL_SEGA_SLV_REG11_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000002C)
#define MY_PERIPHERAL_SEGA_SLV_REG12_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000030)
#define MY_PERIPHERAL_SEGA_SLV_REG13_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000034)
#define MY_PERIPHERAL_SEGA_SLV_REG14_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000038)
#define MY_PERIPHERAL_SEGA_SLV_REG15_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000003C)
#define MY_PERIPHERAL_SEGA_SLV_REG16_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000040)
#define MY_PERIPHERAL_SEGA_SLV_REG17_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000044)
#define MY_PERIPHERAL_SEGA_SLV_REG18_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000048)
#define MY_PERIPHERAL_SEGA_SLV_REG19_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000004C)
#define MY_PERIPHERAL_SEGA_SLV_REG20_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000050)
#define MY_PERIPHERAL_SEGA_SLV_REG21_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000054)
#define MY_PERIPHERAL_SEGA_SLV_REG22_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000058)
#define MY_PERIPHERAL_SEGA_SLV_REG23_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000005C)
#define MY_PERIPHERAL_SEGA_SLV_REG24_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000060)
#define MY_PERIPHERAL_SEGA_SLV_REG25_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000064)
#define MY_PERIPHERAL_SEGA_SLV_REG26_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000068)
#define MY_PERIPHERAL_SEGA_SLV_REG27_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000006C)
#define MY_PERIPHERAL_SEGA_SLV_REG28_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000070)
#define MY_PERIPHERAL_SEGA_SLV_REG29_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000074)
#define MY_PERIPHERAL_SEGA_SLV_REG30_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x00000078)
#define MY_PERIPHERAL_SEGA_SLV_REG31_OFFSET (MY_PERIPHERAL_SEGA_USER_SLV_SPACE_OFFSET + 0x0000007C)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a MY_PERIPHERAL_SEGA register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the MY_PERIPHERAL_SEGA device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void MY_PERIPHERAL_SEGA_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define MY_PERIPHERAL_SEGA_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a MY_PERIPHERAL_SEGA register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the MY_PERIPHERAL_SEGA device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 MY_PERIPHERAL_SEGA_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define MY_PERIPHERAL_SEGA_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from MY_PERIPHERAL_SEGA user logic slave registers.
 *
 * @param   BaseAddress is the base address of the MY_PERIPHERAL_SEGA device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void MY_PERIPHERAL_SEGA_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 MY_PERIPHERAL_SEGA_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg2(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG2_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg3(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG3_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg4(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG4_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg5(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG5_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg6(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG6_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg7(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG7_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg8(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG8_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg9(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG9_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg10(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG10_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg11(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG11_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg12(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG12_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg13(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG13_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg14(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG14_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg15(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG15_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg16(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG16_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg17(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG17_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg18(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG18_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg19(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG19_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg20(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG20_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg21(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG21_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg22(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG22_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg23(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG23_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg24(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG24_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg25(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG25_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg26(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG26_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg27(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG27_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg28(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG28_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg29(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG29_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg30(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG30_OFFSET) + (RegOffset), (Xuint32)(Value))
#define MY_PERIPHERAL_SEGA_mWriteSlaveReg31(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG31_OFFSET) + (RegOffset), (Xuint32)(Value))

#define MY_PERIPHERAL_SEGA_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG0_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG1_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg2(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG2_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg3(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG3_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg4(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG4_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg5(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG5_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg6(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG6_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg7(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG7_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg8(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG8_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg9(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG9_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg10(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG10_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg11(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG11_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg12(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG12_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg13(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG13_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg14(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG14_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg15(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG15_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg16(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG16_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg17(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG17_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg18(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG18_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg19(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG19_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg20(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG20_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg21(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG21_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg22(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG22_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg23(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG23_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg24(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG24_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg25(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG25_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg26(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG26_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg27(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG27_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg28(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG28_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg29(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG29_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg30(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG30_OFFSET) + (RegOffset))
#define MY_PERIPHERAL_SEGA_mReadSlaveReg31(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (MY_PERIPHERAL_SEGA_SLV_REG31_OFFSET) + (RegOffset))

/************************** Function Prototypes ****************************/


/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MY_PERIPHERAL_SEGA instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus MY_PERIPHERAL_SEGA_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 32


#endif /** MY_PERIPHERAL_SEGA_H */
