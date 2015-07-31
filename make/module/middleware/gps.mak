# Define source file lists to SRC_LIST

SRC_LIST = middleware/gps/src/gps_init.c \
           middleware/gps/src/gps_inject_msg.c \
           middleware/gps/src/gps_main.c \
           middleware/gps/src/gps_sm.c \
           middleware/gps/src/gps_uart.c \
           middleware/gps/src/gps_auth.c

#  Define include path lists to INC_DIR
INC_DIR = middleware/gps/inc \
          interface/driver/peripheral

# Define the specified compile options to COMP_DEFS
COMP_DEFS = 

# Define the source file search paths to SRC_PATH
SRC_PATH = middleware/gps/src
