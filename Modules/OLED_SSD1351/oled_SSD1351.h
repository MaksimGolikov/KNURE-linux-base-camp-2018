#define SCREEN_WIDTH    127
#define SCREEN_HEIGHT   127
#define BPP      		16
#define LCD_PIXEL_COUNT	(LCD_WIDTH * SCREEN_HEIGHT)

#define SEND_COMMAND    0
#define SEND_DATA       1
#define START_INIT      2
#define FINISH_INIT     3


enum{
	COLOR_WHITE	    =	0xFFFF,
	COLOR_BLACK	    =	0x0000,
	COLOR_RED	    =	0xF800,
	COLOR_PURP	    =	0xC815,
	COLOR_GREEN	    =	0x07E0,
	COLOR_BLUE	    =	0x04FF,
	COLOR_YELLOW	=	0xFFE0,
	COLOR_SIEMENS  	=	0x06F7,
	COLOR_MAGENTA  	=	0xf81f,
	COLOR_LMAGENTA	=	0xfc1f,
	COLOR_TURQUOISE	=	0x36b9,
	COLOR_DGREEN	=	0x7e00,
};

enum{
	COMMAND_SET_COLUMN 		=  0x15,
	COMMAND_SET_ROW    		=  0x75,
	COMMAND_WRITE_RAM   	=  0x5C,
	COMMAND_READRAM   		=  0x5D,
	COMMAND_SET_REMAP 		=  0xA0,
	COMMAND_STARTLINE 		=  0xA1,
	COMMAND_DISPLAY_OFFSET 	=  0xA2,
	COMMAND_DISPLAY_ALL_OFF =  0xA4,
	COMMAND_DISPLAY_ALL_ON  =  0xA5,
	COMMAND_NORMAL_DISPLAY 	=  0xA6,
	COMMAND_INVERT_DISPLAY 	=  0xA7,
	COMMAND_FUNCTION_SELECT =  0xAB,
	COMMAND_DISPLAY_OFF 	=  0xAE,
	COMMAND_DISPLAY_ON     	=  0xAF,
	COMMAND_PRECHARGE 		=  0xB1,
	COMMAND_DISPLAY_ENHANCE	=  0xB2,
	COMMAND_CLOCK_DIV 		=  0xB3,
	COMMAND_SET_VSL 		=  0xB4,
	COMMAND_SET_GPIO 		=  0xB5,
	COMMAND_PRECHARGE2 		=  0xB6,
	COMMAND_SETGRAY 		=  0xB8,
	COMMAND_USELUT 			=  0xB9,
	COMMAND_PRECHARGE_LEVEL =  0xBB,
	COMMAND_VCOMH 			=  0xBE,
	COMMAND_CONTRAST_ABC	=  0xC1,
	COMMAND_CONTRAST_MASTER	=  0xC7,
	COMMAND_MUXRATIO        =  0xCA,
	COMMAND_COMMAND_LOCK    =  0xFD,
	COMMAND_HORIZ_SCROLL    =  0x96,
	COMMAND_STOP_SCROLL     =  0x9E,
	COMMAND_START_SCROLL    =  0x9F,
};


// typedef struct {
// 	u8 transmittType;
// 	u8 value;
// }InitField_t;


// InitField_t InitSettings[]={
// 	{START_INIT  , 0},
// 	{SEND_COMMAND, COMMAND_COMMAND_LOCK},
// 	{SEND_DATA   , 0x12},
// 	{SEND_COMMAND, COMMAND_COMMAND_LOCK},
// 	{SEND_DATA   , 0xB1},
// 	{SEND_COMMAND, COMMAND_DISPLAY_OFF},
// 	{SEND_COMMAND, COMMAND_CLOCK_DIV},
// 	{SEND_DATA   , 0x10},
// 	{SEND_COMMAND, COMMAND_MUXRATIO},
// 	{SEND_DATA   , 0x7F},
// 	{SEND_COMMAND, COMMAND_DISPLAY_OFFSET},
// 	{SEND_DATA   , 0},
// 	{SEND_COMMAND, COMMAND_STARTLINE},
// 	{SEND_DATA   , 0},
// 	{SEND_COMMAND, COMMAND_SET_REMAP},
// 	{SEND_DATA   , 0x74},
// 	{SEND_COMMAND, COMMAND_SET_GPIO},
// 	{SEND_DATA   , 0},
// 	{SEND_COMMAND, COMMAND_FUNCTION_SELECT},
// 	{SEND_DATA   , 0xC1},
// 	{SEND_COMMAND, COMMAND_SET_VSL},
// 	{SEND_DATA   , 0xA0},
// 	{SEND_DATA   , 0xB5},
// 	{SEND_DATA   , 0x55},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{},
// 	{FINISH_INIT, 0},
// }