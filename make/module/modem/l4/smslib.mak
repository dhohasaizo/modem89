# Define source file lists to SRC_LIST
SRC_LIST = $(strip $(MODEM_FOLDER))/l4/smslib/src/smslib_decode.c \
           $(strip $(MODEM_FOLDER))/l4/smslib/src/smslib_encode.c \
           $(strip $(MODEM_FOLDER))/l4/smslib/src/smslib_others.c
 
# Define include path lists to INC_DIR
INC_DIR = $(strip $(MODEM_FOLDER))/l4/smslib/include \
          $(strip $(MODEM_FOLDER))/l4/include \
          $(strip $(MODEM_FOLDER))/l4/l4c/include/common
 
# Define the specified compile options to COMP_DEFS
COMP_DEFS = __CATEGORY_MODEM__

# Define the source file search paths to SRC_PATH
SRC_PATH = $(strip $(MODEM_FOLDER))/l4/smslib/src
 
