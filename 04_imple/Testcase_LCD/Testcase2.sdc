## Generated SDC file "Testcase2.sdc"

## Copyright (C) 1991-2013 Altera Corporation
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and its AMPP partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, Altera MegaCore Function License 
## Agreement, or other applicable license agreement, including, 
## without limitation, that your use is for the sole purpose of 
## programming logic devices manufactured by Altera and sold by 
## Altera or its authorized distributors.  Please refer to the 
## applicable agreement for further details.


## VENDOR  "Altera"
## PROGRAM "Quartus II"
## VERSION "Version 13.0.1 Build 232 06/12/2013 Service Pack 1 SJ Web Edition"

## DATE    "Mon Jun 02 10:32:31 2025"

##
## DEVICE  "EP2C35F672C6"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {Testcase2} -period 20.000 -waveform { 0.000 10.000 } [get_ports {CLOCK_50}]


#**************************************************************
# Create Generated Clock
#**************************************************************



#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************



#**************************************************************
# Set Input Delay
#**************************************************************

set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {KEY[0]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[0]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[1]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[2]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[3]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[4]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[5]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[6]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[7]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[8]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[9]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[10]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[11]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[12]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[13]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[14]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[15]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[16]}]
set_input_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {SW[17]}]


#**************************************************************
# Set Output Delay
#**************************************************************

set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_BLON}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[0]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[1]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[2]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[3]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[4]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[5]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[6]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_DATA[7]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_EN}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_ON}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_RS}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LCD_RW}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[0]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[1]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[2]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[3]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[4]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[5]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDG[6]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[0]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[1]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[2]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[3]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[4]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[5]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[6]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[7]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[8]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[9]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[10]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[11]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[12]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[13]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[14]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[15]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[16]}]
set_output_delay -add_delay  -clock [get_clocks {Testcase2}]  0.500 [get_ports {LEDR[17]}]


#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

