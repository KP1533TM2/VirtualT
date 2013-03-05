/* n8300rom.c */

/* $Id: n8201rom.c,v 1.5 2011/07/09 08:16:21 kpettit1 Exp $ */

/*
 * Copyright 2013 Ken Pettit
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include "roms.h"
#include "romstrings.h"


Std_ROM_Table_t	gN8300_Tables[] = {
	{ 0x0003, 5,   TABLE_TYPE_STRING },
	{ 0x0040, 266, TABLE_TYPE_JUMP }, 
	{ 0x014A, 26*2,TABLE_TYPE_JUMP }, 
	{ 0x017E, 542, TABLE_TYPE_MODIFIED_STRING2 },
	{ 0x039C, 20,  TABLE_TYPE_JUMP },
	{ 0x03BD, 40,  TABLE_TYPE_JUMP },
	{ 0x03E5, 70,  TABLE_TYPE_2BYTE },
	{ 0x042B, 225, TABLE_TYPE_CODE },
	{ 0x050C, 23,  TABLE_TYPE_STRING },
	{ 0x0F5D, 19,  TABLE_TYPE_STRING },
	{ 0x1057, 17,  TABLE_TYPE_STRING },
	{ 0x1712, 16,  TABLE_TYPE_STRING },
	{ 0x1942, 6,   TABLE_TYPE_JUMP },

	{ 0x1962, 10,  TABLE_TYPE_JUMP },
	{ 0x1974, 10,  TABLE_TYPE_JUMP },
	{ 0x1AF7, 10,  TABLE_TYPE_JUMP },
	{ 0x1BCC, 6,   TABLE_TYPE_JUMP },
	{ 0x1BDA, 10,  TABLE_TYPE_JUMP },
	{ 0x1CEC, 10,  TABLE_TYPE_JUMP },
	{ 0x287B, 6,   TABLE_TYPE_STRING },
	{ 0x2ABF, 12,  TABLE_TYPE_STRING },
	{ 0x2FDA, 1,   TABLE_TYPE_CODE },
	{ 0x2FDB, 4*8, TABLE_TYPE_CODE },
//	{ 0x2FEB, 4*4, TABLE_TYPE_CODE },
	{ 0x3CCA, 131,  TABLE_TYPE_CODE },
	{ 0x3DFD, 1,   TABLE_TYPE_CODE },
	{ 0x3DFE, 7*4, TABLE_TYPE_CODE },
	{ 0x3F49, 1,   TABLE_TYPE_CODE },
	{ 0x3F4A, 5*4, TABLE_TYPE_CODE },
	{ 0x3F98, 1,   TABLE_TYPE_CODE },
	{ 0x3F99, 9*4, TABLE_TYPE_CODE },
	{ 0x43EF, 36,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x4429, 72,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x47FC, 8*3,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x528D, 29,  TABLE_TYPE_CTRL_DELIM },
	{ 0x52AA, 1,   TABLE_TYPE_CODE },
	{ 0x52AB, 16,  TABLE_TYPE_JUMP },
//	{ 0x5318, 9,   TABLE_TYPE_STRING },
//	{ 0x5321, 18,  TABLE_TYPE_4BYTE_CMD },
//	{ 0x5333, 1,   TABLE_TYPE_CODE },
	{ 0x5371, 23,  TABLE_TYPE_STRING },
//	{ 0x536B, 29,  TABLE_TYPE_STRING },
	{ 0x5445, 20,  TABLE_TYPE_JUMP },
	{ 0x54AD, 17,  TABLE_TYPE_STRING },
	{ 0x54BE, 7,   TABLE_TYPE_STRING },
	{ 0x560A, 53,  TABLE_TYPE_STRING },
	{ 0x5E61, 5,   TABLE_TYPE_CODE },
	{ 0x5E66, 4,   TABLE_TYPE_STRING },
	{ 0x5E6A, 2,   TABLE_TYPE_CODE },
	{ 0x5E6C, 4,   TABLE_TYPE_STRING },
	{ 0x5E70, 2,   TABLE_TYPE_CODE },
	{ 0x5E72, 4,   TABLE_TYPE_STRING },
	{ 0x5E76, 2,   TABLE_TYPE_CODE },
	{ 0x5E78, 1,   TABLE_TYPE_CODE },
	{ 0x5E79, 57,  TABLE_TYPE_STRING },
	{ 0x5EB2, 150, TABLE_TYPE_STRING },
	{ 0x5FEB, 13,  TABLE_TYPE_STRING },
	{ 0x5FF8, 10,  TABLE_TYPE_CODE },
	{ 0x6002, 46,  TABLE_TYPE_STRING },
//	{ 0x551D, 1,   TABLE_TYPE_CODE },
	{ 0x6105, 17,  TABLE_TYPE_STRING },
	{ 0x61EF, 64,  TABLE_TYPE_JUMP },
	{ 0x627F, 13,  TABLE_TYPE_STRING },
	{ 0x67B3, 17,  TABLE_TYPE_STRING },
	{ 0x6845, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x6C8E, 66,  TABLE_TYPE_CATALOG },
	{ 0x6F40, 18,  TABLE_TYPE_JUMP },
	{ 0x75DA, 240, TABLE_TYPE_CODE },
	{ 0x76CC, 20,  TABLE_TYPE_CODE },
	{ 0x78B7, 96*5,  TABLE_TYPE_CODE },
	{ 0x7A97, 85*6-1,  TABLE_TYPE_CODE },
/*	{ 0x7BF1, 322, TABLE_TYPE_CODE },
*/	{ 0x7EA1, 14,  TABLE_TYPE_CODE },
	{ 0x7F89, 12,  TABLE_TYPE_STRING },
	{ 0x7F95, 12,  TABLE_TYPE_STRING },
	{ 0x7FA1, 14,  TABLE_TYPE_STRING },
	{ 0x7FAF, 15,  TABLE_TYPE_STRING },
	{ -1, 0, 0 }
};

Std_ROM_Addresses_t gN8300_Vars[] = {
	{ 0x0040, R_FUN_VCTR_TBL },			
	{ 0x0080, R_BASIC_TBL },				
	{ 0x02EE, R_MATH_VCTR_TBL },			
	{ 0x03E5, R_BASIC_ERR_TXT },			
	{ 0x042B, R_INIT_IMAGE },				
	{ 0x036F, R_XROM_DET_IMAGE },			
	{ 0x050C, R_BASIC_STRINGS },			
//	{ 0x1F24, R_CAS_FREQ_CNT },			
//	{ 0x4349, R_CAS_FREQ_CNT },			
	{ 0xF3C2, R_TERM_FKEY_VCTR_TBL },		
	{ 0x5E61, R_DIR_DISP_ORDER_TBL },		
	{ 0x5FF7, R_TEXT_FKEY_VCTR_TBL },		
	{ 0x5C8E, R_ROM_CAT_ENTRIES },		
	{ 0x7266, R_INT_EXIT_FUN },			
	{ 0x7267, R_INT_EXIT_FUN },			
	{ 0x75DA, R_8155_PIO_PAT1 },			
	{ 0x76CC, R_8155_PIO_PAT2 },			
	{ 0x7EA1, R_INIT_CLK_VALUES },		
	{ 0x7F89, R_MENU_STRINGS },			
	{ 0x7F95, R_MODEL_NUM_STRING },		
	{ 0xF380, R_ACTIVE_SIGNATURE },		
	{ 0xF384, R_HIMEM },					
	{ 0xF386, R_RST0_HOOK },					
	{ 0xF389, R_RST_5_5_VCTR },			
	{ 0xF38C, R_RST_6_5_VCTR },			
	{ 0xF38F, R_RST_7_5_VCTR },			
	{ 0xF392, R_TRAP_VCTR }, 
	{ 0xF3B9, R_EXEC_2ND_ROM }, 
	{ 0xF3C0, R_TELCOM_FKEY_VCTR },
	{ 0xF3BF, R_OPTION_ROM_FLAG },      	
	{ 0xF3C0, R_FKEY_STAT_TBL },        	
	{ 0xF3E8, R_NEW_CONSOLE_FLAG },     	
	{ 0xF3E5, R_CURSOR_ROW },
	{ 0xF3E6, R_CURSOR_COL },           	
	{ 0xF3E7, R_ACTIVE_ROW_CNT },       	
	{ 0xF3E8, R_ACTIVE_COL_CNT },       	
	{ 0xF3E9, R_LABEL_LINE_PROT },      	
	{ 0xF3EA, R_SCROLL_DISABLE },       	
	{ 0xF3EB, R_CURSOR_STAT },          	
	{ 0xF3EC, R_CURSOR_ROW2 },          	
	{ 0xF3ED, R_CURSOR_COL2 },          	
	{ 0xF3F2, R_ESC_MODE_FLAG },        	
	{ 0xF3F4, R_REV_VID_SWITCH },       	
	{ 0xF3FA, R_LAST_PLOT_X },          	
	{ 0xF3FB, R_LAST_PLOT_Y },          	
	{ 0xF401, R_PWR_OFF_STAT },         	
	{ 0xF403, R_DUPLEX_SWITCH },        	
	{ 0xF404, R_RS232_LF_SWITCH },      	
	{ 0xF406, R_RS232_PARAM_TBL },      	
	{ 0xF40C, R_ADDRESS_LAST_CALLED },  	
	{ 0xF413, R_OUT_STMT_HOOK },        	
	{ 0xF44B, R_INP_STMT_HOOK },        	
	{ 0xF453, R_LAST_ERROR_CODE },      	
	{ 0xF455, R_LPT_HEAD_POS },         	
	{ 0xF456, R_OUTPUT_DEVICE },        	
	{ 0xF459, R_BASIC_STR_BUF_PTR },    	
	{ 0xF45B, R_CUR_BASIC_LINE_NUM },   	
	{ 0xF45D, R_START_BASIC_PGM_PTR },  	
	{ 0xF461, R_END_OF_STMT_MARKER },   	
	{ 0xF590, R_CUR_MENU_DIR_LOC },     	
	{ 0xF591, R_MAX_MENU_DIR_LOC },     	
	{ 0xF5A1, R_KEYBOARD_BUF },         	
	{ 0xF6A4, R_CURSOR_H_POS },         	
	{ 0xF6A5, R_FKEY_DEF_BUF },         	
	{ 0xF746, R_BASIC_FKEY_DEF_BUF },   	
	{ 0xF462, R_FILE_RAM_END },         	
	{ 0xF832, R_SEC_ONES },             	
	{ 0xF833, R_SEC_TENS },             	
	{ 0xF834, R_MIN_ONES },             	
	{ 0xF835, R_MIN_TENS },             	
	{ 0xF836, R_HR_ONES },              	
	{ 0xF837, R_HR_TENS },              	
	{ 0xF838, R_DATE_ONES },            	
	{ 0xF839, R_DATE_TENS },            	
	{ 0xF83A, R_DAY_CODE },             	
	{ 0xF83B, R_MONTH },                	
	{ 0xF83C, R_YEAR_ONES },            	
	{ 0xF83D, R_YEAR_TENS },            	
	{ 0xF840, R_ONTIME_TIME },          	
//	{ 0xF841, R_ONCOM_FLAG },           	
//	{ 0xF945, R_ONCOM_ADDRESS },        	
	{ 0xF841, R_ONTIME_FLAG },          	
//	{ 0xF948, R_ONTIME_ADDRESS },       	
//	{ 0xF94A, R_FKEY_VCTR_TBL },        	
	{ 0xF84F, R_DIR_RAM_START },        	
	{ 0xF979, R_UNSAVED_BASIC_PTR },    	
	{ 0xF87C, R_PASTE_RAM_START },      	
//	{ 0xFAAD, R_LABEL_ENABLE_FLAG },    	
	{ 0xF9BC, R_BASIC_LIST_START },     	
	{ 0xF9AE, R_SP_SAVE_BUF },          	
	{ 0xF9B0, R_LOWEST_RAM },           	
//	{ 0xFAC9, R_RST_38H_OFFSET },       	
	{ 0xF9C0, R_CUR_PROG_LOAD_ADDR },
	{ 0xF9C2, R_LAST_PGRM_LEN },        	
	{ 0xF9CC, R_RST_38H_VCTR_TBL },     	
	{ 0xFA8A, R_VAR_CREATE_LOC_FLAG },  	
	{ 0xFA8B, R_LAST_VAR_TYPE },        	
	{ 0xFA9A, R_FILE_BUF_PTR },         	
	{ 0xFAC7, R_DATA_STMT_LINE_NUM },   	
	{ 0xFAC9, R_FOR_NEXT_ACTIVE_FLAG }, 	
	{ 0xFACB, R_LAST_VAR_ASSIGNED_ADDR },	
	{ 0xFACE, R_RUNNING_LINE_NUM_ADDR },	
	{ 0xFAD0, R_BASIC_SP_BUF },         	
	{ 0xFAD2, R_LAST_ERR_LINE_NUM },    	
	{ 0xFAD4, R_LAST_ENTERED_LINE_NUM },	
	{ 0xFAD6, R_ERR_PTR },              	
	{ 0xFAD8, R_ONERROR_ADDRESS },      	
	{ 0xFADA, R_BASIC_RUNNING },      	
	{ 0xFADD, R_BREAK_LINE_NUM },       	
	{ 0xFADF, R_BREAK_ADDRESS },        	
	{ 0xFAE1, R_DO_FILES_PTR },         	
	{ 0xFAE3, R_CO_FILES_PTR },         	
	{ 0xFAE5, R_VAR_PTR },              	
	{ 0xFAE7, R_ARRAY_TBL_PTR },        	
	{ 0xFAE9, R_UNUSED_MEM_PTR },       	
	{ 0xFAEB, R_DATA_SEARCH_ADDR },     	
	{ 0xFAED, R_DEF_TBL },              	
//	{ 0xFBE7, R_FP_TEMP1 },           	
	{ 0xFB28, R_FP_FAC1 },              	
	{ 0xFB24, R_INT_FAC1 },             	
//	{ 0xFC60, R_FP_TEMP2 },           	
	{ 0xFB2E, R_FP_FAC2 },              	
	{ 0xFB62, R_MAXFILES },             	
	{ 0xFB63, R_FILE_NUM_TBL_PTR },     	
	{ 0xFB78, R_BASIC_FILENAME },       	
	{ 0xFB81, R_LAST_LOAD_FILENAME },   	
	{ 0xFBC0, R_ALT_LCD_CHAR_BUF },     	
	{ 0xFD00, R_LCD_CHAR_BUF },
	{ 0xFE40, R_XON_XOFF_CTRL },        	
	{ 0xFE41, R_XON_XOFF_CTRL },        	
	{ 0xFE42, R_XON_XOFF_ENABLE },      	
	{ 0xFE43, R_RS232_INIT_STAT },      	
	{ 0xFE44, R_PORT_90H },             	
	{ 0xFEC4, R_RS232_CHAR_BUF },       	
	{ 0xFE45, R_RS232_BUF_CNT },        	
	{ 0xFE46, R_RS232_BUF_OUT },        	
	{ 0xFE47, R_RS232_BUF_IN },         	
	{ 0xFE49, R_CTRL_S_STAT },          	
	{ 0xFE4A, R_UART_BAUD_TIMER_VAL },  	
	{ 0xFE4C, R_RS232_PARITY_CTRL },    	
	{ 0xFE57, R_KEY_SCAN_STORAGE1 },    	
	{ 0xFE60, R_KEY_SCAN_STORAGE2 },    	
	{ 0xFE62, R_KEY_REPT_START },       	
	{ 0xFE66, R_2ND_KEY_BUF_PTR },      	
	{ 0xFE68, R_KEY_BUF_CNT },          	
	{ 0xFE69, R_KEY_TYPEAHEAD_BUF },   	
	{ 0xFEAB, R_CURSOR_BIT_PAT_BUF },   	
	{ -1, -1 }
};

Std_ROM_Addresses_t gN8300_Funs[] = {
	{ 0x0000, R_RESET_VECTOR },            
	{ 0x0008, R_COMP_BYTE_M },             
	{ 0x0010, R_GET_NONWHITE },            
	{ 0x0018, R_COMP_DE_HL },              
	{ 0x001E, R_PRINT_SPACE },             
	{ 0x0020, R_PRINT_CHAR },              
	{ 0x0024, R_PWR_DOWN_TRAP },           
	{ 0x0028, R_DET_LAST_VAR_TYPE },       
	{ 0x002C, R_RST_5_5 },                 
	{ 0x0030, R_GET_FAC1_SIGN },           
	{ 0x0034, R_RST_6_5 },                 
	{ 0x0038, R_RAM_VCTR_TBL_DRIVER },     
	{ 0x003C, R_RST_7_5 },                 
	{ 0x0040, R_FUN_VCTR_TBL },           
	{ 0x017E, R_BASIC_KEYWORD_TBL },       
//	{ 0x018F, R_FUN_KEYWORD_TBL1 },        
//	{ 0x01F0, R_FUN_KEYWORD_TBL2 },        
//	{ 0x0262, R_BASIC_VECTOR_TBL },        
//	{ 0x02E2, R_MATH_PRIORITY_TBL },       
	{ 0x03BD, R_MATH_VCTR_TBL },           
	{ 0x03E5, R_BASIC_ERR_MSG_TXT },       
	{ 0x042B, R_FUN_INIT_IMAGE },          
	{ 0x050C, R_FUN_BASIC_STRINGS },       
	{ 0x0523, R_POP_FOR_NEXT },            
	{ 0x0544, R_INIT_AND_READY },          
	{ 0x0568, R_GEN_SN_ERROR },            
	{ 0x056B, R_GEN_d0_ERROR },            
	{ 0x056E, R_GEN_NF_ERROR },            
	{ 0x0571, R_GEN_DD_ERROR },            
	{ 0x0574, R_GEN_RW_ERROR },            
	{ 0x0577, R_GEN_OV_ERROR },            
	{ 0x057A, R_GEN_MO_ERROR },            
	{ 0x057D, R_GEN_TM_ERROR },            
	{ 0x0585, R_GEN_ERR_IN_E },            
	{ 0x05B5, R_RESTORE_JMP_BC },          
	{ 0x05ED, R_PRINT_BASIC_ERR },         
	{ 0x0501, R_POP_GO_BASIC_RDY },        
	{ 0x062D, R_GO_BASIC_RDY_OK },         
	{ 0x063C, R_GO_BASIC_RDY },            
	{ 0x064E, R_PERFORM_M_GO_RDY },        
	{ 0x0714, R_UPDATE_LINE_ADDR },        
	{ 0x073A, R_EVAL_LIST_ARGS },          
	{ 0x075D, R_FIND_LINE_IN_DE },         
	{ 0x0760, R_FIND_LINE_DE_AT_HL },      
	{ 0x077B, R_TOKEN_COMPRESS },          
	{ 0x097B, R_FOR_STMT },                
	{ 0x09C0, R_TO_STMT },                 
	{ 0x09D8, R_STEP_STMT },               
	{ 0x0A1D, R_RUN_BASIC_PGRM },          
	{ 0x0A4F, R_RUN_BASIC_AT_HL },         
	{ 0x0A55, R_EXEC_INST_IN_A },          
	{ 0x0A77, R_RST_10H_INC_HL },          
	{ 0x0B4B, R_DEFDBL_STMT },             
	{ 0x0B45, R_DEFINT_STMT },             
	{ 0x0B48, R_DEFSNG_STMT },             
	{ 0x0B42, R_DEFSTR_STMT },             
	{ 0x0B4D, R_DECL_VAR_TYPE_E },         
	{ 0x0B87, R_GEN_FC_ERROR },            
	{ 0x0B8C, R_EVAL_LINE_NUM },           
	{ 0x0BAC, R_ASCII_TO_BIN_PREINC },     
	{ 0x0BD0, R_RUN_STMT },                
	{ 0x0BE6, R_GOSUB_STMT },              
	{ 0x0C19, R_GOTO_STMT },               
	{ 0x0C4E, R_GEN_UL_ERROR },            
	{ 0x0C53, R_RETURN_STMT },             
	{ 0x0C8C, R_DATA_STMT },               
	{ 0x0C8D, R_REM_STMT },                
	{ 0x0CB6, R_LET_STMT },                
	{ 0x0D22, R_ON_STMT },                 
	{ 0x0D27, R_ON_ERROR_STMT },           
	{ 0x0D4E, R_ON_KEY_STMT },             
	{ 0x0D87, R_ON_TIME_STMT },            
	{ 0x0DA3, R_RESUME_STMT },             
	{ 0x0DF5, R_ERROR_STMT },              
	{ 0x0E00, R_IF_STMT },                 
	{ 0x0E3D, R_LPRINT_STMT },             
	{ 0x0E45, R_PRINT_STMT },              
	{ 0x0EEB, R_TAB_STMT },                
	{ 0x0F32, R_LINE_STMT },               
	{ 0x0F82, R_INPUT_NO_STMT },           
	{ 0x0F8C, R_INPUT_STMT },              
	{ 0x0FBA, R_READ_STMT },               
	{ 0x1091, R_EVAL_BASIC_INST },         
	{ 0x120B, R_INT16_DIV },               
	{ 0x121A, R_EVAL_FUN },                
	{ 0x124D, R_ERR_FUN },                 
	{ 0x125C, R_ERL_FUN },                 
	{ 0x12A7, R_EVAL_VAR },                
	{ 0x12B5, R_CONV_M_TOUPPER },          
	{ 0x12B6, R_CONV_A_TOUPPER },          
	{ 0x1306, R_ASCII_NUM_CONV },          
	{ 0x1323, R_NOT_FUN },                 
	{ 0x1338, R_RST_28H },                 
	{ 0x1366, R_OR_FUN },                   
	{ 0x1371, R_AND_FUN },                 
	{ 0x137C, R_XOR_FUN },                 
	{ 0x1384, R_IMP_FUN },                 
	{ 0x1397, R_LPOS_FUN },                
	{ 0x139D, R_POS_FUN },                 
	{ 0x13A0, R_LD_FAC1_INT },             
//	{ 0x10E6, R_CHK_RUNNING_PGRM },        
//	{ 0x10EF, R_GEN_ID_ERROR },            
	{ 0x13B5, R_INP_FUN },                 
	{ 0x13C1, R_OUT_STMT },                
	{ 0x13C7, R_EVAL_EXPR },               
	{ 0x13C8, R_EVAL_EXPR_PREDEC },        
	{ 0x13E2, R_EVAL_EXPR },               
	{ 0x13E3, R_EVAL_EXPR_PREDEC },        
	{ 0x13F0, R_LLIST_STMT },              
	{ 0x13F5, R_LIST_STMT },               
	{ 0x1462, R_BUF_TO_LCD },              
	{ 0x15E0, R_PEEK_FUN },                
	{ 0x15E7, R_POKE_FUN },                
	{ 0x15F3, R_EVAL_EXPR },               
	{ 0x1617, R_RENUM_STMT },               
	{ 0x174D, R_WAIT_KEY },                
//	{ 0x13A5, R_TOGGLE_LABEL },            
	{ 0x183D, R_CHK_KEY_QUEUE },           
	{ 0x187B, R_POWER_STMT },              
	{ 0x1895, R_LOW_PWR_TRAP },            
	{ 0x18A9, R_POWER_DOWN },              
	{ 0x18C6, R_POWER_CONT_STMT },         
	{ 0x18CE, R_POWER_ON_STMT },           
	{ 0x18DD, R_OUT_CH_TO_LPT },           
	{ 0x18EF, R_LOAD_CAS_HDR },            
	{ 0x18FC, R_GEN_IO_ERROR },            
	{ 0x1901, R_DET_CAS_SYNC_HDR },        
	{ 0x1913, R_CAS_MOTOR_ON },            
	{ 0x1915, R_CAS_MOTOR_OFF },           
	{ 0x191B, R_CAS_READ_BYTE },           
	{ 0x192F, R_CAS_WRITE_BYTE },          
	{ 0x1942, R_LCD_DCB },                 
	{ 0x1948, R_LCD_OPEN },                
	{ 0x1955, R_LCD_OUT },                 
	{ 0x195D, R_POP_ALL_REGS },            
	{ 0x1962, R_CRT_DCB },                 
	{ 0x1974, R_RAM_DCB },                 
	{ 0x197E, R_RAM_OPEN },                
	{ 0x1A05, R_RAM_CLOSE },               
	{ 0x1A24, R_RAM_OUT },                 
	{ 0x1A3C, R_RAM_IN },                  
	{ 0x1A93, R_RAM_IO },                  
	{ 0x1AF7, R_CAS_DCB },                 
	{ 0x1B01, R_CAS_OPEN },                
	{ 0x1B25, R_CAS_CLOSE },               
	{ 0x1B3F, R_CAS_OUT },                 
	{ 0x1B4A, R_CAS_IN },                  
	{ 0x1BCC, R_LPT_DCB },                 
	{ 0x1BD2, R_LPT_OUT },                 
	{ 0x1BDA, R_COM_DCB },                 
//	{ 0x1BE4, R_MDM_OPEN },                
	{ 0x1BE4, R_COM_OPEN },                
	{ 0x1C01, R_COM_CLOSE },               
	{ 0x1C1D, R_COM_OUT },                 
	{ 0x1C28, R_COM_IN },                  
	{ 0x1C47, R_COM_IO },                  
//	{ 0x1C4E, R_MDM_DCB },                 
//	{ 0x17DB, R_MDM_CLOSE },               
	{ 0x1C4E, R_SET_RS232_PARAMS },        
	{ 0x1CEC, R_BCR_DCB },                 
	{ 0x1CFE, R_EOF_FUN },                 
	{ 0x1D74, R_TIME_FUN },                
	{ 0x1D7F, R_READ_TIME },               
	{ 0x1D9F, R_DATE_FUN },                
	{ 0x1DEE, R_UPDATE_CLK_VALUES },       
	{ 0x1DF9, R_TIME_STMT },               
//	{ 0x1DF9, R_UPDATE_CLK_CHIP },         
	{ 0x1E07, R_DATE_STMT },               
	{ 0x1E5B, R_GET_TIME_STRING },         
	{ 0x1E91, R_COM_MDM_STMT },            
	{ 0x1E9E, R_DET_TIME_ARG },            
	{ 0x1EB0, R_TEST_COM_TOKEN },            
//	{ 0x1AB2, R_KEY_FUN },                 
//	{ 0x1AC3, R_KEY_ON_OFF_STMT },         
//	{ 0x1AFC, R_DET_DEVICE_ARG },          
//	{ 0x1B0F, R_ONTIME_STMT },             
//	{ 0x1B22, R_ONCOM_STMT },              
	{ 0x1EBE, R_RST7_5_ISR },              
	{ 0x1EF4, R_KICK_PWR_OFF_WDT },        
//	{ 0x1BB8, R_KEY_STMT },                
//	{ 0x1BBD, R_KEY_LIST_STMT },           
	{ 0x1EFB, R_SEND_CHARS_TO_LCD },       
	{ 0x1F11, R_KEY_STMT },       
	{ 0x1F5E, R_PSET_STMT },               
	{ 0x1F6D, R_PRESET_STMT },             
//	{ 0x1F74, R_LINE_STMT },               
//	{ 0x1CA6, R_DRAW_FBOX },               
//	{ 0x1CBC, R_DRAW_BOX },                
	{ 0x1F74, R_TOKENIZE_XY },             
	{ 0x1FD4, R_CSRLIN_FUN },              
//	{ 0x1D9B, R_MAX_FUN },                 
//	{ 0x1DA7, R_MAXRAM_FUN },              
//	{ 0x1DB2, R_MAXFILES_FUN },            
//	{ 0x1DB9, R_HIMEM_FUN },               
	{ 0x1FDF, R_WIDTH_STMT },              
	{ 0x1FE1, R_CMD_STMT },              
	{ 0x1FE3, R_COLOR_STMT },              
	{ 0x1FE5, R_PRINT_STMT },              
	{ 0x1FE7, R_SOUND_STMT },              
//	{ 0x1DE5, R_SOUND_OFF_STMT },          
//	{ 0x1DE6, R_SOUND_ON_STMT },           
	{ 0x1FFD, R_MOTOR_STMT },              
	{ 0x2003, R_EXEC_STMT },           
	{ 0x201A, R_SCREEN_STMT },             
	{ 0x211D, R_FILES_STMT },              
	{ 0x2127, R_DISPLAY_CAT },             
	{ 0x217B, R_KILL_STMT },               
	{ 0x219B, R_KILL_TEXT_FILE },          
	{ 0x2220, R_NAME_STMT },               
	{ 0x22ED, R_NEW_STMT },                
	{ 0x233A, R_UPDATE_SYS_PTRS },
	{ 0x23F6, R_STRLEN },                  
	{ 0x2402, R_GET_FIND_DO_FILE },        
	{ 0x240B, R_OPEN_TEXT_FILE },    
	{ 0x2435, R_SAVE_TO_CATALOG },
	{ 0x25D2, R_CSAVE_STMT },              
	{ 0x264D, R_BSAVE_STMT },              
	{ 0x26D2, R_PROC_SAVEM_ARGS },
	{ 0x2703, R_BLOAD_STMT },              
	{ 0x27E4, R_CLOAD_ONERR },
	{ 0x27D1, R_CAS_READ_REC },           
	{ 0x2872, R_GEN_VERIFY_FAIL_ERR },     
	{ 0x2881, R_CLOADM_STMT },
	{ 0x28F8, R_LOAD_CO_HEADER },
/*	{ 0x22CC, R_SAVEM_STMT },              
	{ 0x22DD, R_CSAVEM_STMT },             
	{ 0x2377, R_CLOAD_STMT },              
	{ 0x2413, R_CAS_READ_REC },            
	{ 0x2478, R_GEN_VERIFY_FAIL_ERR },     
*/	{ 0x28FD, R_MOVE_B_BYTES },         
	{ 0x2906, R_EXEC_CO_FILE },         
/*	{ 0x260B, R_CAS_OPEN_OUT_BA },      
	{ 0x260E, R_CAS_OPEN_OUT_DO },      
	{ 0x2611, R_CAS_OPEN_OUT_CO },      
	{ 0x2650, R_CAS_OPEN_IN_BA },       
	{ 0x2653, R_CAS_OPEN_IN_DO },       
	{ 0x2656, R_CAS_OPEN_IN_CO },       
*/	
	{ 0x2A0C, R_CAS_OPEN_IN_BA },       
	{ 0x2AFB, R_STR_FUN },              
	{ 0x2B72, R_PRINT_STRING },         
	{ 0x2CC5, R_MEMCPY_CALL_ARGS },
	{ 0x2CD0, R_MOVE_L_BYTES },         
	{ 0x2D04, R_LEN_FUN },              
	{ 0x2D10, R_ASC_FUN },              
	{ 0x2D20, R_CHR_FUN },              
	{ 0x2D2E, R_STRING_FUN },           
	{ 0x2D48, R_SPACE_FUN },            
	{ 0x2D6C, R_LEFT_FUN },             
	{ 0x2D9D, R_RIGHT_FUN },            
	{ 0x2DA7, R_MID_FUN },              
	{ 0x2DD3, R_VAL_FUN },              
	{ 0x2E03, R_INSTR_FUN },            
	{ 0x2E8E, R_FRE_FUN },              
	{ 0x34F1, R_DBL_SUB },              
	{ 0x34FA, R_DBL_ADD },              
	{ 0x2C4F, R_BCD_ADD },              
	{ 0x3639, R_DBL_MULT },             
	{ 0x3691, R_DBL_DIV },              
	{ 0x3EBD, R_COS_FUN },              
	{ 0x3EC3, R_SIN_FUN },              
	{ 0x3F5E, R_TAN_FUN },              
	{ 0x3F73, R_ATN_FUN },              
	{ 0x2FFC, R_LOG_FUN },              
	{ 0x3D4D, R_SQR_FUN },              
	{ 0x3DAD, R_EXP_FUN },              
	{ 0x3E4A, R_RND_FUN },              
/*	{ 0x3182, R_INIT_TEMP3 },              
	{ 0x31A0, R_DBL_SQR },              
	{ 0x31A3, R_MULT_M_FAC2 },          
	{ 0x31B5, R_FAC2_EQ_FAC1 },         
	{ 0x31B8, R_FAC2_EQ_FP },           
	{ 0x31C1, R_FAC1_EQ_FAC2 },         
	{ 0x31C4, R_FAC1_EQ_FP },           
	{ 0x31CA, R_M_EQ_FAC1 },            
	{ 0x31CA, R_MULT_FAC1_SQR_FAC1 },   
	{ 0x31CA, R_SWAP_FAC1_FAC2 },       
	{ 0x31EB, R_SQR_FAC1_MULT_TBL },    
*/	{ 0x3E29, R_TBL_BASED_MATH },       
/*	{ 0x322E, R_PUSH_FAC2 },            
	{ 0x3234, R_PUSH_FAC1 },            
	{ 0x3245, R_POP_FAC2 },             
	{ 0x324B, R_POP_FAC1 },             
	{ 0x325C, R_FP_NUMBERS },           
	{ 0x327C, R_FP_SHARED_NUMBERS },    
	{ 0x327E, R_FP_NUMBERS },           
*/	{ 0x3DFD, R_EXP_MATH_TBL },         
	{ 0x32F7, R_EXP_MATH_TBL },         
	{ 0x2FDA, R_LOG_MATH_TBL },         
	{ 0x2FEB, R_LOG_MATH_TBL },         
	{ 0x3F49, R_SIN_MATH_TBL },         
	{ 0x3F98, R_ATN_MATH_TBL },         
	{ 0x3173, R_RST_30H_FUN },          
	{ 0x3195, R_ABS_FUN },              
	{ 0x31A8, R_SGN_FUN },              
	{ 0x31C3, R_PUSH_SNGL_FAC1 },       
	{ 0x31D0, R_SNGL_FAC1_EQ_M },       
	{ 0x31D3, R_SNGL_FAC1_EQ_BCDE },    
	{ 0x31DE, R_SNGL_BCDE_EQ_FAC1 },    
	{ 0x31E1, R_SNGL_BCDE_EQ_M },       
	{ 0x31E1, R_SNGL_DECB_EQ_M },       
	{ 0x31EA, R_SNGL_M_EQ_FAC1 },       
	{ 0x31F2, R_LOAD_FAC2_FROM_M },     
	{ 0x31F7, R_MOVE_B_BYTES_INC },     
/*	{ 0x3472, R_MOVE_B_BYTES_DEC },     
*/	{ 0x322E, R_SNGL_CMP_BCDE_FAC1 },   
	{ 0x3246, R_SNGL_CMP_BCDE_M },      
	{ 0x3259, R_SINT_CMP },             
	{ 0x3297, R_CMP_FAC1_FAC2 },        
	{ 0x329E, R_CINT_FUN },             
	{ 0x32BA, R_FAC1_EQ_SINT_HL },      
	{ 0x32D2, R_CSNG_FUN },             
	{ 0x32ED, R_CONV_SINT_SNGL },       
	{ 0x32F0, R_CONV_SINT_HL_SNGL },    
	{ 0x32FC, R_CDBL_FUN },             
/*	{ 0x35F8, R_SINT_SUB },             
*/	{ 0x3345, R_FIX_FUN },              
	{ 0x3354, R_INT_FUN },              
	{ 0x3403, R_SINT_ADD },             
	{ 0x3423, R_SINT_MULT },            
	{ 0x347A, R_SINT_DIV },             
	{ 0x2EBB, R_SNGL_ADD_BCDE },        
/*	{ 0x37F7, R_SNGL_ADD_FAC2 },        
*/	{ 0x2EC1, R_SNGL_SUB },             
/*	{ 0x3803, R_SNGL_MULT_BCDE },       
	{ 0x3806, R_SNGL_MULT_FAC2 },       
	{ 0x380E, R_SNGL_DIV },             
	{ 0x3827, R_SNGL_LOAD },            
*/	{ 0x371F, R_ASCII_TO_DBL },         
	{ 0x374E, R_ASCII_FND_e },          
	{ 0x3776, R_ASCII_FND_E },          
	{ 0x37C1, R_ASCII_FND_DOT },        
	{ 0x37CC, R_ASCII_FND_PERC },       
	{ 0x37D7, R_ASCII_FND_LB },         
	{ 0x37DF, R_ASCII_CONV_HELPER },    
	{ 0x380D, R_ASCII_CONV_HELPER2 },   
	{ 0x3890, R_PRNT_BASIC_ERR_TERM },  
	{ 0x3898, R_PRINT_HL_ON_LCD },      
	{ 0x38A7, R_PRINT_FAC1 },           
	{ 0x38AB, R_PRINT_FAC1_FORMAT },    
/*	{ 0x3D11, R_FAC1_EQ_ZERO },         
	{ 0x3D7F, R_SNGL_EXP },             
	{ 0x3D8E, R_DBL_EXP },              
	{ 0x3DF7, R_INT_EXP },              
	{ 0x3F28, R_INIT_BASIC_VARS },         
*/	{ 0x406A, R_TIME_ON_STMT },         
	{ 0x4073, R_TIME_OFF_STMT },        
	{ 0x4078, R_TIME_STOP_STMT },       
/*	{ 0x3FD2, R_TRIG_INTR },            
	{ 0x3FF1, R_CLEAR_INTR },           
*/	{ 0x408D, R_CLEAR_COM_INT_DEF },    
	{ 0x40CF, R_RESTORE_STMT },         
	{ 0x40EA, R_STOP_STMT },            
	{ 0x40EF, R_END_STMT },             
	{ 0x412A, R_CONT_STMT },            
	{ 0x4141, R_ISALPHA_M },            
	{ 0x4142, R_ISALPHA_A },            
	{ 0x4149, R_CLEAR_STMT },           
	{ 0x41CA, R_NEXT_STMT },            
	{ 0x4251, R_SEND_CRLF },            
	{ 0x4254, R_SEND_LF },              
	{ 0x4258, R_BEEP_STMT },            
	{ 0x425C, R_HOME_CURSOR },          
	{ 0x4260, R_CLS_STMT },             
	{ 0x4264, R_PROTECT_LABEL },        
	{ 0x4269, R_UNPROT_LABEL },         
	{ 0x426E, R_STOP_AUTO_SCROLL },     
	{ 0x4273, R_RESUME_AUTO_SCROLL },   
	{ 0x4278, R_TURN_CURSOR_ON },       
	{ 0x427D, R_TURN_CURSOR_OFF },      
	{ 0x4282, R_DEL_CUR_LINE },         
	{ 0x4287, R_INSERT_LINE },          
	{ 0x428C, R_ERASE_TO_EOL },         
	{ 0x4291, R_SEND_ESC_X },           
	{ 0x42A2, R_INV_CHAR_ENABLE },      
	{ 0x42A7, R_INV_CHAR_DISABLE },     
	{ 0x42A9, R_END_ESC_SEQ },          
	{ 0x42B0, R_CURSOR_TO_LOW_LEFT },   
	{ 0x42B5, R_SET_CURSOR_POS },       
	{ 0x42C3, R_ERASE_FKEY_DISP },      
	{ 0x42E1, R_SET_DISP_FKEY },        
	{ 0x42E4, R_DISP_FKEY_LINE },       
	{ 0x4363, R_PRINT_A_TO_LCD },       
//	{ 0x44AA, R_CHAR_PLOT_3 },          
	{ 0x4380, R_CHAR_PLOT_4 },          
	{ 0x4395, R_CHAR_PLOT_5 },             
	{ 0x43D2, R_LCD_OUT_DRIVER },       
	{ 0x43EF, R_RST_20H_LKUP_TBL },     
	{ 0x4420, R_ESC_Y },                
//	{ 0x4429, R_LCD_OUT_ESC_FUN },      
	{ 0x4429, R_LCD_ESC_LKUP_TBL },     
	{ 0x4471, R_ESC_SEQ_DRIVER },       
	{ 0x44AA, R_ESC_p_FUN },            
	{ 0x44AB, R_ESC_q_FUN },            
	{ 0x44B0, R_ESC_U_FUN },            
	{ 0x44B2, R_ESC_T_FUN },            
	{ 0x44B3, R_ESC_X_FUN },            
	{ 0x44BE, R_ESC_V_FUN },            
	{ 0x44BF, R_ESC_W_FUN },            
	{ 0x44D2, R_ESC_C_FUN },            
	{ 0x44DB, R_ESC_D_FUN },            
	{ 0x44E0, R_BKSPACE_FUN },          
	{ 0x44E8, R_ESC_A_FUN },            
	{ 0x44ED, R_ESC_B_FUN },            
	{ 0x4505, R_TAB_FUN },              
/*	{ 0x4494, R_LF_FUN },               
*/	{ 0x451B, R_ESC_H_FUN },            
	{ 0x451D, R_CR_FUN },               
/*	{ 0x44AF, R_ESC_P_FUN },            
	{ 0x44BA, R_ESC_Q_FUN },            
*/	{ 0x4530, R_ESC_M_FUN },            
	{ 0x4550, R_LCD_SCROLL },           
	{ 0x44EA, R_ESC_L_FUN },            
	{ 0x4568, R_GET_LCD_CHAR },         
	{ 0x45B9, R_ESC_l_FUN },            
	{ 0x45BB, R_ESC_K_FUN },            
	{ 0x45CC, R_CLS_FUN },              
	{ 0x45D2, R_ESC_J_FUN },            
	{ 0x45E4, R_CHAR_PLOT_6 },          
	{ 0x47A4, R_INP_DISP_LINE },        
	{ 0x4798, R_INP_DISP_LINE_NO_Q },   
	{ 0x485D, R_INP_CTRL_C_HANDLER },   
	{ 0x4814, R_INP_ENTER_HANDLER },    
	{ 0x4909, R_INP_BKSP_HANDLER },     
	{ 0x4952, R_INP_CTRL_U_HANDLER },   
/*	{ 0x46CA, R_INP_TAB_HANDLER },      
*/	{ 0x49AA, R_DIM_STMT },             
	{ 0x4BA0, R_FIND_VAR_ADDR },        
	{ 0x4BA1, R_USING_FUN },            
	{ 0x4CFA, R_SEND_A_LCD_LPT },       
	{ 0x4D0B, R_PRINT_A_EXPAND },       
	{ 0x4D3B, R_SET_OUT_DEV_LCD },      
	{ 0x4D54, R_LCD_CHAR_OUT_FUN },     
	{ 0x4D61, R_LCD_NEW_LINE },         
	{ 0x4D93, R_INKEY_FUN },            
	{ 0x4E30, R_GET_FILE_DESC },        
	{ 0x4E77, R_OPEN_STMT },            
	{ 0x4F05, R_LCD_CLOSE_FUN },        
	{ 0x4F1A, R_RUN_STMT },             
	{ 0x4F1C, R_LOAD_STMT },            
	{ 0x4F1D, R_MERGE_STMT },           
	{ 0x4F74, R_SAVE_STMT },            
	{ 0x4FC5, R_CLOSE_STMT },           
	{ 0x5029, R_INPUT_STMT },           
	{ 0x50A0, R_CLEAR_MEM },            
	{ 0x50A1, R_LOAD_MEM },             
	{ 0x50C4, R_PRINT_LB_INIT_FUN },    
	{ 0x50F1, R_LINE_INPUT_STMT },      
	{ 0x51E4, R_GEN_NM_ERR_FUN },       
	{ 0x51E7, R_GEN_AO_ERR_FUN },       
	{ 0x51EA, R_GEN_DS_ERR_FUN },       
	{ 0x51ED, R_GEN_FF_ERR_FUN },       
	{ 0x51F0, R_GEN_CF_ERR_FUN },       
	{ 0x51F3, R_GEN_BN_ERR_FUN },       
	{ 0x51F6, R_GEN_IE_ERR_FUN },       
	{ 0x51F9, R_GEN_EF_ERR_FUN },       
	{ 0x51FC, R_GEN_FL_ERR_FUN },       
	{ 0x5201, R_LOF_FUN },              
	{ 0x5203, R_LOC_FUN },              
	{ 0x5205, R_LFILES_FUN },           
	{ 0x5207, R_DSKO_FUN },             
	{ 0x5209, R_DSKI_FUN },             
	{ 0x520B, R_DSKF_FUN },             
	{ 0x520F, R_FORMAT_FUN },             
	{ 0x528D, R_DEV_NAME_TBL },         
	{ 0x52AB, R_DCB_VCTR_TBL },         
	{ 0x52DC, R_TELCOM_ENTRY },         
	{ 0x52F5, R_TELCOM_RE_ENTRY },      
//	{ 0x5321, R_TELCOM_INST_VCTR_TBL }, 
	{ 0x534D, R_TELCOM_STAT_FUN },      
	{ 0x5353, R_PRINT_TELCOM_STAT },    
	{ 0x5371, R_TELCOM_LABEL_TXT },     
/*	{ 0x51ED, R_SET_TELCOM_STAT },      
	{ 0x522F, R_TELCOM_CALL_FUN },      
	{ 0x524D, R_TELCOM_FIND_FUN },      
	{ 0x52B4, R_GO_OFFHOOK },           
	{ 0x52BB, R_DISCONNECT_PHONE },     
	{ 0x52D0, R_CONNECT_PHONE },        
	{ 0x52E4, R_GO_OFFHOOK_WAIT },      
	{ 0x5310, R_TELCOM_PAUSE },         
	{ 0x532D, R_EXEC_LOGON_SEQ },       
	{ 0x5359, R_DIALING_FUN },          
	{ 0x539E, R_AUTO_LOGIN_SEQ },       
	{ 0x540A, R_DIAL_DIGIT },           
*/	{ 0x5388, R_TELCOM_TERM_FUN },      
	{ 0x5434, R_TELCOM_DISPATCH },      
	{ 0x5445, R_TERM_FKEY_VCTR_TBL },   
	{ 0x5459, R_TELCOM_PREV_FUN },      
	{ 0x5474, R_TELCOM_FULL_FUN },      
	{ 0x5486, R_TELCOM_ECHO_FUN },      
	{ 0x54C5, R_TELCOM_UP_FUN },        
	{ 0x5550, R_TELCOM_DOWN_FUN },      
	{ 0x55F0, R_TELCOM_BYE_FUN },       
	{ 0x563F, R_PRINT_STRING },         
	{ 0x5645, R_MENU_ENTRY },           
/*	{ 0x57F8, R_DISP_DIR },             
	{ 0x5837, R_MENU_CTRL_U_HANDLER },  
	{ 0x585A, R_MENU_CMD_LOOP },        
	{ 0x588E, R_MENU_BKSP_HANDLER },    
*/	{ 0x5822, R_MENU_ENTER_HANDLER },   
	{ 0x5888, R_EXEC_ROM_FILE },        
	{ 0x5D08, R_DISP_DIR_TYPE_C },      
	{ 0x5D3F, R_CONV_FILENAME },        
	{ 0x5D67, R_NEXT_DIR_ENTRY },       
	{ 0x5D83, R_CLS_PRINT_TIME_DAY },   
	{ 0x5D86, R_PRINT_TIME_DAY },       
	{ 0x5DA2, R_PRINT_STRING2 },        
	{ 0x5DAC, R_COPY_MEM_DE_M },        
	{ 0x5DCD, R_CMP_MEM_DE_M },         
//	{ 0x5A79, R_CLEAR_FKEY_TBL },       
	{ 0x5DDC, R_SET_FKEYS },            
	{ 0x5DFB, R_DISP_FKEYS },           
	{ 0x5E5B, R_GET_FILE_ADDR },        
	{ 0x5E61, R_DIR_DISP_ORDER_TBL },   
	{ 0x5F48, R_FIND_TEXT_IN_FILE },    
	{ 0x5F76, R_CHECK_FOR_CRLF },       
	{ 0x5FA0, R_GET_KEY_CONV_TOUPPER }, 
	{ 0x5FA6, R_PRINT_TIME_LOOP },      
	{ 0x5FC4, R_TEXT_ENTRY },           
	{ 0x5FF8, R_TEXT_FKEY_TBL },        
	{ 0x6030, R_EDIT_STMT },            
	{ 0x612A, R_EDIT_DO_FILE_FUN },     
	{ 0x61B6, R_TEXT_EDIT_LOOP },       
	{ 0x61EF, R_TEXT_CTRL_VCTR_TBL },   
	{ 0x622F, R_TEXT_ESC_FUN },         
	{ 0x6258, R_TEXT_CTRL_I_FUN },      
	{ 0x628C, R_TEXT_CTRL_M_FUN },      
	{ 0x62AC, R_TEXT_CTRL_D_FUN },      
	{ 0x62B0, R_TEXT_CTRL_X_FUN },      
	{ 0x62D9, R_TEXT_CTRL_H_FUN },      
	{ 0x631F, R_TEXT_CTRL_S_FUN },      
	{ 0x6323, R_TEXT_CTRL_E_FUN },      
	{ 0x6348, R_TEXT_CTRL_F_FUN },      
	{ 0x635A, R_TEXT_CTRL_A_FUN },      
	{ 0x6390, R_TEXT_CTRL_T_FUN },      
	{ 0x63A5, R_TEXT_CTRL_B_FUN },      
	{ 0x63CB, R_TEXT_CTRL_R_FUN },      
	{ 0x63D9, R_TEXT_CTRL_Q_FUN },      
	{ 0x63DE, R_TEXT_CTRL_W_FUN },      
	{ 0x63EA, R_TEXT_CTRL_Z_FUN },      
	{ 0x6410, R_TEXT_CTRL_L_FUN },      
	{ 0x645D, R_TEXT_CTRL_C_FUN },      
	{ 0x65BF, R_TEXT_GET_NEXT_BYTE },   
	{ 0x6606, R_TEXT_CTRL_O_FUN },      
	{ 0x661A, R_TEXT_CTRL_U_FUN },      
	{ 0x6736, R_TEXT_CTRL_N_FUN },      
	{ 0x67A8, R_COPY_NULL_STRING },     
	{ 0x6BFE, R_INSERT_A_INTO_FILE },   
	{ 0x6C0A, R_INSERT_SPACES },        
	{ 0x6C3C, R_DELETE_CHARS },         
	{ 0x6C78, R_MOVE_BC_BYTES_INC },    
	{ 0x6C83, R_MOVE_BC_BYTES_DEC },    
	{ 0x6C8E, R_ROM_CAT_ENTRIES },      
	{ 0x6CD0, R_BASIC_ENTRY },          
	{ 0x6CF7, R_LOAD_BASIC_FKEYS },     
	{ 0x6D00, R_LOAD_BASIC_FKEYS },     
	{ 0x6D3A, R_RE_INIT_SYSTEM },       
	{ 0x6D44, R_WARM_RESET },           
	{ 0x6D92, R_SEND_A_TO_LPT },        
	{ 0x6DC2, R_CHECK_RS232_QUEUE },    
	{ 0x6DD3, R_READ_RS232_QUEUE },     
	{ 0x6E00, R_RST_6_5_FUN },          
	{ 0x6E84, R_INC_RS232_QUEUE_IN },   
	{ 0x6E97, R_SEND_XON },             
	{ 0x6EAA, R_DISABLE_XON_XOFF },     
	{ 0x6EBE, R_SEND_A_USING_XON },     
	{ 0x6EDC, R_SEND_C_TO_RS232 },      
	{ 0x6EF9, R_XON_XOFF_HANDLER },     
	{ 0x6F21, R_SET_RS232_BAUD_RATE },  
	{ 0x6F40, R_RS232_BAUD_TIMER_VALS },
	{ 0x6F52, R_INIT_RS232_MDM },       
	{ 0x6FA8, R_UNINIT_RS232_MDM },     
//	{ 0x6EE5, R_CLICK_SND_PORT },       
//	{ 0x6EEF, R_CHECK_CD },             
	{ 0x6F8D, R_ENABLE_XON_XOFF },      
	{ 0x6F95, R_INIT_SER_BUF_PARAMS },  
	{ 0x6FD9, R_CAS_MOTOR_ON },            
	{ 0x7047, R_CAS_WRITE_HEADER },     
	{ 0x6FEB, R_CAS_WRITE_NO_CHKSUM },  
	{ 0x6FF8, R_CAS_WRITE_BIT },        
	{ 0x7059, R_CAS_READ_HEADER },      
	{ 0x70AF, R_CAS_READ_BIT },         
//	{ 0x7023, R_CAS_COUNT_BITS },       
	{ 0x708E, R_CAS_READ_NO_CHKSUM },   
	{ 0x70CD, R_KEYSCAN_MGT_FUN },      
	{ 0x70D8, R_KEY_DETECTION },        
	{ 0x713C, R_KEY_REPEAT_DET },       
	{ 0x7195, R_KEY_DECODE },           
	{ 0x7230, R_KEY_FIRST_IN_BUF },     
	{ 0x7253, R_KEY_ADD_TO_BUF },       
	{ 0x7266, R_ISR_EXIT_FUN },         
/*	{ 0x720A, R_UNSHIFTED_KEY },        
	{ 0x7222, R_ARROW_KEY },            
	{ 0x722C, R_CAPS_LOCK_KEY },        
	{ 0x7233, R_NUM_KEY },              
*/	{ 0x7279, R_SCAN_KEYBOARD },        
	{ 0x72A0, R_ENABLE_INTERRUPTS },    
	{ 0x72A6, R_CHK_PENDING_KEYS },     
	{ 0x72B9, R_CHK_BREAK },            
	{ 0x72DF, R_CHK_SHIFT_BREAK },      
//	{ 0x72B1, R_SCAN_SPECIAL_KEYS },    
	{ 0x730D, R_GEN_TONE },             
	{ 0x7359, R_GET_CLK_CHIP_REGS },    
	{ 0x735A, R_PUT_CLK_CHIP_REGS },    
	{ 0x7382, R_READ_CLK_CHIP_BIT },    
	{ 0x73B3, R_SET_CLK_CHIP_MODE },    
	{ 0x7409, R_BLINK_CURSOR },         
	{ 0x744D, R_CHAR_PLOT_7 },          
	{ 0x74D0, R_PLOT_POINT },           
	{ 0x74D1, R_CLEAR_POINT },          
	{ 0x7526, R_LCD_BYTE_PLOT },        
	{ 0x75BC, R_ENABLE_LCD_DRIVER },    
	{ 0x75D1, R_WAIT_LCD_DRIVER },      
	{ 0x75DA, R_LCD_BIT_PATTERNS },     
	{ 0x76CC, R_LCD_BIT_PATTERNS },     
	{ 0x76E0, R_DELAY_FUN },            
	{ 0x76E5, R_SET_INTR_1DH },         
	{ 0x76EB, R_BEEP_FUN },             
	{ 0x76FF, R_CLICK_SOUND_PORT },     
//	{ 0x7682, R_CHK_XTRNL_CNTRLER },    
//	{ 0x768F, R_XTRNL_CNTRLER_DRIVER }, 
	{ 0x78B7, R_LCD_CHAR_SHAPE_TBL1 },  
	{ 0x7A97, R_LCD_CHAR_SHAPE_TBL2 },  
/*	{ 0x7BF1, R_KEYBOARD_CONV_MATRIX }, 
*/	{ 0x7C94, R_BOOT_ROUTINE },         
	{ 0x7D83, R_COLD_BOOT },            
	{ 0x7E3E, R_DISP_MODEL },           
	{ 0x7E52, R_DISP_FREE_BYTES },      
	{ 0x7E66, R_INIT_RST_38H_TBL },     
	{ 0x7E81, R_CALC_FREE_RAM },        
	{ 0x7EA1, R_INIT_CLK_CHIP_REGS },   
	{ 0x7F98, R_MENU_TEXT_STRINGS },    
	{ 0x7FBE, R_RST_38H_DRIVER },       
/*	{ 0xF5F9, R_RST_5_5_VECTOR },       
	{ 0xF5FC, R_RST_6_5_VECTOR },       
	{ 0xF5FF, R_RST_7_5_VECTOR },       
	{ 0xF602, R_TRAP_VECTOR },          
	{ 0xF605, R_DETECT_OPTION_ROM },       
*/	{ -1, -1 }
};

RomDescription_t gN8300_Desc = {
	0x31303238,					/* Signature */
	0x7F9C,						/* Signature address */
	1,                          /* StdRom */

	gN8300_Tables,				/* Known tables */
	gN8300_Vars,				/* Known variables */
	gN8300_Funs,				/* Known functions */

	0xF979,                     /* Address of unsaved BASIC prgm */
	0xF87C,                     /* Address of next DO file */
	0xFAE1,                     /* Start of DO file area */
	0xFAE3,                     /* Start of CO file area */
	0xFAE5,                     /* Start of Variable space */
	0xFAE7,                     /* Start of Array data */
	0xFAE9,                     /* Pointer to unused memory */
	0xF384,                     /* Address where HIMEM is stored */
	0xF462,                     /* End of RAM for file storage */
	0xF9B0,                     /* Lowest RAM used by system */
	0xF84F,                     /* Start of RAM directory */
	0xF459,                     /* BASIC string	buffer pointer */
	0xF9CA,						/* BASIC Size */
	0xFE58,						/* Keyscan array */
	0x78B7,						/* Character generator array */
	0xF83C,						/* Location of Year storage */
	0xFD00,						/* LCD Buffer storage area */
	0xF3E9,						/* Label line enable flag (not defined) */

	24,							/* Number of directory entries */
	8,							/* Index of first Dir entry */
	0x7FAE						/* Address of MS Copyright string */
};

