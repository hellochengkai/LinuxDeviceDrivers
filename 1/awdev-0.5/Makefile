ifneq ($(KERNELRELEASE),)
	obj-m := awusb.o
else
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PDW := $(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
