# name of your application
APPLICATION = air_control

KBUILD_CFLAGS += -Wno-error=unused-function

# name of your board
BOARD ?= stm32f334c8-disco

SOURCES_DIR += hal \
hal/Legacy

C_SOURCES += hal \
hal/Legacy

# Used modules
USEMODULE += xtimer
USEMODULE += i2c
# USEMODULE += periph_gpio_irq
# USEMODULE += dht
# USEMODULE += fmt

# FEATURES_REQUIRED += periph_pwm

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/RIOT/

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
