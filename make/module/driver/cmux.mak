# Define source file lists to SRC_LIST
SRC_LIST = driver/cmux/src/cmux_create.c \
           driver/cmux/src/cmux_cch.c \
           driver/cmux/src/cmux_hdlr.c \
           driver/cmux/src/cmux_main.c \
           driver/cmux/src/cmux_prot.c \
           driver/cmux/src/cmux_uh.c \
           driver/cmux/src/cmux_utl.c \
           driver/cmux/src/cmux_vp.c \
           driver/cmux/src/cmux_lib.c

ifneq ($(filter __CMUX_UT__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += driver/cmux/src/cmux_ut.c
endif

#  Define include path lists to INC_DIR
INC_DIR = driver/cmux/include \
          interface/service/flc2

# Define the specified compile options to COMP_DEFS
COMP_DEFS = 

# Define the source file search paths to SRC_PATH
SRC_PATH = driver/cmux/src
