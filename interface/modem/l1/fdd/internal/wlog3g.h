void WriteHWRegister(kal_uint32 Address, kal_uint16 Value);
void USB_LOGGING_3G_HISR(void);

kal_uint16 USB_LOGGING_Get_3G_Status(kal_uint32 buf_index);
void USB_LOGGING_3G_Reset(void);
void USB_LOGGING_3G_Restart(void);
void USB_LOGGING_3G_Init(kal_uint8* add1, kal_uint8* add2, kal_uint8* add3, kal_uint8* add4);
void USB_LOGGING_3G_Start(void);
void USB_LOGGING_3G_Stop(void);
void USB_LOGGING_3G_LISR(void);
void USB_LOGGING_3G_Drv_Create_ISR(void);
void USB_LOGGING_3G_Clear_Buffer(kal_uint8 buf_idx, kal_uint8 idx);


#define LOG3G_USB_L1D_FLLT_1   	0x02  
#define LOG3G_USB_L1D_RDY_1		0x70
#define LOG3G_USB_L1D_PID_1		0x3216
#define LOG3G_USB_L1D_LEN_1		1024
#define LOG3G_USB_L1D_ADDR_1		0x00

/* LOG3G_USB_BUF_CTRL  */
#define LOG3G_USB_BUF_CTRL_CLR	   0x00000000
#define LOG3G_USB_BUF_CTRL_RDY	   0x00000001
#define LOG3G_USB_BUF_CTRL_RST	   0x00000002
#define LOG3G_LOG_ENABLE           0x80000000
#define LOG3G_SCALER_DUMP_ENABLE   0x00000001

#if IS_3G_CHIP_MT6276_AND_LATTER_VERSION
#define LOG3G_ATB_BUFFER_NUM    0x0000000f
#define LOG3G_ATB_BUFFER_SIZE   0x00007fff
#define LOG3G_ATB_IF_ENABLE     0x40000000
#endif

