##############################################################################
## Filename:          C:\materija\ra115\projekat_radi_3\projekat_radi\battle_city_fpga-master\battle_city_design/drivers/my_peripheral_sega_v1_00_b/data/my_peripheral_sega_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Sat Jun 18 12:36:14 2016 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "my_peripheral_sega" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
