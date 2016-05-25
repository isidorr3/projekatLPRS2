##############################################################################
## Filename:          C:\materija\ra115\battle_city_fpga-master\battle_city_design/drivers/my_peripheral_sega_v1_00_a/data/my_peripheral_sega_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Wed May 11 19:02:26 2016 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "my_peripheral_sega" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
