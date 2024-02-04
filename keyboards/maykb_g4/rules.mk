SERIAL_DRIVER = vendor

# Allow us to identify the half at compile time, this can be used to switch to different pins depending on the side we target
ifeq ($(strip $(COMPILE_FOR_RIGHT)), yes)
    OPT_DEFS += -DCOMPILE_FOR_RIGHT
endif
