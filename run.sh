make
st-flash --connect-under-reset erase
st-flash write bin/stm32f334c8-disco/air_control.bin 0x08000000

