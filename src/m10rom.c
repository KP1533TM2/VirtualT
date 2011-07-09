/* m10rom.c */

/* $Id: m10rom.c,v 1.2 2008/03/01 15:41:11 kpettit1 Exp $ */

/*
 * Copyright 2007 Ken Pettit
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


Std_ROM_Table_t	gM10_Tables[] = {
	{ 0x0003, 5,   TABLE_TYPE_STRING },
	{ 0x0040, 64,  TABLE_TYPE_JUMP },
	{ 0x0080, 271, TABLE_TYPE_MODIFIED_STRING },
	{ 0x018F, 97,  TABLE_TYPE_MODIFIED_STRING },
	{ 0x01F0, 112, TABLE_TYPE_MODIFIED_STRING },
	{ 0x0262, 140, TABLE_TYPE_JUMP },
	{ 0x02EE, 46,  TABLE_TYPE_JUMP },
	{ 0x031C, 62,  TABLE_TYPE_2BYTE },
	{ 0x036F, 130, TABLE_TYPE_CODE },
	{ 0x03F1, 23,  TABLE_TYPE_STRING },
	{ 0x0C7B, 19,  TABLE_TYPE_STRING },
	{ 0x0D78, 17,  TABLE_TYPE_STRING },
	{ 0x14DD, 6,   TABLE_TYPE_JUMP },
	{ 0x14FD, 6,   TABLE_TYPE_JUMP },
	{ 0x1507, 10,  TABLE_TYPE_JUMP },
	{ 0x168A, 10,  TABLE_TYPE_JUMP },
	{ 0x175F, 6,   TABLE_TYPE_JUMP },
	{ 0x176D, 10,  TABLE_TYPE_JUMP },
//	{ 0x17D1, 10,  TABLE_TYPE_JUMP },
	{ 0x1844, 10,  TABLE_TYPE_JUMP },
	{ 0x1942, 21,  TABLE_TYPE_3BYTE },
	{ 0x2459, 16,  TABLE_TYPE_STRING },
	{ 0x25AD, 18,  TABLE_TYPE_STRING },
	{ 0x26D7, 14,  TABLE_TYPE_STRING },
	{ 0x3235, 32,  TABLE_TYPE_CODE },
	{ 0x3255, 2,   TABLE_TYPE_CODE },
	{ 0x3257, 88,  TABLE_TYPE_CODE },
	{ 0x32AF, 1,   TABLE_TYPE_CODE },
	{ 0x32B0, 32,  TABLE_TYPE_CODE },
	{ 0x32D0, 1,   TABLE_TYPE_CODE },
	{ 0x32D1, 24,  TABLE_TYPE_CODE },
	{ 0x32E9, 1,   TABLE_TYPE_CODE },
	{ 0x32EA, 32,  TABLE_TYPE_CODE },
	{ 0x330A, 1,   TABLE_TYPE_CODE },
	{ 0x330B, 40,  TABLE_TYPE_CODE },
	{ 0x3333, 1,   TABLE_TYPE_CODE },
	{ 0x3334, 64,  TABLE_TYPE_CODE },
	{ 0x3374, 1,   TABLE_TYPE_CODE },
	{ 0x3375, 64,  TABLE_TYPE_CODE },
	{ 0x436A, 24,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x4398, 66,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x4623, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x50B8, 29,  TABLE_TYPE_CTRL_DELIM },
	{ 0x50D6, 14,  TABLE_TYPE_JUMP },
	{ 0x5143, 9,   TABLE_TYPE_STRING },
	{ 0x514C, 18,  TABLE_TYPE_4BYTE_CMD },
	{ 0x515E, 1,   TABLE_TYPE_CODE },
	{ 0x515F, 20,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5191, 18,  TABLE_TYPE_MODIFIED_STRING3 },
//	{ 0x51E7, 6,   TABLE_TYPE_STRING },
//	{ 0x5244, 9,   TABLE_TYPE_STRING },
//	{ 0x5443, 18,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5255, 16,  TABLE_TYPE_JUMP },
	{ 0x5265, 1,   TABLE_TYPE_CODE },
	{ 0x52CB, 18,  TABLE_TYPE_STRING },
	{ 0x52DD, 6,   TABLE_TYPE_STRING },
	{ 0x52E3, 2,   TABLE_TYPE_CODE },
	{ 0x5481, 53,  TABLE_TYPE_STRING },
	{ 0x580C, 36,  TABLE_TYPE_3BYTE },
	{ 0x5830, 17,  TABLE_TYPE_STRING },
	{ 0x5841, 6,   TABLE_TYPE_CODE },
	{ 0x5847, 19,  TABLE_TYPE_STRING },
	{ 0x585A, 15,  TABLE_TYPE_CODE },
	{ 0x5869, 34,  TABLE_TYPE_CTRL_DELIM },
	{ 0x59F1, 33,  TABLE_TYPE_STRING },
	{ 0x5A12, 18,  TABLE_TYPE_4BYTE_CMD },
	{ 0x5A24, 1,   TABLE_TYPE_CODE },
	{ 0x5A25, 8,   TABLE_TYPE_STRING },
	{ 0x5A2D, 51,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5B35, 13,  TABLE_TYPE_STRING },
	{ 0x5B42, 8,   TABLE_TYPE_CODE },
	{ 0x5B4A, 36,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5C58, 17,  TABLE_TYPE_STRING },
	{ 0x5C69, 2,   TABLE_TYPE_CODE },
	{ 0x5C6B, 26,  TABLE_TYPE_STRING },
//	{ 0x5F60, 5,   TABLE_TYPE_STRING },
	{ 0x5D36, 64,  TABLE_TYPE_JUMP },
	{ 0x5DD1, 13,  TABLE_TYPE_STRING },
	{ 0x62EE, 17,  TABLE_TYPE_STRING },
	{ 0x637D, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x642C, 7,   TABLE_TYPE_STRING },
	{ 0x6455, 9,   TABLE_TYPE_STRING },
	{ 0x6911, 88,  TABLE_TYPE_CATALOG },
	{ 0x6BD6, 18,  TABLE_TYPE_JUMP },
	{ 0x726B, 240, TABLE_TYPE_CODE },
	{ 0x735D, 20,  TABLE_TYPE_CODE },
	{ 0x7425, 6,   TABLE_TYPE_CODE },
	{ 0x742B, 96*5,   TABLE_TYPE_CODE },
	{ 0x760B, 128*6,  TABLE_TYPE_CODE },
	{ 0x790B, 322-42, TABLE_TYPE_CODE },
	{ 0x7BF3, 14,  TABLE_TYPE_CODE },
	{ 0x7C8A, 36,  TABLE_TYPE_STRING },
	{ 0x7CAE, 21,  TABLE_TYPE_STRING },
	{ 0x7CFB, 773,  TABLE_TYPE_CODE },
	{ -1, 0, 0 }
};

Std_ROM_Addresses_t gM10_Vars[] = {
	{ 0x0040, R_FUN_VCTR_TBL },			
	{ 0x0080, R_BASIC_TBL },				
	{ 0x018E, R_FUN_TBL_TAB },			
	{ 0x01F0, R_FUN_TBL_SGN },			
	{ 0x0262, R_BASIC_VCTR_TBL },		
	{ 0x02EE, R_MATH_VCTR_TBL },			
	{ 0x031A, R_BASIC_ERR_TXT },			
	{ 0x035A, R_INIT_IMAGE },				
	{ 0x036F, R_XROM_DET_IMAGE },			
	{ 0x03F1, R_BASIC_STRINGS },			
	{ 0x1F24, R_CAS_FREQ_CNT },			
	{ 0x4349, R_CAS_FREQ_CNT },			
	{ 0x551D, R_TERM_FKEY_VCTR_TBL },		
	{ 0x5841, R_DIR_DISP_ORDER_TBL },		
	{ 0x5B42, R_TEXT_FKEY_VCTR_TBL },		
	{ 0x6911, R_ROM_CAT_ENTRIES },		
	{ 0x6F02, R_INT_EXIT_FUN },			
	{ 0x6F03, R_INT_EXIT_FUN },			
	{ 0x726B, R_8155_PIO_PAT1 },			
	{ 0x735D, R_8155_PIO_PAT2 },			
	{ 0x7BF3, R_INIT_CLK_VALUES },		
	{ 0x7C8A, R_MENU_STRINGS },			
	{ 0x7C96, R_MODEL_NUM_STRING },		
	{ 0xF5F0, R_ACTIVE_SIGNATURE },		
	{ 0xF5F4, R_HIMEM },					
	{ 0xF5F9, R_RST_5_5_VCTR },			
	{ 0xF5FC, R_RST_6_5_VCTR },			
	{ 0xF5FF, R_RST_7_5_VCTR },			
	{ 0xF602, R_TRAP_VCTR },            	
	{ 0xF62A, R_OPTION_ROM_FLAG },      	
	{ 0xF637, R_FKEY_STAT_TBL },        	
	{ 0xF63F, R_NEW_CONSOLE_FLAG },     	
	{ 0xF640, R_CURSOR_ROW },
	{ 0xF641, R_CURSOR_COL },           	
	{ 0xF642, R_ACTIVE_ROW_CNT },       	
	{ 0xF643, R_ACTIVE_COL_CNT },       	
	{ 0xF644, R_LABEL_LINE_PROT },      	
	{ 0xF645, R_SCROLL_DISABLE },       	
	{ 0xF646, R_CURSOR_STAT },          	
	{ 0xF647, R_CURSOR_ROW2 },          	
	{ 0xF648, R_CURSOR_COL2 },          	
	{ 0xF64D, R_ESC_MODE_FLAG },        	
	{ 0xF64F, R_REV_VID_SWITCH },       	
	{ 0xF655, R_LAST_PLOT_X },          	
	{ 0xF656, R_LAST_PLOT_Y },          	
	{ 0xF65D, R_PWR_OFF_STAT },         	
	{ 0xF65F, R_DUPLEX_SWITCH },        	
	{ 0xF662, R_RS232_PARAM_TBL },      	
	{ 0xF668, R_ADDRESS_LAST_CALLED },  	
	{ 0xF66E, R_OUT_STMT_HOOK },        	
	{ 0xF671, R_INP_STMT_HOOK },        	
	{ 0xF679, R_LAST_ERROR_CODE },      	
	{ 0xF67B, R_LPT_HEAD_POS },         	
	{ 0xF67C, R_OUTPUT_DEVICE },        	
	{ 0xF67F, R_BASIC_STR_BUF_PTR },    	
	{ 0xF681, R_CUR_BASIC_LINE_NUM },   	
	{ 0xF683, R_START_BASIC_PGM_PTR },  	
	{ 0xF687, R_END_OF_STMT_MARKER },   	
	{ 0xF68C, R_KEYBOARD_BUF },         	
	{ 0xF78F, R_CURSOR_H_POS },         	
	{ 0xF790, R_FKEY_DEF_BUF },         	
	{ 0xF811, R_BASIC_FKEY_DEF_BUF },   	
	{ 0xF893, R_FILE_RAM_END },         	

	{ 0xF92A, R_SEC_ONES },             	
	{ 0xF92B, R_SEC_TENS },             	
	{ 0xF92C, R_MIN_ONES },             	
	{ 0xF92D, R_MIN_TENS },             	
	{ 0xF92E, R_HR_ONES },              	
	{ 0xF92F, R_HR_TENS },              	
	{ 0xF930, R_DATE_ONES },            	
	{ 0xF931, R_DATE_TENS },            	
	{ 0xF932, R_DAY_CODE },             	
	{ 0xF933, R_MONTH },                	
	{ 0xF934, R_YEAR_ONES },            	
	{ 0xF935, R_YEAR_TENS },            	
	{ 0xF93A, R_SEC_ONES2 },            	
	{ 0xF93B, R_SEC_TENS2 },            	
	{ 0xF93C, R_MIN_ONES2 },            	
	{ 0xF93D, R_MIN_TENS2 },            	
	{ 0xF93E, R_HR_ONES2 },             	
	{ 0xF93F, R_HR_TENS2 },             	
	{ 0xF940, R_DATE_ONES2 },           	
	{ 0xF941, R_DATE_TENS2 },           	
	{ 0xF942, R_DAY_CODE2 },            	
	{ 0xF944, R_ONTIME_TIME },          	
	{ 0xF94B, R_ONCOM_FLAG },           	
	{ 0xF94C, R_ONCOM_ADDRESS },        	
	{ 0xF94E, R_ONTIME_FLAG },          	
	{ 0xF94F, R_ONTIME_ADDRESS },       	
	{ 0xF950, R_FKEY_VCTR_TBL },        	
	{ 0xF969, R_DIR_RAM_START },        	
	{ 0xF9A1, R_UNSAVED_BASIC_PTR },    	
	{ 0xF9AC, R_PASTE_RAM_START },      	
	{ 0xFAB3, R_LAST_CHAR_PRINTED },    	
	{ 0xFAB4, R_LABEL_ENABLE_FLAG },    	
	{ 0xFAB6, R_IPL_FILENAME_START },   	
	{ 0xFAC1, R_BASIC_LIST_START },     	
	{ 0xFAC5, R_SP_SAVE_BUF },          	
	{ 0xFAC7, R_LOWEST_RAM },           	
	{ 0xFAD0, R_RST_38H_OFFSET },       	
	{ 0xFAD6, R_LAST_PGRM_LEN },        	
	{ 0xFAE0, R_RST_38H_VCTR_TBL },     	
	{ 0xFAE8, R_LCD_OUTPUT_HOOK },      	
	{ 0xFAEA, R_LPT_OUTPUT_HOOK },      	
	{ 0xFB76, R_VAR_CREATE_LOC_FLAG },  	
	{ 0xFB77, R_LAST_VAR_TYPE },        	
	{ 0xFB79, R_FILE_BUF_PTR },         	
	{ 0xFBA6, R_DATA_STMT_LINE_NUM },   	
	{ 0xFBA8, R_FOR_NEXT_ACTIVE_FLAG }, 	
	{ 0xFBAB, R_LAST_VAR_ASSIGNED_ADDR },	
	{ 0xFBAD, R_RUNNING_LINE_NUM_ADDR },	
	{ 0xFBAF, R_BASIC_SP_BUF },         	
	{ 0xFBB1, R_LAST_ERR_LINE_NUM },    	
	{ 0xFBB3, R_LAST_ENTERED_LINE_NUM },	
	{ 0xFBB5, R_ERR_PTR },              	
	{ 0xFBB7, R_ONERROR_ADDRESS },      	
	{ 0xFBB9, R_BASIC_RUNNING },      	
	{ 0xFBBC, R_BREAK_LINE_NUM },       	
	{ 0xFBBE, R_BREAK_ADDRESS },        	
	{ 0xFBC0, R_DO_FILES_PTR },         	
	{ 0xFBC2, R_CO_FILES_PTR },         	
	{ 0xFBC4, R_VAR_PTR },              	
	{ 0xFBC6, R_ARRAY_TBL_PTR },        	
	{ 0xFBC8, R_UNUSED_MEM_PTR },       	
	{ 0xFBCA, R_DATA_SEARCH_ADDR },     	
	{ 0xFBCC, R_DEF_TBL },              	
	{ 0xFBF9, R_FP_TEMP1 },           	
	{ 0xFC2A, R_FP_FAC1 },              	
	{ 0xFC2C, R_INT_FAC1 },             	
	{ 0xFC72, R_FP_TEMP2 },           	
	{ 0xFC7B, R_FP_FAC2 },              	
	{ 0xFC7D, R_INT_FAC2 },             	
	{ 0xFC8B, R_FP_TEMP3 },           	
	{ 0xFC94, R_MAXFILES },             	
	{ 0xFC95, R_FILE_NUM_TBL_PTR },     	
	{ 0xFCA5, R_BASIC_FILENAME },       	
	{ 0xFCAE, R_LAST_LOAD_FILENAME },   	
	{ 0xFCC0, R_ALT_LCD_CHAR_BUF },     	
	{ 0xFDA1, R_MENU_TO_RAM_MAP },      	
	{ 0xFDED, R_MENU_OR_CMD_FLAG },     	
	{ 0xFDEE, R_CUR_MENU_DIR_LOC },     	
	{ 0xFDEF, R_MAX_MENU_DIR_LOC },     	
	{ 0xFE00, R_LCD_CHAR_BUF },         	
	{ 0xFF40, R_XON_XOFF_CTRL },        	
	{ 0xFF41, R_XON_XOFF_CTRL },        	
	{ 0xFF42, R_XON_XOFF_ENABLE },      	
	{ 0xFF43, R_RS232_INIT_STAT },      	
	{ 0xFF44, R_SOUND_FLAG },           	
	{ 0xFF46, R_PORT_E8H },             	
	{ 0xFFA1, R_RS232_CHAR_BUF },       	
	{ 0xFF47, R_RS232_BUF_CNT },        	
	{ 0xFF48, R_RS232_BUF_OUT },        	
	{ 0xFF49, R_RS232_BUF_IN },         	
	{ 0xFF4B, R_CTRL_S_STAT },          	
	{ 0xFF4C, R_UART_BAUD_TIMER_VAL },  	
	{ 0xFF4E, R_RS232_PARITY_CTRL },    	
	{ 0xFF4F, R_CAS_PULSE_CTRL },       	
	{ 0xFF5B, R_KEY_SCAN_STORAGE1 },    	
	{ 0xFF65, R_KEY_SCAN_STORAGE2 },    	
	{ 0xFF66, R_SHIFT_KEY_STAT },       	
	{ 0xFF67, R_KEY_REPT_START },       	
	{ 0xFF69, R_KEY_POSITION },         	
	{ 0xFF6B, R_2ND_KEY_BUF_PTR },      	
	{ 0xFF6D, R_KEY_BUF_CNT },          	
	{ 0xFF90, R_CURSOR_BIT_PAT_BUF },   	
	{ -1, -1 }
};

Std_ROM_Addresses_t gM10_Funs[] = {
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
	{ 0x0080, R_BASIC_KEYWORD_TBL },       
	{ 0x018F, R_FUN_KEYWORD_TBL1 },        
	{ 0x01F0, R_FUN_KEYWORD_TBL2 },        
	{ 0x0262, R_BASIC_VECTOR_TBL },        
	{ 0x02E2, R_MATH_PRIORITY_TBL },       
	{ 0x02EE, R_MATH_VCTR_TBL },           
	{ 0x031C, R_BASIC_ERR_MSG_TXT },       
	{ 0x035A, R_FUN_INIT_IMAGE },          
	{ 0x036F, R_FUN_XROM_IMAGE },          
	{ 0x03F1, R_FUN_BASIC_STRINGS },       
	{ 0x0408, R_POP_FOR_NEXT },            
	{ 0x0429, R_INIT_AND_READY },          
	{ 0x044D, R_GEN_SN_ERROR },            
	{ 0x0450, R_GEN_d0_ERROR },            
	{ 0x0453, R_GEN_NF_ERROR },            
	{ 0x0456, R_GEN_DD_ERROR },            
	{ 0x0459, R_GEN_RW_ERROR },            
	{ 0x045C, R_GEN_OV_ERROR },            
	{ 0x045F, R_GEN_MO_ERROR },            
	{ 0x0462, R_GEN_TM_ERROR },            
	{ 0x0464, R_GEN_ERR_IN_E },            
	{ 0x0494, R_RESTORE_JMP_BC },          
	{ 0x04CC, R_PRINT_BASIC_ERR },         
	{ 0x0508, R_POP_GO_BASIC_RDY },        
	{ 0x0509, R_GO_BASIC_RDY_OK },         
	{ 0x0518, R_GO_BASIC_RDY },            
	{ 0x052A, R_PERFORM_M_GO_RDY },        
	{ 0x05F7, R_UPDATE_LINE_ADDR },        
	{ 0x0611, R_EVAL_LIST_ARGS },          
	{ 0x062F, R_FIND_LINE_IN_DE },         
	{ 0x0632, R_FIND_LINE_DE_AT_HL },      
	{ 0x064D, R_TOKEN_COMPRESS },          
	{ 0x072D, R_FOR_STMT },                
	{ 0x0772, R_TO_STMT },                 
	{ 0x078A, R_STEP_STMT },               
	{ 0x080B, R_RUN_BASIC_PGRM },          
	{ 0x0841, R_RUN_BASIC_AT_HL },         
	{ 0x0847, R_EXEC_INST_IN_A },          
	{ 0x085F, R_RST_10H_INC_HL },          
	{ 0x0860, R_RST_10H },                 
	{ 0x0879, R_DEF_STMT },                
	{ 0x0888, R_DEFDBL_STMT },             
	{ 0x088D, R_DEFINT_STMT },             
	{ 0x089D, R_DEFSNG_STMT },             
	{ 0x08A6, R_DEFSTR_STMT },             
	{ 0x08A8, R_DECL_VAR_TYPE_E },         
	{ 0x08E2, R_GEN_FC_ERROR },            
	{ 0x08E7, R_EVAL_LINE_NUM },           
	{ 0x08F2, R_ASCII_TO_BIN },            
	{ 0x08F3, R_ASCII_TO_BIN_PREINC },     
	{ 0x0916, R_RUN_STMT },                
	{ 0x0925, R_GOSUB_STMT },              
	{ 0x093D, R_GOTO_STMT },               
	{ 0x0954, R_GEN_UL_ERROR },            
	{ 0x096D, R_RETURN_STMT },             
	{ 0x09A5, R_DATA_STMT },               
	{ 0x09A7, R_REM_STMT },                
	{ 0x09CA, R_LET_STMT },                
	{ 0x0A36, R_ON_STMT },                 
	{ 0x0A3B, R_ON_ERROR_STMT },           
	{ 0x0A62, R_ON_KEY_STMT },             
	{ 0x0A9B, R_ON_TIME_STMT },            
	{ 0x0AB7, R_RESUME_STMT },             
	{ 0x0B16, R_ERROR_STMT },              
	{ 0x0B21, R_IF_STMT },                 
	{ 0x0B55, R_LPRINT_STMT },             
	{ 0x0B5D, R_PRINT_STMT },              
	{ 0x0C08, R_TAB_STMT },                
	{ 0x0C4C, R_LINE_STMT },               
	{ 0x0CA0, R_INPUT_NO_STMT },           
	{ 0x0CAA, R_INPUT_STMT },              
	{ 0x0CE0, R_READ_STMT },               
	{ 0x0DB2, R_EVAL_BASIC_INST },         
	{ 0x0F14, R_INT16_DIV },               
	{ 0x0F23, R_EVAL_FUN },                
	{ 0x0F4E, R_ERR_FUN },                 
	{ 0x0F5D, R_ERL_FUN },                 
	{ 0x0F85, R_VARPTR_FUN },              
	{ 0x0F8D, R_VARPTR_BUF_FUN },          
	{ 0x0F99, R_VARPTR_VAR_FUN },          
	{ 0x0FE1, R_EVAL_VAR },                
	{ 0x0FEF, R_CONV_M_TOUPPER },          
	{ 0x0FF0, R_CONV_A_TOUPPER },          
	{ 0x103E, R_ASCII_NUM_CONV },          
	{ 0x105B, R_NOT_FUN },                 
	{ 0x1070, R_RST_28H },                 
	{ 0x1093, R_OR_FUN },                   
	{ 0x109E, R_AND_FUN },                 
	{ 0x10A9, R_XOR_FUN },                 
	{ 0x10B4, R_EQV_FUN },                 
	{ 0x10BC, R_IMP_FUN },                 
	{ 0x10CF, R_LPOS_FUN },                
	{ 0x10D5, R_POS_FUN },                 
	{ 0x10D8, R_LD_FAC1_INT },             
	{ 0x10ED, R_CHK_RUNNING_PGRM },        
	{ 0x10F6, R_GEN_ID_ERROR },            
	{ 0x1107, R_INP_FUN },                 
	{ 0x1113, R_OUT_STMT },                
	{ 0x1119, R_EVAL_EXPR },               
	{ 0x111A, R_EVAL_EXPR_PREDEC },        
	{ 0x1134, R_EVAL_EXPR },               
	{ 0x1135, R_EVAL_EXPR_PREDEC },        
	{ 0x1142, R_LLIST_STMT },              
	{ 0x1147, R_LIST_STMT },               
	{ 0x11A9, R_BUF_TO_LCD },              
	{ 0x128D, R_PEEK_FUN },                
	{ 0x1294, R_POKE_FUN },                
	{ 0x12A0, R_EVAL_EXPR },               
	{ 0x12CB, R_WAIT_KEY },                
	{ 0x13AE, R_TOGGLE_LABEL },            
	{ 0x13E4, R_CHK_KEY_QUEUE },           
	{ 0x1422, R_POWER_STMT },              
	{ 0x143F, R_LOW_PWR_TRAP },
	{ 0x1450, R_POWER_DOWN },              
	{ 0x146D, R_POWER_CONT_STMT },         
	{ 0x1465, R_POWER_ON_STMT },           
	{ 0x1484, R_OUT_CH_TO_LPT },           
	{ 0x1496, R_LOAD_CAS_HDR },            
	{ 0x14A0, R_GEN_IO_ERROR },            
	{ 0x14A5, R_DET_CAS_SYNC_HDR },        
	{ 0x14B4, R_CAS_MOTOR_ON },            
	{ 0x14B6, R_CAS_MOTOR_OFF },           
	{ 0x14BC, R_CAS_READ_BYTE },           
	{ 0x14CD, R_CAS_WRITE_BYTE },          
	{ 0x14DD, R_LCD_DCB },                 
	{ 0x14E3, R_LCD_OPEN },                
	{ 0x14F0, R_LCD_OUT },                 
	{ 0x14ED, R_POP_ALL_REGS },            
	{ 0x14FD, R_CRT_DCB },                 
	{ 0x1507, R_RAM_DCB },                 
	{ 0x1511, R_RAM_OPEN },                
	{ 0x1598, R_RAM_CLOSE },               
	{ 0x15B7, R_RAM_OUT },                 
	{ 0x15CF, R_RAM_IN },                  
	{ 0x1626, R_RAM_IO },                  
	{ 0x168A, R_CAS_DCB },                 
	{ 0x1694, R_CAS_OPEN },                
	{ 0x16B8, R_CAS_CLOSE },               
	{ 0x16D2, R_CAS_OUT },                 
	{ 0x16DD, R_CAS_IN },                  
	{ 0x175F, R_LPT_DCB },                 
	{ 0x1765, R_LPT_OUT },                 
	{ 0x176D, R_COM_DCB },                 
//	{ 0x1777, R_MDM_OPEN },                
	{ 0x1777, R_COM_OPEN },                
	{ 0x1792, R_COM_CLOSE },               
	{ 0x179C, R_COM_OUT },                 
	{ 0x17A7, R_COM_IN },                  
	{ 0x17C1, R_COM_IO },                  
//	{ 0x17D1, R_MDM_DCB },                 
//	{ 0x17DB, R_MDM_CLOSE },               
	{ 0x17C8, R_SET_RS232_PARAMS },        
	{ 0x1844, R_BCR_DCB },                 
	{ 0x1856, R_EOF_FUN },                 
	{ 0x18CC, R_TIME_FUN },                
	{ 0x18D7, R_READ_TIME },               
	{ 0x18F7, R_DATE_FUN },                
	{ 0x191F, R_DAY_FUN },                 
	{ 0x192C, R_READ_DAY },                
	{ 0x196A, R_UPDATE_CLK_VALUES },       
	{ 0x1975, R_TIME_STMT },               
	{ 0x197D, R_UPDATE_CLK_CHIP },         
	{ 0x1987, R_DATE_STMT },               
	{ 0x19BD, R_DAY_STMT },                
	{ 0x1A0E, R_GET_TIME_STRING },         
	{ 0x1A44, R_IPL_STMT },                
	{ 0x1A62, R_ERASE_IPL_PRGM },          
	{ 0x1A6A, R_COM_MDM_STMT },            
	{ 0x1A7E, R_KEY_FUN },                 
	{ 0x1A8F, R_KEY_ON_OFF_STMT },         
	{ 0x1AB6, R_DET_TIME_ARG },            
	{ 0x1AC8, R_DET_DEVICE_ARG },          
	{ 0x1AD8, R_ONTIME_STMT },             
	{ 0x1AEB, R_ONCOM_STMT },              
	{ 0x1AFB, R_RST7_5_ISR },              
	{ 0x1B7A, R_KICK_PWR_OFF_WDT },        
	{ 0x1B81, R_KEY_STMT },                
	{ 0x1B86, R_KEY_LIST_STMT },           
	{ 0x1BA9, R_SEND_CHARS_TO_LCD },       
	{ 0x1C20, R_PSET_STMT },               
	{ 0x1C2F, R_PRESET_STMT },             
	{ 0x1C36, R_LINE_STMT },               
	{ 0x1C6F, R_DRAW_FBOX },               
	{ 0x1C85, R_DRAW_BOX },                
	{ 0x1CF7, R_TOKENIZE_XY },             
	{ 0x1D59, R_CSRLIN_FUN },              
	{ 0x1D64, R_MAX_FUN },                 
	{ 0x1D70, R_MAXRAM_FUN },              
	{ 0x1D7B, R_MAXFILES_FUN },            
	{ 0x1D82, R_HIMEM_FUN },               
	{ 0x1D8C, R_WIDTH_STMT },              
	{ 0x1D8E, R_SOUND_STMT },              
	{ 0x1DAE, R_SOUND_OFF_STMT },          
	{ 0x1DE6, R_SOUND_ON_STMT },           
	{ 0x1DB5, R_MOTOR_STMT },              
	{ 0x1DBA, R_MOTOR_ON_STMT },           
	{ 0x1DBE, R_MOTOR_OFF_STMT },          
	{ 0x1DC3, R_CALL_STMT },               
	{ 0x1DEB, R_SCREEN_STMT },             
	{ 0x1E29, R_LCOPY_STMT },              
	{ 0x1F07, R_FILES_STMT },              
	{ 0x1F0F, R_DISPLAY_CAT },             
	{ 0x1F63, R_KILL_STMT },               
	{ 0x1F8F, R_KILL_TEXT_FILE },          
	{ 0x2008, R_NAME_STMT },               
	{ 0x20CF, R_NEW_STMT },                
	{ 0x21D2, R_STRLEN },                  
	{ 0x21DE, R_GET_FIND_DO_FILE },        
	{ 0x21E7, R_OPEN_TEXT_FILE },          
	{ 0x2258, R_CSAVE_STMT },              
	{ 0x2291, R_CAS_WRITE_BUF },           
	{ 0x22A4, R_SAVEM_STMT },              
	{ 0x22B5, R_CSAVEM_STMT },             
	{ 0x234F, R_CLOAD_STMT },              
	{ 0x23EB, R_CAS_READ_REC },            
	{ 0x2450, R_GEN_VERIFY_FAIL_ERR },     
	{ 0x2469, R_LOADM_STMT },           
	{ 0x247F, R_CLOADM_STMT },          
	{ 0x251A, R_MOVE_B_BYTES },         
	{ 0x2523, R_EXEC_CO_FILE },         
	{ 0x25E3, R_CAS_OPEN_OUT_BA },      
	{ 0x25E6, R_CAS_OPEN_OUT_DO },      
	{ 0x25E9, R_CAS_OPEN_OUT_CO },      
	{ 0x2628, R_CAS_OPEN_IN_BA },       
	{ 0x262B, R_CAS_OPEN_IN_DO },       
	{ 0x262E, R_CAS_OPEN_IN_CO },       
	{ 0x2713, R_STR_FUN },              
	{ 0x278A, R_PRINT_STRING },         
	{ 0x28E8, R_MOVE_L_BYTES },         
	{ 0x291C, R_LEN_FUN },              
	{ 0x2928, R_ASC_FUN },              
	{ 0x2938, R_CHR_FUN },              
	{ 0x2946, R_STRING_FUN },           
	{ 0x2967, R_SPACE_FUN },            
	{ 0x2984, R_LEFT_FUN },             
	{ 0x29B5, R_RIGHT_FUN },            
	{ 0x29BF, R_MID_FUN },              
	{ 0x29E0, R_VAL_FUN },              
	{ 0x2A10, R_INSTR_FUN },            
	{ 0x2B25, R_FRE_FUN },              
	{ 0x2B42, R_DBL_SUB },              
	{ 0x2B4E, R_DBL_ADD },              
	{ 0x2C28, R_BCD_ADD },              
	{ 0x2CD8, R_DBL_MULT },             
	{ 0x2DA0, R_DBL_DIV },              
	{ 0x2EBF, R_MOVE_C_BYTES },         
	{ 0x2EC8, R_COS_FUN },              
	{ 0x2EE2, R_SIN_FUN },              
	{ 0x2F31, R_TAN_FUN },              
	{ 0x2F4A, R_ATN_FUN },              
	{ 0x2FA8, R_LOG_FUN },              
	{ 0x3033, R_SQR_FUN },              
	{ 0x307D, R_EXP_FUN },              
	{ 0x3117, R_RND_FUN },              
	{ 0x315B, R_INIT_TEMP3 },              
	{ 0x3179, R_DBL_SQR },              
	{ 0x317C, R_MULT_M_FAC2 },          
	{ 0x318E, R_FAC2_EQ_FAC1 },         
	{ 0x3191, R_FAC2_EQ_FP },           
	{ 0x319A, R_FAC1_EQ_FAC2 },         
	{ 0x319D, R_FAC1_EQ_FP },           
	{ 0x31A3, R_M_EQ_FAC1 },            
	{ 0x31C4, R_MULT_FAC1_SQR_FAC1 },   
//	{ 0x31CA, R_SWAP_FAC1_FAC2 },       
//	{ 0x31E2, R_SQR_FAC1_MULT_TBL },    
	{ 0x31E2, R_TBL_BASED_MATH },       
	{ 0x3207, R_PUSH_FAC2 },            
	{ 0x320D, R_PUSH_FAC1 },            
	{ 0x321E, R_POP_FAC2 },             
	{ 0x3224, R_POP_FAC1 },             
	{ 0x3235, R_FP_NUMBERS },           
	{ 0x3255, R_FP_SHARED_NUMBERS },    
	{ 0x3257, R_FP_NUMBERS },           
	{ 0x32AF, R_EXP_MATH_TBL },         
	{ 0x32D0, R_EXP_MATH_TBL },         
	{ 0x32E0, R_LOG_MATH_TBL },         
	{ 0x330A, R_LOG_MATH_TBL },         
	{ 0x3333, R_SIN_MATH_TBL },         
	{ 0x3374, R_ATN_MATH_TBL },         
	{ 0x33B5, R_RST_30H_FUN },          
	{ 0x33CB, R_ABS_FUN },              
	{ 0x33E0, R_SGN_FUN },              
	{ 0x33FB, R_PUSH_SNGL_FAC1 },       
	{ 0x3408, R_SNGL_FAC1_EQ_M },       
	{ 0x340B, R_SNGL_FAC1_EQ_BCDE },    
	{ 0x3416, R_SNGL_BCDE_EQ_FAC1 },    
	{ 0x3420, R_SNGL_BCDE_EQ_M },       
	{ 0x3429, R_SNGL_DECB_EQ_M },       
	{ 0x3432, R_SNGL_M_EQ_FAC1 },       
	{ 0x343A, R_LOAD_FAC2_FROM_M },     
	{ 0x3442, R_MOVE_B_BYTES_INC },     
	{ 0x344B, R_MOVE_B_BYTES_DEC },     
	{ 0x3471, R_SNGL_CMP_BCDE_FAC1 },   
	{ 0x3489, R_SNGL_CMP_BCDE_M },      
	{ 0x349B, R_SINT_CMP },             
	{ 0x34D3, R_CMP_FAC1_FAC2 },        
	{ 0x34DA, R_CINT_FUN },             
	{ 0x34E9, R_FAC1_EQ_SINT_HL },      
	{ 0x3503, R_CSNG_FUN },             
	{ 0x3519, R_CONV_SINT_SNGL },       
	{ 0x351C, R_CONV_SINT_HL_SNGL },    
	{ 0x3593, R_CDBL_FUN },             
	{ 0x35D1, R_SINT_SUB },             
	{ 0x361E, R_FIX_FUN },              
	{ 0x362D, R_INT_FUN },              
	{ 0x36DD, R_SINT_ADD },             
	{ 0x36FE, R_SINT_MULT },            
	{ 0x3757, R_SINT_DIV },             
	{ 0x37CD, R_SNGL_ADD_BCDE },        
	{ 0x37D0, R_SNGL_ADD_FAC2 },        
	{ 0x37D6, R_SNGL_SUB },             
	{ 0x37DC, R_SNGL_MULT_BCDE },       
	{ 0x37DF, R_SNGL_MULT_FAC2 },       
	{ 0x37E7, R_SNGL_DIV },             
	{ 0x3800, R_SNGL_LOAD },            
	{ 0x3819, R_ASCII_TO_DBL },         
	{ 0x3840, R_ASCII_FND_e },          
	{ 0x3863, R_ASCII_FND_E },          
	{ 0x38DD, R_ASCII_FND_DOT },        
	{ 0x38F3, R_ASCII_FND_PERC },       
	{ 0x3902, R_ASCII_FND_LB },         
	{ 0x390A, R_ASCII_CONV_HELPER },    
	{ 0x3919, R_ASCII_CONV_HELPER2 },   
	{ 0x39A5, R_PRNT_BASIC_ERR_TERM },  
	{ 0x39AD, R_PRINT_HL_ON_LCD },      
	{ 0x39C1, R_PRINT_FAC1 },           
	{ 0x39C5, R_PRINT_FAC1_FORMAT },    
	{ 0x3CEA, R_FAC1_EQ_ZERO },         
	{ 0x3D58, R_SNGL_EXP },             
	{ 0x3D67, R_DBL_EXP },              
	{ 0x3DD0, R_INT_EXP },              
	{ 0x3F04, R_INIT_BASIC_VARS },         
	{ 0x3F7C, R_TIME_ON_STMT },         
	{ 0x3F8E, R_TIME_OFF_STMT },        
	{ 0x3F95, R_TIME_STOP_STMT },       
	{ 0x3FAE, R_TRIG_INTR },            
	{ 0x3FCD, R_CLEAR_INTR },           
	{ 0x3FE5, R_CLEAR_COM_INT_DEF },    
	{ 0x405B, R_RESTORE_STMT },         
	{ 0x4076, R_STOP_STMT },            
	{ 0x407B, R_END_STMT },             
	{ 0x40B6, R_CONT_STMT },            
	{ 0x40CD, R_ISALPHA_M },            
	{ 0x40CE, R_ISALPHA_A },            
	{ 0x40D5, R_CLEAR_STMT },           
	{ 0x4150, R_NEXT_STMT },            
	{ 0x41FE, R_SEND_CRLF },            
	{ 0x4201, R_SEND_LF },              
	{ 0x4205, R_BEEP_STMT },            
	{ 0x4209, R_HOME_CURSOR },          
	{ 0x420D, R_CLS_STMT },             
	{ 0x4211, R_PROTECT_LABEL },        
	{ 0x4216, R_UNPROT_LABEL },         
	{ 0x421B, R_STOP_AUTO_SCROLL },     
	{ 0x4220, R_RESUME_AUTO_SCROLL },   
	{ 0x4225, R_TURN_CURSOR_ON },       
	{ 0x422A, R_TURN_CURSOR_OFF },      
	{ 0x422F, R_DEL_CUR_LINE },         
	{ 0x4234, R_INSERT_LINE },          
	{ 0x4239, R_ERASE_TO_EOL },         
	{ 0x423E, R_SEND_ESC_X },           
	{ 0x4245, R_INV_CHAR_ENABLE },      
	{ 0x424A, R_INV_CHAR_DISABLE },     
	{ 0x424C, R_END_ESC_SEQ },          
	{ 0x4253, R_CURSOR_TO_LOW_LEFT },   
	{ 0x4258, R_SET_CURSOR_POS },       
	{ 0x4266, R_ERASE_FKEY_DISP },      
	{ 0x4281, R_SET_DISP_FKEY },        
	{ 0x4284, R_DISP_FKEY_LINE },       
	{ 0x42ED, R_PRINT_A_TO_LCD },       
//	{ 0x4431, R_CHAR_PLOT_3 },          
	{ 0x430A, R_CHAR_PLOT_4 },          
	{ 0x431F, R_CHAR_PLOT_5 },             
	{ 0x4353, R_LCD_OUT_DRIVER },       
	{ 0x436A, R_RST_20H_LKUP_TBL },     
	{ 0x438F, R_ESC_Y },                
	{ 0x4392, R_LCD_OUT_ESC_FUN },      
	{ 0x4398, R_LCD_ESC_LKUP_TBL },     
	{ 0x43DA, R_ESC_SEQ_DRIVER },       
	{ 0x4411, R_ESC_p_FUN },            
	{ 0x4412, R_ESC_q_FUN },            
	{ 0x4417, R_ESC_U_FUN },            
	{ 0x4419, R_ESC_T_FUN },            
	{ 0x441B, R_ESC_X_FUN },            
	{ 0x441F, R_ESC_V_FUN },            
	{ 0x4420, R_ESC_W_FUN },            
	{ 0x4433, R_ESC_C_FUN },            
	{ 0x443C, R_ESC_D_FUN },            
	{ 0x4441, R_BKSPACE_FUN },          
	{ 0x4449, R_ESC_A_FUN },            
	{ 0x444E, R_ESC_B_FUN },            
	{ 0x4460, R_TAB_FUN },              
//	{ 0x4494, R_LF_FUN },               
	{ 0x4476, R_ESC_H_FUN },            
	{ 0x4478, R_CR_FUN },               
//	{ 0x44AF, R_ESC_P_FUN },            
//	{ 0x44BA, R_ESC_Q_FUN },            
	{ 0x448E, R_ESC_M_FUN },            
	{ 0x449C, R_LCD_SCROLL },           
	{ 0x44B4, R_ESC_L_FUN },            
	{ 0x44DC, R_GET_LCD_CHAR },         
	{ 0x45F5, R_ESC_l_FUN },            
	{ 0x45F7, R_ESC_K_FUN },            
	{ 0x4505, R_CLS_FUN },              
	{ 0x450B, R_ESC_J_FUN },            
	{ 0x451D, R_CHAR_PLOT_6 },          
	{ 0x45F2, R_INP_DISP_LINE },        
	{ 0x45F8, R_INP_DISP_LINE_NO_Q },   
	{ 0x4638, R_INP_CTRL_C_HANDLER },   
	{ 0x464B, R_INP_ENTER_HANDLER },    
	{ 0x4657, R_INP_BKSP_HANDLER },     
	{ 0x467A, R_INP_CTRL_U_HANDLER },   
	{ 0x4681, R_INP_TAB_HANDLER },      
	{ 0x4741, R_DIM_STMT },             
	{ 0x4746, R_FIND_VAR_ADDR },        
	{ 0x495F, R_USING_FUN },            
	{ 0x4B12, R_SEND_A_LCD_LPT },       
	{ 0x4B23, R_PRINT_A_EXPAND },       
	{ 0x4B65, R_SET_OUT_DEV_LCD },      
	{ 0x4B79, R_LCD_CHAR_OUT_FUN },     
	{ 0x4B86, R_LCD_NEW_LINE },         
	{ 0x4BB8, R_INKEY_FUN },            
	{ 0x4C52, R_GET_FILE_DESC },        
	{ 0x4C99, R_OPEN_STMT },            
	{ 0x4D27, R_LCD_CLOSE_FUN },        
	{ 0x4D3C, R_RUN_STMT },             
	{ 0x4D3E, R_LOAD_STMT },            
	{ 0x4D3F, R_MERGE_STMT },           
	{ 0x4D9D, R_SAVE_STMT },            
	{ 0x4DF6, R_CLOSE_STMT },           
	{ 0x4E5A, R_INPUT_STMT },           
	{ 0x4ED1, R_CLEAR_MEM },            
	{ 0x4ED2, R_LOAD_MEM },             
	{ 0x4EF5, R_PRINT_LB_INIT_FUN },    
	{ 0x4F22, R_LINE_INPUT_STMT },      
	{ 0x5015, R_GEN_NM_ERR_FUN },       
	{ 0x5018, R_GEN_AO_ERR_FUN },       
	{ 0x501B, R_GEN_DS_ERR_FUN },       
	{ 0x501E, R_GEN_FF_ERR_FUN },       
	{ 0x5021, R_GEN_CF_ERR_FUN },       
	{ 0x5024, R_GEN_BN_ERR_FUN },       
	{ 0x5027, R_GEN_IE_ERR_FUN },       
	{ 0x502A, R_GEN_EF_ERR_FUN },       
	{ 0x502D, R_GEN_FL_ERR_FUN },       
	{ 0x5032, R_LOF_FUN },              
	{ 0x5034, R_LOC_FUN },              
	{ 0x5036, R_LFILES_FUN },           
	{ 0x5038, R_DSKO_FUN },             
	{ 0x503A, R_DSKI_FUN },             
	{ 0x50B8, R_DEV_NAME_TBL },         
	{ 0x50D6, R_DCB_VCTR_TBL },         
	{ 0x5109, R_TELCOM_ENTRY },         
	{ 0x5120, R_TELCOM_RE_ENTRY },      
	{ 0x514C, R_TELCOM_INST_VCTR_TBL }, 
	{ 0x515F, R_TELCOM_LABEL_TXT },     
	{ 0x5173, R_TELCOM_STAT_FUN },      
	{ 0x5179, R_PRINT_TELCOM_STAT },    
	{ 0x51ED, R_SET_TELCOM_STAT },      

/*	{ 0x522F, R_TELCOM_CALL_FUN },      
	{ 0x524D, R_TELCOM_FIND_FUN },      
	{ 0x52B4, R_GO_OFFHOOK },           
	{ 0x52BB, R_DISCONNECT_PHONE },     
	{ 0x52D0, R_CONNECT_PHONE },        
	{ 0x52E4, R_GO_OFFHOOK_WAIT },      
	{ 0x5310, R_TELCOM_PAUSE },         
	{ 0x532D, R_EXEC_LOGON_SEQ },       
	{ 0x5359, R_DIALING_FUN },          
	{ 0x539E, R_AUTO_LOGIN_SEQ },       
	{ 0x540A, R_DIAL_DIGIT },            */
	{ 0x51A5, R_TELCOM_TERM_FUN },      
	{ 0x5244, R_TELCOM_DISPATCH },      
	{ 0x5255, R_TERM_FKEY_VCTR_TBL },   
	{ 0x526B, R_TELCOM_PREV_FUN },      
	{ 0x5286, R_TELCOM_FULL_FUN },      
	{ 0x52AA, R_TELCOM_ECHO_FUN },      
	{ 0x52E5, R_TELCOM_UP_FUN },        
	{ 0x53C7, R_TELCOM_DOWN_FUN },      
	{ 0x5467, R_TELCOM_BYE_FUN },       
	{ 0x54B6, R_PRINT_STRING },         
	{ 0x54BC, R_MENU_ENTRY },           
	{ 0x551D, R_DISP_DIR },             
	{ 0x555C, R_MENU_CTRL_U_HANDLER },  
	{ 0x557F, R_MENU_CMD_LOOP },        
	{ 0x55B3, R_MENU_BKSP_HANDLER },    
	{ 0x561C, R_MENU_ENTER_HANDLER },   
	{ 0x5694, R_EXEC_ROM_FILE },        
	{ 0x5695, R_DISP_DIR_TYPE_C },      
	{ 0x56D2, R_CONV_FILENAME },        
	{ 0x56EE, R_NEXT_DIR_ENTRY },       
	{ 0x5734, R_CLS_PRINT_TIME_DAY },   
	{ 0x5737, R_PRINT_TIME_DAY },       
	{ 0x577B, R_PRINT_STRING2 },        
	{ 0x5785, R_COPY_MEM_DE_M },        
	{ 0x5790, R_CMP_MEM_DE_M },         
	{ 0x579C, R_CLEAR_FKEY_TBL },       
	{ 0x579F, R_SET_FKEYS },            
	{ 0x57C1, R_DISP_FKEYS },           
	{ 0x57CC, R_SEARCH_DIR },           
	{ 0x5806, R_GET_FILE_ADDR },        
	{ 0x5841, R_DIR_DISP_ORDER_TBL },   
	{ 0x588B, R_ADDRSS_ENTRY },         
	{ 0x588E, R_ADDRSS_ENTRY_W_FILE },  
	{ 0x5892, R_SCHEDL_ENTRY },         
	{ 0x5895, R_SCHEDL_ENTRY_W_FILE },  
	{ 0x5918, R_ADDRSS_FIND_FUN },      
	{ 0x591A, R_ADDRSS_LFND_FUN },      
	{ 0x5962, R_FIND_TEXT_IN_FILE },    
	{ 0x5990, R_FIND_NEXT_LINE_IN_FILE },  
	{ 0x5997, R_CHECK_FOR_CRLF },       
//	{ 0x5CEF, R_ADDRSS_INST_VCTR_TBL }, 
	{ 0x5A84, R_GET_KEY_CONV_TOUPPER }, 
	{ 0x5A8A, R_SEND_CURSOR_HOME },     
	{ 0x5A90, R_PRINT_TIME_LOOP },      
	{ 0x5B0E, R_TEXT_ENTRY },           
	{ 0x5B42, R_TEXT_FKEY_TBL },        
	{ 0x5B71, R_EDIT_STMT },            
	{ 0x5C4F, R_WAIT_FOR_SPACE_KEY },   
	{ 0x5C85, R_EDIT_DO_FILE_FUN },     
	{ 0x5CFD, R_TEXT_EDIT_LOOP },       
	{ 0x5D36, R_TEXT_CTRL_VCTR_TBL },   
	{ 0x5D76, R_TEXT_ESC_FUN },         
	{ 0x5D9C, R_TEXT_CTRL_P_FUN },      
	{ 0x5DAA, R_TEXT_CTRL_I_FUN },      
	{ 0x5DDE, R_TEXT_CTRL_M_FUN },      
	{ 0x5DFE, R_TEXT_CTRL_D_FUN },      
	{ 0x5E02, R_TEXT_CTRL_X_FUN },      
	{ 0x5E2B, R_TEXT_CTRL_H_FUN },      
	{ 0x5E71, R_TEXT_CTRL_S_FUN },      
	{ 0x5E75, R_TEXT_CTRL_E_FUN },      
	{ 0x5E9A, R_TEXT_CTRL_F_FUN },      
	{ 0x5EAC, R_TEXT_CTRL_A_FUN },      
	{ 0x5EE2, R_TEXT_CTRL_T_FUN },      
	{ 0x5EF7, R_TEXT_CTRL_B_FUN },      
	{ 0x5F1D, R_TEXT_CTRL_R_FUN },      
//	{ 0x5F30, R_TEXT_CTRL_Q_FUN },      
	{ 0x5F30, R_TEXT_CTRL_W_FUN },      
	{ 0x5F3C, R_TEXT_CTRL_Z_FUN },      
	{ 0x5F62, R_TEXT_CTRL_L_FUN },      
	{ 0x5FAF, R_TEXT_CTRL_C_FUN },      
	{ 0x6105, R_TEXT_GET_NEXT_BYTE },   
	{ 0x6151, R_TEXT_CTRL_O_FUN },      
	{ 0x6165, R_TEXT_CTRL_U_FUN },      
	{ 0x6271, R_TEXT_CTRL_N_FUN },      
	{ 0x62E3, R_COPY_NULL_STRING },     
	{ 0x63B1, R_TEXT_CTRL_Y_FUN },      
	{ 0x6433, R_TEXT_CTRL_G_FUN },      
	{ 0x6494, R_TEXT_CTRL_V_FUN },      
	{ 0x6881, R_INSERT_A_INTO_FILE },   
	{ 0x688D, R_INSERT_SPACES },        
	{ 0x68BF, R_DELETE_CHARS },         
	{ 0x68FB, R_MOVE_BC_BYTES_INC },    
	{ 0x6906, R_MOVE_BC_BYTES_DEC },    
	{ 0x6911, R_ROM_CAT_ENTRIES },      
	{ 0x6969, R_BASIC_ENTRY },          
	{ 0x69B3, R_LOAD_BASIC_FKEYS },     
	{ 0x69BC, R_LOAD_BASIC_FKEYS },     
	{ 0x69F6, R_RE_INIT_SYSTEM },       
	{ 0x6A10, R_WARM_RESET },           
	{ 0x6A6D, R_SEND_A_TO_LPT },        
	{ 0x6A9D, R_CHECK_RS232_QUEUE },    
	{ 0x6AAE, R_READ_RS232_QUEUE },     
	{ 0x6ADC, R_RST_6_5_FUN },          
	{ 0x6B2C, R_INC_RS232_QUEUE_IN },   
	{ 0x6B3B, R_SEND_XON },             
	{ 0x6B4E, R_DISABLE_XON_XOFF },     
	{ 0x6B62, R_SEND_A_USING_XON },     
	{ 0x6B6D, R_SEND_C_TO_RS232 },      
	{ 0x6B8F, R_XON_XOFF_HANDLER },     
	{ 0x6BB7, R_SET_RS232_BAUD_RATE },  
	{ 0x6BD6, R_RS232_BAUD_TIMER_VALS },
	{ 0x6BE8, R_INIT_RS232_MDM },       
	{ 0x6C25, R_UNINIT_RS232_MDM },     
/*	{ 0x6EE5, R_CLICK_SND_PORT },       
	{ 0x6EEF, R_CHECK_CD },             */
	{ 0x6C0D, R_ENABLE_XON_XOFF },      
	{ 0x6C15, R_INIT_SER_BUF_PARAMS },   
	{ 0x6C30, R_CAS_WRITE_HEADER },     
	{ 0x6C45, R_CAS_WRITE_NO_CHKSUM },  
	{ 0x6C54, R_CAS_WRITE_BIT },        
	{ 0x6C6F, R_CAS_READ_HEADER },      
	{ 0x6CC5, R_CAS_READ_BIT },         
	{ 0x6D0D, R_CAS_COUNT_BITS },       
	{ 0x6D14, R_CAS_READ_NO_CHKSUM },   
	{ 0x6D2D, R_CAS_REMOTE_FUN },       
	{ 0x6D3F, R_KEYSCAN_MGT_FUN },      
	{ 0x6D4A, R_KEY_DETECTION },        
	{ 0x6DA9, R_KEY_REPEAT_DET },       
//	{ 0x70B0, R_GET_KEY_MATRIX },       
//	{ 0x7122, R_INIT_KEY_RPT_CNT },     
	{ 0x6E1D, R_KEY_DECODE },           
	{ 0x6EE3, R_KEY_FIRST_IN_BUF },     
	{ 0x6EF2, R_KEY_ADD_TO_BUF },       
	{ 0x6F02, R_ISR_EXIT_FUN },         
	{ 0x6F15, R_UNSHIFTED_KEY },        
/*	{ 0x7222, R_ARROW_KEY },            
	{ 0x722C, R_CAPS_LOCK_KEY },        
	{ 0x7233, R_NUM_KEY },               */
	{ 0x6F2E, R_SCAN_KEYBOARD },        
	{ 0x6F5A, R_ENABLE_INTERRUPTS },    
	{ 0x6F60, R_CHK_PENDING_KEYS },     
	{ 0x6F73, R_CHK_BREAK },            
	{ 0x6F8F, R_CHK_SHIFT_BREAK },      
	{ 0x6FA1, R_SCAN_SPECIAL_KEYS },    
	{ 0x6FB4, R_GEN_TONE },             
	{ 0x7018, R_GET_CLK_CHIP_REGS },    
//	{ 0x7041, R_PUT_CLK_CHIP_REGS },    
	{ 0x7041, R_READ_CLK_CHIP_BIT },    
	{ 0x7072, R_SET_CLK_CHIP_MODE },    
	{ 0x7098, R_BLINK_CURSOR },         
	{ 0x70DD, R_CHAR_PLOT_7 },          
	{ 0x7166, R_PLOT_POINT },           
	{ 0x7167, R_CLEAR_POINT },          
	{ 0x71BC, R_LCD_BYTE_PLOT },        
	{ 0x7255, R_ENABLE_LCD_DRIVER },    
	{ 0x7262, R_WAIT_LCD_DRIVER },      
	{ 0x726B, R_LCD_BIT_PATTERNS },     
	{ 0x735D, R_LCD_BIT_PATTERNS },     
	{ 0x7371, R_DELAY_FUN },            
	{ 0x7376, R_SET_INTR_1DH },         
	{ 0x737C, R_BEEP_FUN },             
	{ 0x7390, R_CLICK_SOUND_PORT },     
	{ 0x739C, R_CHK_XTRNL_CNTRLER },    
	{ 0x73A9, R_XTRNL_CNTRLER_DRIVER }, 
	{ 0x742B, R_LCD_CHAR_SHAPE_TBL1 },  
	{ 0x760B, R_LCD_CHAR_SHAPE_TBL2 },  
	{ 0x790B, R_KEYBOARD_CONV_MATRIX }, 
	{ 0x7A23, R_BOOT_ROUTINE },         
	{ 0x7ADE, R_COLD_BOOT },            
	{ 0x7B98, R_DISP_MODEL },           
	{ 0x7B9E, R_DISP_FREE_BYTES },      
	{ 0x7BB8, R_INIT_RST_38H_TBL },     
	{ 0x7BD3, R_CALC_FREE_RAM },        
	{ 0x7BF3, R_INIT_CLK_CHIP_REGS },   
	{ 0x7C8A, R_MENU_TEXT_STRINGS },    
	{ 0x7CC3, R_RST_38H_DRIVER },       
	{ 0xF5F9, R_RST_5_5_VECTOR },       
	{ 0xF5FC, R_RST_6_5_VECTOR },       
	{ 0xF5FF, R_RST_7_5_VECTOR },       
	{ 0xF602, R_TRAP_VECTOR },          
	{ 0xF605, R_DETECT_OPTION_ROM },       
	{ -1, -1 }
};

RomDescription_t gM10_Desc = {
	0x3C003845,					/* Signature */
	0x7A20,						/* Signature address */
	1,                          /* StdRom */

	gM10_Tables,				/* Known tables */
	gM10_Vars,					/* Known variables */
	gM10_Funs,					/* Known functions */

	0xF9A1,                     /* Address of unsaved BASIC prgm */
	0xF9AC,                     /* Address of next DO file */
	0xFBC0,                     /* Start of DO file area */
	0xFBC2,                     /* Start of CO file area */
	0xFBC4,                     /* Start of Variable space */
	0xFBC6,                     /* Start of Array data */
	0xFBC8,                     /* Pointer to unused memory */
	0xF5F4,                     /* Address where HIMEM is stored */
	0xF893,                     /* End of RAM for file storage */
	0xFAC7,                     /* Lowest RAM used by system */
	0xF969,                     /* Start of RAM directory */
	0xF67F,                     /* BASIC string	buffer pointer */
	0xFADE,						/* BASIC Size */
	0xFF5C,						/* Keyscan array */
	0x742B,						/* Character generator table */
	0xF934,						/* Location of Year storage */
	0xFE00,						/* LCD Buffer storage area */
	0xF644,						/* Label line enable flag */

	24,							/* Number of directory entries */
	8,							/* Index of first Dir entry */
	0x5830						/* Address of MS Copyright string */
};


