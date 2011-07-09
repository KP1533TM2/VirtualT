/* m100rom.c */

/* $Id: m200rom.c,v 1.5 2008/03/31 02:59:20 kpettit1 Exp $ */

/*
 * Copyright 2004 Stephen Hurd and Ken Pettit
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


Std_ROM_Table_t	gM200_Tables[] = {
	{ 0x0003, 5,   TABLE_TYPE_STRING },
	{ 0x0040, 64,  TABLE_TYPE_JUMP },
	{ 0x0080, 271, TABLE_TYPE_MODIFIED_STRING },
	{ 0x018F, 97,  TABLE_TYPE_MODIFIED_STRING },
	{ 0x01F0, 112, TABLE_TYPE_MODIFIED_STRING },
	{ 0x0262, 140, TABLE_TYPE_JUMP },
	{ 0x02EE, 46,  TABLE_TYPE_JUMP },
	{ 0x031C, 62,  TABLE_TYPE_2BYTE },
	{ 0x0372, 163, TABLE_TYPE_CODE },
	{ 0x0415, 23,  TABLE_TYPE_STRING },
	{ 0x0C9F, 19,  TABLE_TYPE_STRING },
	{ 0x0D9C, 17,  TABLE_TYPE_STRING },
	{ 0x15E9, 6,   TABLE_TYPE_JUMP },
	{ 0x1609, 6,   TABLE_TYPE_JUMP },
	{ 0x1613, 10,  TABLE_TYPE_JUMP },
	{ 0x17AD, 10,  TABLE_TYPE_JUMP },
	{ 0x1882, 6,   TABLE_TYPE_JUMP },
	{ 0x1890, 10,  TABLE_TYPE_JUMP },
	{ 0x1908, 10,  TABLE_TYPE_JUMP },
	{ 0x19E6, 8,   TABLE_TYPE_JUMP },
	{ 0x1ADB, 21,  TABLE_TYPE_3BYTE },
	{ 0x21AF, 16,  TABLE_TYPE_STRING },
	{ 0x2D6B, 8,   TABLE_TYPE_STRING },
	{ 0x31F1, 16,  TABLE_TYPE_STRING },
	{ 0x333A, 18,  TABLE_TYPE_STRING },
	{ 0x3464, 14,  TABLE_TYPE_STRING },
	{ 0x3FAD, 32,  TABLE_TYPE_CODE },
	{ 0x3FCD, 2,   TABLE_TYPE_CODE },
	{ 0x3FCF, 88,  TABLE_TYPE_CODE },
	{ 0x4027, 1,   TABLE_TYPE_CODE },
	{ 0x4028, 32,  TABLE_TYPE_CODE },
	{ 0x4048, 1,   TABLE_TYPE_CODE },
	{ 0x4049, 24,  TABLE_TYPE_CODE },
	{ 0x4061, 1,   TABLE_TYPE_CODE },
	{ 0x4062, 32,  TABLE_TYPE_CODE },
	{ 0x4082, 1,   TABLE_TYPE_CODE },
	{ 0x4083, 40,  TABLE_TYPE_CODE },
	{ 0x40AB, 1,   TABLE_TYPE_CODE },
	{ 0x40AC, 64,  TABLE_TYPE_CODE },
	{ 0x40EC, 1,   TABLE_TYPE_CODE },
	{ 0x40ED, 64,  TABLE_TYPE_CODE },
	{ 0x50AD, 24,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x50DB, 80,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x5521, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x5FA8, 33,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5FCA, 16,  TABLE_TYPE_JUMP },
	{ 0x6033, 9,   TABLE_TYPE_STRING },
	{ 0x603C, 30,  TABLE_TYPE_4BYTE_CMD },
	{ 0x605A, 1,   TABLE_TYPE_CODE },
	{ 0x605B, 28,  TABLE_TYPE_CTRL_DELIM },
	{ 0x6142, 9,   TABLE_TYPE_STRING },
	{ 0x6363, 21,  TABLE_TYPE_CTRL_DELIM },
	{ 0x648A, 16,  TABLE_TYPE_JUMP },
	{ 0x649A, 1,   TABLE_TYPE_CODE },
	{ 0x64FD, 18,  TABLE_TYPE_STRING },
	{ 0x650F, 6,   TABLE_TYPE_STRING },
	{ 0x6515, 2,   TABLE_TYPE_CODE },
	{ 0x674F, 79,  TABLE_TYPE_STRING },
	{ 0x6802, 14,  TABLE_TYPE_STRING },
	{ 0x6869, 17,  TABLE_TYPE_STRING },
	{ 0x6903, 18,  TABLE_TYPE_STRING },
	{ 0x696B, 97,  TABLE_TYPE_STRING },
	{ 0x69F1, 21,  TABLE_TYPE_STRING },
	{ 0x6AD1, 9,   TABLE_TYPE_STRING },
	{ 0x6AE0, 6,   TABLE_TYPE_STRING },
	{ 0x6CA9, 8,   TABLE_TYPE_STRING },
	{ 0x6E92, 36,  TABLE_TYPE_3BYTE },
	{ 0x6EB6, 6,   TABLE_TYPE_CODE },
	{ 0x6EBC, 9,   TABLE_TYPE_CODE },
	{ 0x6EC5, 34,  TABLE_TYPE_CTRL_DELIM },
	{ 0x6F16, 11,  TABLE_TYPE_STRING },
	{ 0x7030, 18,  TABLE_TYPE_STRING },
	{ 0x70D7, 22,  TABLE_TYPE_STRING },
	{ 0x70ED, 18,  TABLE_TYPE_4BYTE_CMD },
	{ 0x7106, 8,   TABLE_TYPE_STRING },
	{ 0x710E, 55,  TABLE_TYPE_CTRL_DELIM },
	{ 0x71C5, 15,  TABLE_TYPE_STRING },
	{ 0x71D4, 8,   TABLE_TYPE_CODE },
	{ 0x71DC, 36,  TABLE_TYPE_CTRL_DELIM },
	{ 0x72EE, 17,  TABLE_TYPE_STRING },
	{ 0x72FF, 2,   TABLE_TYPE_CODE },
	{ 0x7301, 21,  TABLE_TYPE_STRING },
	{ 0x7316, 5,   TABLE_TYPE_STRING },
	{ 0x73CF, 64,  TABLE_TYPE_JUMP },
	{ 0x7492, 13,  TABLE_TYPE_STRING },
	{ 0x79C3, 17,  TABLE_TYPE_STRING },
	{ 0x7D04, 28,  TABLE_TYPE_STRING },
	{ 0x7D2C, 84,  TABLE_TYPE_STRING },
	{ 0x7DFF, 9,   TABLE_TYPE_STRING },
	{ 0x7316, 5,   TABLE_TYPE_STRING },
	{ 0x7E9E, 11,  TABLE_TYPE_STRING },
	{ 0x832C, 66,  TABLE_TYPE_CATALOG },
	{ 0x836E, 4,   TABLE_TYPE_CODE },
	{ 0x86CC, 18,  TABLE_TYPE_JUMP },
//	{ 0x7551, 240, TABLE_TYPE_CODE },
//	{ 0x7643, 20,  TABLE_TYPE_CODE },
	{ 0x905E, 5,   TABLE_TYPE_CODE },
	{ 0x9063, 96*8,   TABLE_TYPE_CODE },
	{ 0x9363, 128*8,  TABLE_TYPE_CODE },
	{ 0x9763, 322, TABLE_TYPE_CODE },
	{ 0x9B54, 14,  TABLE_TYPE_CODE },
	{ 0x9C4E, 31,  TABLE_TYPE_STRING },
	{ 0x9C6E, 23,  TABLE_TYPE_STRING },
	{ 0x9F76, 12,  TABLE_TYPE_STRING },
	{ -1, 0, 0 }
};

Std_ROM_Addresses_t gM200_Vars[] = {
	{ 0x0040, R_FUN_VCTR_TBL },			
	{ 0x0080, R_BASIC_TBL },				
	{ 0x018F, R_FUN_TBL_TAB },			
	{ 0x01F0, R_FUN_TBL_SGN },			
	{ 0x0262, R_BASIC_VCTR_TBL },		
	{ 0x02EE, R_MATH_VCTR_TBL },			
	{ 0x031A, R_BASIC_ERR_TXT },			
	{ 0x035A, R_INIT_IMAGE },				
	{ 0x0372, R_XROM_DET_IMAGE },			
	{ 0x0415, R_BASIC_STRINGS },			
	{ 0x1F24, R_CAS_FREQ_CNT },			
	{ 0x4349, R_CAS_FREQ_CNT },			
	{ 0x649A, R_TERM_FKEY_VCTR_TBL },		
	{ 0x5B1E, R_DIR_DISP_ORDER_TBL },		
	{ 0x6EB6, R_TEXT_FKEY_VCTR_TBL },		
	{ 0x6BF1, R_ROM_CAT_ENTRIES },		
	{ 0x832C, R_INT_EXIT_FUN },			
	{ 0x8AB9, R_INT_EXIT_FUN },			
	{ 0x9B54, R_INIT_CLK_VALUES },
	{ 0x7F98, R_MENU_STRINGS },			
	{ 0x9C4E, R_MODEL_NUM_STRING },		
	{ 0xEEB0, R_ACTIVE_SIGNATURE },		
	{ 0xF5F4, R_HIMEM },					
	{ 0xEEB4, R_RST_5_5_VCTR },			
	{ 0xEEBF, R_RST_6_5_VCTR },			
	{ 0xEEC2, R_RST_7_5_VCTR },			
	{ 0xEEC5, R_TRAP_VCTR },            	
	{ 0xEEF3, R_OPTION_ROM_FLAG },      	
	{ 0xEF44, R_DIAL_SPEED },           	
	{ 0xEEFD, R_FKEY_STAT_TBL },        	
	{ 0xEF05, R_NEW_CONSOLE_FLAG },     	
	{ 0xEF06, R_CURSOR_ROW },
	{ 0xEF07, R_CURSOR_COL },           	
	{ 0xEF08, R_ACTIVE_ROW_CNT },       	
	{ 0xEF09, R_ACTIVE_COL_CNT },       	
	{ 0xEF0A, R_LABEL_LINE_PROT },      	
	{ 0xEF0B, R_SCROLL_DISABLE },       	
	{ 0xEF0C, R_CURSOR_STAT },          	
	{ 0xEF0D, R_CURSOR_ROW2 },          	
	{ 0xEF13, R_ESC_MODE_FLAG },        	
	{ 0xEF15, R_REV_VID_SWITCH },       	
	{ 0xEF30, R_LAST_PLOT_X },          	
	{ 0xEF31, R_LAST_PLOT_Y },          	
	{ 0xEF37, R_PWR_OFF_STAT },         	
	{ 0xEF39, R_DUPLEX_SWITCH },        	
	{ 0xEF3B, R_RS232_LF_SWITCH },      	
	{ 0xEF3C, R_RS232_PARAM_TBL },      	
	{ 0xEF49, R_ADDRESS_LAST_CALLED },  	
	{ 0xEF52, R_OUT_STMT_HOOK },        	
	{ 0xEF55, R_INP_STMT_HOOK },        	
	{ 0xEF5D, R_LAST_ERROR_CODE },      	
	{ 0xEF5F, R_LPT_HEAD_POS },         	
	{ 0xEF60, R_OUTPUT_DEVICE },        	
	{ 0xEF63, R_BASIC_STR_BUF_PTR },    	
	{ 0xEF65, R_CUR_BASIC_LINE_NUM }, 
	{ 0xEF67, R_START_BASIC_PGM_PTR },  	
	{ 0xEF6B, R_END_OF_STMT_MARKER },   	
	{ 0xEF70, R_KEYBOARD_BUF },         	
	{ 0xF073, R_CURSOR_H_POS },         	
	{ 0xF074, R_FKEY_DEF_BUF },         	
	{ 0xF0F5, R_BASIC_FKEY_DEF_BUF },   	
	{ 0xF177, R_FILE_RAM_END },         	
	{ 0xF212, R_SEC_ONES },             	
	{ 0xF213, R_SEC_TENS },             	
	{ 0xF214, R_MIN_ONES },             	
	{ 0xF215, R_MIN_TENS },             	
	{ 0xF216, R_HR_ONES },              	
	{ 0xF217, R_HR_TENS },              	
	{ 0xF218, R_DATE_ONES },            	
	{ 0xF219, R_DATE_TENS },            	
	{ 0xF21A, R_DAY_CODE },             	
	{ 0xF21B, R_MONTH },                	
	{ 0xF21C, R_YEAR_ONES },            	
	{ 0xF21D, R_YEAR_TENS },            	
	{ 0xF764, R_SEC_ONES2 },            	
	{ 0xF765, R_SEC_TENS2 },            	
	{ 0xF766, R_MIN_ONES2 },            	
	{ 0xF767, R_MIN_TENS2 },            	
	{ 0xF768, R_HR_ONES2 },             	
	{ 0xF769, R_HR_TENS2 },             	
	{ 0xF76A, R_DATE_ONES2 },           	
	{ 0xF76B, R_DATE_TENS2 },           	
	{ 0xF76C, R_DAY_CODE2 },            	
	{ 0xF22D, R_ONTIME_TIME },          	
	{ 0xF234, R_ONCOM_FLAG },           	
	{ 0xF235, R_ONCOM_ADDRESS },        	
	{ 0xF237, R_ONTIME_FLAG },          	
	{ 0xF252, R_DIR_RAM_START },        	
	{ 0xF295, R_UNSAVED_BASIC_PTR },    	
	{ 0xF2A0, R_PASTE_RAM_START },      	
	{ 0xF4DB, R_LAST_CHAR_PRINTED },    	
	{ 0xF4DC, R_LABEL_ENABLE_FLAG },    	
	{ 0xFCFF, R_PORT_A8H },             	
	{ 0xF4DD, R_IPL_FILENAME_START },   	
	{ 0xF4E8, R_BASIC_LIST_START },     	
	{ 0xF4EC, R_SP_SAVE_BUF },   
	{ 0xF4EE, R_LOWEST_RAM },           	
	{ 0xF4F7, R_RST_38H_OFFSET },       	
	{ 0xF4FD, R_LAST_PGRM_LEN },        	
	{ 0xF507, R_RST_38H_VCTR_TBL },     	
	{ 0xF617, R_VAR_CREATE_LOC_FLAG },  	
	{ 0xF618, R_LAST_VAR_TYPE },        	
	{ 0xF61A, R_FILE_BUF_PTR },         	
	{ 0xF647, R_DATA_STMT_LINE_NUM },   	
	{ 0xF649, R_FOR_NEXT_ACTIVE_FLAG }, 	
	{ 0xF64C, R_LAST_VAR_ASSIGNED_ADDR },	
	{ 0xF64E, R_RUNNING_LINE_NUM_ADDR },	
	{ 0xF650, R_BASIC_SP_BUF },         	
	{ 0xF652, R_LAST_ERR_LINE_NUM },    	
	{ 0xF654, R_LAST_ENTERED_LINE_NUM },	
	{ 0xF656, R_ERR_PTR },              	
	{ 0xF658, R_ONERROR_ADDRESS },      	
	{ 0xF65A, R_BASIC_RUNNING},      	
	{ 0xF65D, R_BREAK_LINE_NUM },       	
	{ 0xF65F, R_BREAK_ADDRESS },        	
	{ 0xF661, R_DO_FILES_PTR },         	
	{ 0xF663, R_CO_FILES_PTR },         	
	{ 0xF665, R_VAR_PTR },              	
	{ 0xF667, R_ARRAY_TBL_PTR },        	
	{ 0xF669, R_UNUSED_MEM_PTR },       	
	{ 0xF66B, R_DATA_SEARCH_ADDR },     	
	{ 0xF66D, R_DEF_TBL },              	
	{ 0xF69A, R_FP_TEMP1 },           	
	{ 0xF6CB, R_FP_FAC1 },              	
	{ 0xF6CD, R_INT_FAC1 },             	
	{ 0xF713, R_FP_TEMP2 },           	
	{ 0xF71C, R_FP_FAC2 },              	
	{ 0xF71E, R_INT_FAC2 },             	
	{ 0xF72C, R_FP_TEMP3 },           	
	{ 0xF735, R_MAXFILES },             	
	{ 0xF736, R_FILE_NUM_TBL_PTR },     	
	{ 0xF746, R_BASIC_FILENAME },       	
	{ 0xF74F, R_LAST_LOAD_FILENAME },   	
	{ 0xF7B0, R_ALT_LCD_CHAR_BUF },     	
	{ 0xF7C9, R_MENU_TO_RAM_MAP },      	
	{ 0xF848, R_CUR_MENU_DIR_LOC },     	
	{ 0xF849, R_MAX_MENU_DIR_LOC },     	
	{ 0xFA30, R_LCD_CHAR_BUF },
	{ 0xFCF0, R_XON_XOFF_CTRL },        	
	{ 0xFCF1, R_XON_XOFF_CTRL },        	
	{ 0xFCF2, R_XON_XOFF_ENABLE },      	
	{ 0xFCF3, R_RS232_INIT_STAT },
	{ 0xFCF4, R_SOUND_FLAG },           	
	{ 0xFCFF, R_PORT_E8H },             	
	{ 0xFFBB, R_RS232_CHAR_BUF },       	
	{ 0xFCF5, R_RS232_BUF_CNT },        	
	{ 0xFCF6, R_RS232_BUF_OUT },        	
	{ 0xFCF7, R_RS232_BUF_IN },         	
	{ 0xFCF9, R_CTRL_S_STAT },          	
	{ 0xFCFA, R_UART_BAUD_TIMER_VAL },  	
	{ 0xFCFC, R_RS232_PARITY_CTRL },    	
	{ 0xFCFD, R_CAS_PULSE_CTRL },       	
	{ 0xFD0D, R_KEY_SCAN_STORAGE1 },    	
	{ 0xFD16, R_KEY_SCAN_STORAGE2 },    	
	{ 0xFD17, R_SHIFT_KEY_STAT },       	
	{ 0xFD18, R_KEY_REPT_START },       	
	{ 0xFD1A, R_KEY_POSITION },         	
	{ 0xFD1C, R_2ND_KEY_BUF_PTR },      	
	{ 0xFD1E, R_KEY_BUF_CNT },          	
	{ 0xFD60, R_CURSOR_BIT_PAT_BUF },   	
	{ -1, -1 }
};

Std_ROM_Addresses_t gM200_Funs[] = {
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
	{ 0x0372, R_FUN_XROM_IMAGE },          
	{ 0x0415, R_FUN_BASIC_STRINGS },       
	{ 0x042C, R_POP_FOR_NEXT },            
	{ 0x044D, R_INIT_AND_READY },          
	{ 0x0471, R_GEN_SN_ERROR },            
	{ 0x0474, R_GEN_d0_ERROR },            
	{ 0x0477, R_GEN_NF_ERROR },            
	{ 0x047A, R_GEN_DD_ERROR },            
	{ 0x047D, R_GEN_RW_ERROR },            
	{ 0x0480, R_GEN_OV_ERROR },            
	{ 0x0483, R_GEN_MO_ERROR },            
	{ 0x0486, R_GEN_TM_ERROR },            
	{ 0x0488, R_GEN_ERR_IN_E },            
	{ 0x04B8, R_RESTORE_JMP_BC },          
	{ 0x04F0, R_PRINT_BASIC_ERR },         
	{ 0x052C, R_POP_GO_BASIC_RDY },        
	{ 0x052D, R_GO_BASIC_RDY_OK },         
	{ 0x053C, R_GO_BASIC_RDY },            
	{ 0x054E, R_PERFORM_M_GO_RDY },        
	{ 0x061B, R_UPDATE_LINE_ADDR },        
	{ 0x0635, R_EVAL_LIST_ARGS },          
	{ 0x0653, R_FIND_LINE_IN_DE },         
	{ 0x0656, R_FIND_LINE_DE_AT_HL },      
	{ 0x0671, R_TOKEN_COMPRESS },          
	{ 0x0751, R_FOR_STMT },                
	{ 0x0796, R_TO_STMT },                 
	{ 0x07AE, R_STEP_STMT },               
	{ 0x082F, R_RUN_BASIC_PGRM },          
	{ 0x0865, R_RUN_BASIC_AT_HL },         
	{ 0x086B, R_EXEC_INST_IN_A },          
	{ 0x0883, R_RST_10H_INC_HL },          
	{ 0x0884, R_RST_10H },                 
	{ 0x089D, R_DEF_STMT },                
	{ 0x08AC, R_DEFDBL_STMT },             
	{ 0x08B1, R_DEFINT_STMT },             
	{ 0x08C1, R_DEFSNG_STMT },             
	{ 0x08CA, R_DEFSTR_STMT },             
	{ 0x08CC, R_DECL_VAR_TYPE_E },         
	{ 0x0906, R_GEN_FC_ERROR },            
	{ 0x090B, R_EVAL_LINE_NUM },           
	{ 0x0916, R_ASCII_TO_BIN },            
	{ 0x0917, R_ASCII_TO_BIN_PREINC },     
	{ 0x093A, R_RUN_STMT },                
	{ 0x0949, R_GOSUB_STMT },              
	{ 0x0961, R_GOTO_STMT },               
	{ 0x0978, R_GEN_UL_ERROR },            
	{ 0x0991, R_RETURN_STMT },             
	{ 0x09C9, R_DATA_STMT },               
	{ 0x09CB, R_REM_STMT },                
	{ 0x09EE, R_LET_STMT },                
	{ 0x0A5A, R_ON_STMT },                 
	{ 0x0A5F, R_ON_ERROR_STMT },           
	{ 0x0A86, R_ON_KEY_STMT },             
	{ 0x0ABF, R_ON_TIME_STMT },            
	{ 0x0ADB, R_RESUME_STMT },             
	{ 0x0B3A, R_ERROR_STMT },              
	{ 0x0B45, R_IF_STMT },                 
	{ 0x0B79, R_LPRINT_STMT },             
	{ 0x0B81, R_PRINT_STMT },              
	{ 0x0C2C, R_TAB_STMT },                
	{ 0x0C70, R_LINE_STMT },               
	{ 0x0CC4, R_INPUT_NO_STMT },           
	{ 0x0CCE, R_INPUT_STMT },              
	{ 0x0D04, R_READ_STMT },               
	{ 0x0DD6, R_EVAL_BASIC_INST },         
	{ 0x0F38, R_INT16_DIV },               
	{ 0x0F47, R_EVAL_FUN },                
	{ 0x0F72, R_ERR_FUN },                 
	{ 0x0F81, R_ERL_FUN },                 
	{ 0x0FA9, R_VARPTR_FUN },              
	{ 0x0FB1, R_VARPTR_BUF_FUN },          
	{ 0x0FBD, R_VARPTR_VAR_FUN },          
	{ 0x1005, R_EVAL_VAR },                
	{ 0x1013, R_CONV_M_TOUPPER },          
	{ 0x1014, R_CONV_A_TOUPPER },          
	{ 0x1062, R_ASCII_NUM_CONV },          
	{ 0x107E, R_NOT_FUN },                 
	{ 0x1093, R_RST_28H },                 
	{ 0x10B6, R_OR_FUN },                   
	{ 0x10C1, R_AND_FUN },                 
	{ 0x10CC, R_XOR_FUN },                 
	{ 0x10D7, R_EQV_FUN },                 
	{ 0x10DF, R_IMP_FUN },                 
	{ 0x10F2, R_LPOS_FUN },                
	{ 0x10F8, R_POS_FUN },                 
	{ 0x10FB, R_LD_FAC1_INT },             
	{ 0x1110, R_CHK_RUNNING_PGRM },        
	{ 0x1119, R_GEN_ID_ERROR },            
	{ 0x112A, R_INP_FUN },                 
	{ 0x1136, R_OUT_STMT },                
	{ 0x113C, R_EVAL_EXPR },               
	{ 0x113D, R_EVAL_EXPR_PREDEC },        
	{ 0x1157, R_EVAL_EXPR },               
	{ 0x1158, R_EVAL_EXPR_PREDEC },        
	{ 0x1165, R_LLIST_STMT },              
	{ 0x116A, R_LIST_STMT },               
	{ 0x11CC, R_BUF_TO_LCD },              
	{ 0x12B0, R_PEEK_FUN },                
	{ 0x12B7, R_POKE_FUN },                
	{ 0x12C3, R_EVAL_EXPR },               
	{ 0x12F7, R_WAIT_KEY },                
	{ 0x13CE, R_TOGGLE_LABEL },            
	{ 0x140A, R_CHK_KEY_QUEUE }, 
	{ 0x146A, R_POWER_STMT },              
	{ 0x14B2, R_LOW_PWR_TRAP },     //????
	{ 0x1549, R_POWER_DOWN },              
	{ 0x1572, R_POWER_CONT_STMT },         
	{ 0x157A, R_POWER_ON_STMT },           
	{ 0x1590, R_OUT_CH_TO_LPT },           
	{ 0x15A2, R_LOAD_CAS_HDR },            
	{ 0x15AC, R_GEN_IO_ERROR },            
	{ 0x15B1, R_DET_CAS_SYNC_HDR },        
	{ 0x15C0, R_CAS_MOTOR_ON },            
	{ 0x15C2, R_CAS_MOTOR_OFF },           
	{ 0x15C8, R_CAS_READ_BYTE },           
	{ 0x15D9, R_CAS_WRITE_BYTE },          
	{ 0x15E9, R_LCD_DCB },                 
	{ 0x15EF, R_LCD_OPEN },                
	{ 0x15FC, R_LCD_OUT },                 
	{ 0x1604, R_POP_ALL_REGS },            
	{ 0x1609, R_CRT_DCB },                 
	{ 0x1613, R_RAM_DCB },                 
	{ 0x161D, R_RAM_OPEN },                
	{ 0x16A4, R_RAM_CLOSE },               
	{ 0x16D0, R_RAM_OUT },                 
	{ 0x16F2, R_RAM_IN },                  
	{ 0x1749, R_RAM_IO },                  
	{ 0x17AD, R_CAS_DCB },                 
	{ 0x17B7, R_CAS_OPEN },                
	{ 0x17DB, R_CAS_CLOSE },               
	{ 0x17F5, R_CAS_OUT },                 
	{ 0x1800, R_CAS_IN },                  
	{ 0x1882, R_LPT_DCB },                 
	{ 0x1888, R_LPT_OUT },                 
	{ 0x1890, R_COM_DCB },                 
	{ 0x189A, R_MDM_OPEN },                
	{ 0x189B, R_COM_OPEN },                
	{ 0x18D2, R_COM_CLOSE },               
	{ 0x18DC, R_COM_OUT },                 
	{ 0x18E7, R_COM_IN },                  
	{ 0x1901, R_COM_IO },                  
	{ 0x1908, R_MDM_DCB },                 
	{ 0x1912, R_MDM_CLOSE },               
	{ 0x191D, R_SET_RS232_PARAMS },        
	{ 0x19E6, R_BCR_DCB },                 
	{ 0x19F8, R_EOF_FUN },                 
	{ 0x1A73, R_TIME_FUN },                
	{ 0x1A7E, R_READ_TIME },               
	{ 0x1A9E, R_DATE_FUN },                
	{ 0x1AB8, R_DAY_FUN },                 
	{ 0x1AC5, R_READ_DAY },                
	{ 0x1B03, R_UPDATE_CLK_VALUES },       
	{ 0x1B0E, R_TIME_STMT },               
	{ 0x1B16, R_UPDATE_CLK_CHIP },         
	{ 0x1B23, R_DATE_STMT },               
	{ 0x1B67, R_DAY_STMT },                
	{ 0x1BB6, R_GET_TIME_STRING },         
	{ 0x1BFC, R_IPL_STMT },                
	{ 0x1C1A, R_ERASE_IPL_PRGM },          
	{ 0x1C22, R_COM_MDM_STMT },            
	{ 0x1C36, R_KEY_FUN },                 
	{ 0x1C47, R_KEY_ON_OFF_STMT },         
	{ 0x1C6E, R_DET_TIME_ARG },            
	{ 0x1C80, R_DET_DEVICE_ARG },          
	{ 0x1C93, R_ONTIME_STMT },             
	{ 0x1CA6, R_ONCOM_STMT },              
	{ 0x1CB6, R_RST7_5_ISR },              
	{ 0x2697, R_KICK_PWR_OFF_WDT },        
	{ 0x269E, R_KEY_STMT },                
	{ 0x26A3, R_KEY_LIST_STMT },           
	{ 0x26C6, R_SEND_CHARS_TO_LCD },       
	{ 0x273D, R_PSET_STMT },               
	{ 0x274C, R_PRESET_STMT },             
	{ 0x2753, R_LINE_STMT },               
	{ 0x278C, R_DRAW_FBOX },               
	{ 0x27A2, R_DRAW_BOX },                
	{ 0x2814, R_TOKENIZE_XY },             
	{ 0x2876, R_CSRLIN_FUN },              
	{ 0x2881, R_MAX_FUN },                 
	{ 0x288D, R_MAXRAM_FUN },              
	{ 0x2898, R_MAXFILES_FUN },            
	{ 0x289F, R_HIMEM_FUN },               
	{ 0x28A9, R_WIDTH_STMT },              
	{ 0x28AB, R_SOUND_STMT },              
	{ 0x28CB, R_SOUND_OFF_STMT },          
	{ 0x28CC, R_SOUND_ON_STMT },           
	{ 0x28D2, R_MOTOR_STMT },              
	{ 0x28D7, R_MOTOR_ON_STMT },           
	{ 0x28DB, R_MOTOR_OFF_STMT },          
	{ 0x28E0, R_CALL_STMT },               
	{ 0x2908, R_SCREEN_STMT },             
	{ 0x2946, R_LCOPY_STMT },              
	{ 0x2A2C, R_FILES_STMT },              
	{ 0x2A34, R_DISPLAY_CAT },             
	{ 0x2A88, R_KILL_STMT },               
	{ 0x2AB4, R_KILL_TEXT_FILE },          
	{ 0x2B40, R_NAME_STMT },               
	{ 0x2C1B, R_NEW_STMT },                
	{ 0x2D43, R_STRLEN },                  
	{ 0x2D73, R_GET_FIND_DO_FILE },        
	{ 0x2D7C, R_OPEN_TEXT_FILE },          
	{ 0x2FDB, R_CSAVE_STMT },              
	{ 0x3014, R_CAS_WRITE_BUF },           
	{ 0x3027, R_SAVEM_STMT },              
	{ 0x3038, R_CSAVEM_STMT },             
	{ 0x30E7, R_CLOAD_STMT },              
	{ 0x3183, R_CAS_READ_REC },            
	{ 0x31E8, R_GEN_VERIFY_FAIL_ERR },     
	{ 0x3201, R_LOADM_STMT },           
	{ 0x3217, R_CLOADM_STMT },          
	{ 0x32A7, R_MOVE_B_BYTES },         
	{ 0x32B0, R_EXEC_CO_FILE },         
	{ 0x3370, R_CAS_OPEN_OUT_BA },      
	{ 0x3373, R_CAS_OPEN_OUT_DO },      
	{ 0x3376, R_CAS_OPEN_OUT_CO },      
	{ 0x33B5, R_CAS_OPEN_IN_BA },       
	{ 0x33B8, R_CAS_OPEN_IN_DO },       
	{ 0x33BB, R_CAS_OPEN_IN_CO },       
	{ 0x34A0, R_STR_FUN },              
	{ 0x3517, R_PRINT_STRING },         
	{ 0x3675, R_MOVE_L_BYTES },         
	{ 0x36A9, R_LEN_FUN },              
	{ 0x36B5, R_ASC_FUN },              
	{ 0x36C5, R_CHR_FUN },              
	{ 0x36D3, R_STRING_FUN },           
	{ 0x36F4, R_SPACE_FUN },            
	{ 0x3711, R_LEFT_FUN },             
	{ 0x3742, R_RIGHT_FUN },            
	{ 0x374C, R_MID_FUN },              
	{ 0x376D, R_VAL_FUN },              
	{ 0x379D, R_INSTR_FUN },            
	{ 0x38B2, R_FRE_FUN },              
	{ 0x38CF, R_DBL_SUB },              
	{ 0x38E7, R_DBL_ADD },              
	{ 0x39BE, R_BCD_ADD },              
	{ 0x3A74, R_DBL_MULT },             
	{ 0x3B3C, R_DBL_DIV },              
	{ 0x3C5E, R_MOVE_C_BYTES },         
	{ 0x3C67, R_COS_FUN },              
	{ 0x3C81, R_SIN_FUN },              
	{ 0x3CD0, R_TAN_FUN },              
	{ 0x3CE9, R_ATN_FUN },              
	{ 0x3D47, R_LOG_FUN },              
	{ 0x3DD2, R_SQR_FUN },              
	{ 0x3E1C, R_EXP_FUN },              
	{ 0x3EB6, R_RND_FUN },              
	{ 0x3EFA, R_INIT_TEMP3 },              
//	{ 0x3F18, R_DBL_SQR },              
//	{ 0x3F1B, R_MULT_M_FAC2 },          
	{ 0x3F03, R_FAC2_EQ_FAC1 },         
	{ 0x3F06, R_FAC2_EQ_FP },           
	{ 0x3F0F, R_FAC1_EQ_FAC2 },         
	{ 0x3F12, R_FAC1_EQ_FP },           
	{ 0x3F1E, R_M_EQ_FAC1 },            
	{ 0x3F1E, R_MULT_FAC1_SQR_FAC1 },   
	{ 0x3F1E, R_SWAP_FAC1_FAC2 },       
	{ 0x3F3F, R_SQR_FAC1_MULT_TBL },    
	{ 0x3F5A, R_TBL_BASED_MATH },       
	{ 0x3F7F, R_PUSH_FAC2 },            
	{ 0x3F85, R_PUSH_FAC1 },            
	{ 0x3F96, R_POP_FAC2 },             
	{ 0x3F9C, R_POP_FAC1 },             
	{ 0x3FAD, R_FP_NUMBERS },           
	{ 0x3FCD, R_FP_SHARED_NUMBERS },    
	{ 0x3FCF, R_FP_NUMBERS },           
	{ 0x4027, R_EXP_MATH_TBL },         
	{ 0x4048, R_EXP_MATH_TBL },         
	{ 0x4061, R_LOG_MATH_TBL },         
	{ 0x4082, R_LOG_MATH_TBL },         
	{ 0x40AB, R_SIN_MATH_TBL },         
	{ 0x40EC, R_ATN_MATH_TBL },         
	{ 0x412D, R_RST_30H_FUN },          
	{ 0x4143, R_ABS_FUN },              
	{ 0x4158, R_SGN_FUN },              
	{ 0x4173, R_PUSH_SNGL_FAC1 },       
	{ 0x4180, R_SNGL_FAC1_EQ_M },       
	{ 0x4183, R_SNGL_FAC1_EQ_BCDE },    
	{ 0x418E, R_SNGL_BCDE_EQ_FAC1 },    
	{ 0x4198, R_SNGL_BCDE_EQ_M },       
	{ 0x41A1, R_SNGL_DECB_EQ_M },       
	{ 0x41AA, R_SNGL_M_EQ_FAC1 },       
	{ 0x41B2, R_LOAD_FAC2_FROM_M },     
	{ 0x41BA, R_MOVE_B_BYTES_INC },     
	{ 0x41C3, R_MOVE_B_BYTES_DEC },     
	{ 0x41E9, R_SNGL_CMP_BCDE_FAC1 },   
	{ 0x4201, R_SNGL_CMP_BCDE_M },      
	{ 0x4213, R_SINT_CMP },             
	{ 0x424E, R_CMP_FAC1_FAC2 },        
	{ 0x4255, R_CINT_FUN },             
	{ 0x4264, R_FAC1_EQ_SINT_HL },      
	{ 0x427E, R_CSNG_FUN },             
	{ 0x4294, R_CONV_SINT_SNGL },       
	{ 0x4297, R_CONV_SINT_HL_SNGL },    
	{ 0x430E, R_CDBL_FUN },             
	{ 0x434C, R_SINT_SUB },             
	{ 0x4399, R_FIX_FUN },              
	{ 0x43A8, R_INT_FUN },              
	{ 0x4458, R_SINT_ADD },             
	{ 0x4479, R_SINT_MULT },            
	{ 0x44D2, R_SINT_DIV },             
	{ 0x4548, R_SNGL_ADD_BCDE },        
	{ 0x454B, R_SNGL_ADD_FAC2 },        
	{ 0x4551, R_SNGL_SUB },             
	{ 0x4557, R_SNGL_MULT_BCDE },       
	{ 0x455A, R_SNGL_MULT_FAC2 },       
	{ 0x4562, R_SNGL_DIV },             
	{ 0x457B, R_SNGL_LOAD },            
	{ 0x4594, R_ASCII_TO_DBL },         
	{ 0x45B9, R_ASCII_FND_e },          
	{ 0x45D1, R_ASCII_FND_E },          
	{ 0x4643, R_ASCII_FND_DOT },        
	{ 0x4659, R_ASCII_FND_PERC },       
	{ 0x4668, R_ASCII_FND_LB },         
	{ 0x4670, R_ASCII_CONV_HELPER },    
	{ 0x467F, R_ASCII_CONV_HELPER2 },   
	{ 0x4703, R_PRNT_BASIC_ERR_TERM },  
	{ 0x470B, R_PRINT_HL_ON_LCD },      
	{ 0x471F, R_PRINT_FAC1 },           
	{ 0x472F, R_PRINT_FAC1_FORMAT },    
//	{ 0x4A54, R_FAC1_EQ_ZERO },         
	{ 0x4AA2, R_SNGL_EXP },             
	{ 0x4AB1, R_DBL_EXP },              
	{ 0x4B1A, R_INT_EXP },              
	{ 0x4C43, R_INIT_BASIC_VARS },         
	{ 0x4CBB, R_TIME_ON_STMT },         
	{ 0x4CCD, R_TIME_OFF_STMT },        
	{ 0x4CD4, R_TIME_STOP_STMT },       
	{ 0x4CED, R_TRIG_INTR },            
	{ 0x4D0C, R_CLEAR_INTR },           
	{ 0x4D24, R_CLEAR_COM_INT_DEF },    
	{ 0x4D9A, R_RESTORE_STMT },         
	{ 0x4DB5, R_STOP_STMT },            
	{ 0x4DBA, R_END_STMT },             
	{ 0x4DF5, R_CONT_STMT },            
	{ 0x4E0C, R_ISALPHA_M },            
	{ 0x4E0D, R_ISALPHA_A },            
	{ 0x4E14, R_CLEAR_STMT },           
	{ 0x4E90, R_NEXT_STMT },            
	{ 0x4F3E, R_SEND_CRLF },            
	{ 0x4F41, R_SEND_LF },              
	{ 0x4F45, R_BEEP_STMT },            
	{ 0x4F49, R_HOME_CURSOR },          
	{ 0x4F4D, R_CLS_STMT },             
	{ 0x4F54, R_PROTECT_LABEL },        
	{ 0x4F59, R_UNPROT_LABEL },         
	{ 0x4F5E, R_STOP_AUTO_SCROLL },     
	{ 0x4F63, R_RESUME_AUTO_SCROLL },   
	{ 0x4F68, R_TURN_CURSOR_ON },       
	{ 0x4F6D, R_TURN_CURSOR_OFF },      
	{ 0x4F72, R_DEL_CUR_LINE },         
	{ 0x4F77, R_INSERT_LINE },          
	{ 0x4F7C, R_ERASE_TO_EOL },         
	{ 0x4F81, R_SEND_ESC_X },           
	{ 0x4F88, R_INV_CHAR_ENABLE },      
	{ 0x4F8D, R_INV_CHAR_DISABLE },     
	{ 0x4F8F, R_END_ESC_SEQ },          
	{ 0x4F96, R_CURSOR_TO_LOW_LEFT },   
	{ 0x4F9B, R_SET_CURSOR_POS },       
	{ 0x4FA9, R_ERASE_FKEY_DISP },      
	{ 0x4FC4, R_SET_DISP_FKEY },        
	{ 0x4FC7, R_DISP_FKEY_LINE },       
	{ 0x5030, R_PRINT_A_TO_LCD },       
//	{ 0x4431, R_CHAR_PLOT_3 },          
	{ 0x504D, R_CHAR_PLOT_4 },          
	{ 0x5062, R_CHAR_PLOT_5 },             
	{ 0x5082, R_LF_FUN },               
	{ 0x5096, R_LCD_OUT_DRIVER },       
	{ 0x50AD, R_RST_20H_LKUP_TBL },     
	{ 0x50D2, R_ESC_Y },                
	{ 0x50D5, R_LCD_OUT_ESC_FUN },      
	{ 0x50DB, R_LCD_ESC_LKUP_TBL },     
	{ 0x5129, R_ESC_SEQ_DRIVER },       
	{ 0x5160, R_ESC_p_FUN },            
	{ 0x5161, R_ESC_q_FUN },            
	{ 0x5166, R_ESC_U_FUN },            
	{ 0x5168, R_ESC_T_FUN },            
	{ 0x5169, R_ESC_X_FUN },            
	{ 0x516E, R_ESC_V_FUN },            
	{ 0x516F, R_ESC_W_FUN },            
	{ 0x5182, R_ESC_C_FUN },            
	{ 0x518B, R_ESC_D_FUN },            
	{ 0x5190, R_BKSPACE_FUN },          
	{ 0x5198, R_ESC_A_FUN },            
	{ 0x519D, R_ESC_B_FUN },            
	{ 0x51AF, R_TAB_FUN },              
	{ 0x51C5, R_ESC_H_FUN },            
	{ 0x51C7, R_CR_FUN },               
	{ 0x51CC, R_ESC_P_FUN },            
	{ 0x51CD, R_ESC_Q_FUN },            
	{ 0x51DD, R_ESC_M_FUN },            
	{ 0x51F0, R_LCD_SCROLL },           
	{ 0x5240, R_ESC_L_FUN },            
	{ 0x52FB, R_GET_LCD_CHAR },         
	{ 0x5314, R_ESC_l_FUN },            
	{ 0x5316, R_ESC_K_FUN },            
	{ 0x532D, R_CLS_FUN },              
	{ 0x5333, R_ESC_J_FUN },            
	{ 0x5345, R_CHAR_PLOT_6 },          
	{ 0x54F0, R_INP_DISP_LINE },        
	{ 0x54F6, R_INP_DISP_LINE_NO_Q },   
	{ 0x5536, R_INP_CTRL_C_HANDLER },   
	{ 0x5549, R_INP_ENTER_HANDLER },    
	{ 0x5555, R_INP_BKSP_HANDLER },     
	{ 0x5578, R_INP_CTRL_U_HANDLER },   
	{ 0x557F, R_INP_TAB_HANDLER },      
	{ 0x563F, R_DIM_STMT },             
	{ 0x5644, R_FIND_VAR_ADDR },        
	{ 0x5845, R_USING_FUN },            
	{ 0x5A05, R_SEND_A_LCD_LPT },       
	{ 0x5A14, R_PRINT_A_EXPAND },       
	{ 0x5A56, R_SET_OUT_DEV_LCD },      
	{ 0x5A6A, R_LCD_CHAR_OUT_FUN },     
	{ 0x5A77, R_LCD_NEW_LINE },         
	{ 0x5AA9, R_INKEY_FUN },            
	{ 0x5B43, R_GET_FILE_DESC },        
	{ 0x5B8A, R_OPEN_STMT },            
	{ 0x5C18, R_LCD_CLOSE_FUN },        
	{ 0x5C2D, R_RUN_STMT },             
	{ 0x5C2F, R_LOAD_STMT },            
	{ 0x5C30, R_MERGE_STMT },           
	{ 0x5C8E, R_SAVE_STMT },            
	{ 0x5CE7, R_CLOSE_STMT },           
	{ 0x5D4A, R_INPUT_STMT },           
	{ 0x5DC1, R_CLEAR_MEM },            
	{ 0x5DC2, R_LOAD_MEM },             
	{ 0x5DE5, R_PRINT_LB_INIT_FUN },    
	{ 0x5E12, R_LINE_INPUT_STMT },      
	{ 0x5F05, R_GEN_NM_ERR_FUN },       
	{ 0x5F08, R_GEN_AO_ERR_FUN },       
	{ 0x5F0B, R_GEN_DS_ERR_FUN },       
	{ 0x5F0E, R_GEN_FF_ERR_FUN },       
	{ 0x5F11, R_GEN_CF_ERR_FUN },       
	{ 0x5F14, R_GEN_BN_ERR_FUN },       
	{ 0x5F17, R_GEN_IE_ERR_FUN },       
	{ 0x5F1A, R_GEN_EF_ERR_FUN },       
	{ 0x5F1D, R_GEN_FL_ERR_FUN },       
	{ 0x5F22, R_LOF_FUN },              
	{ 0x5F24, R_LOC_FUN },              
	{ 0x5F26, R_LFILES_FUN },           
	{ 0x5F28, R_DSKO_FUN },             
	{ 0x5F2A, R_DSKI_FUN },             
	{ 0x5FA8, R_DEV_NAME_TBL },         
	{ 0x5FCA, R_DCB_VCTR_TBL },         
	{ 0x5FFD, R_TELCOM_ENTRY },         
	{ 0x6012, R_TELCOM_RE_ENTRY },      
	{ 0x603C, R_TELCOM_INST_VCTR_TBL }, 
	{ 0x605B, R_TELCOM_LABEL_TXT },     
	{ 0x6077, R_TELCOM_STAT_FUN },      
	{ 0x607E, R_PRINT_TELCOM_STAT },    
	{ 0x60A4, R_SET_TELCOM_STAT },      
	{ 0x612D, R_TELCOM_CALL_FUN },      
	{ 0x614B, R_TELCOM_FIND_FUN },      
	{ 0x61B2, R_GO_OFFHOOK },           
	{ 0x61BA, R_DISCONNECT_PHONE },     
	{ 0x61D0, R_CONNECT_PHONE },        
	{ 0x61E7, R_GO_OFFHOOK_WAIT },      
	{ 0x620E, R_TELCOM_PAUSE },         
	{ 0x622B, R_EXEC_LOGON_SEQ },       
	{ 0x6261, R_DIALING_FUN },          
	{ 0x62B0, R_AUTO_LOGIN_SEQ },       
	{ 0x632A, R_DIAL_DIGIT },           
	{ 0x6378, R_TELCOM_TERM_FUN },      
	{ 0x6479, R_TELCOM_DISPATCH },      
	{ 0x648A, R_TERM_FKEY_VCTR_TBL },   
	{ 0x649D, R_TELCOM_PREV_FUN },      
	{ 0x64B8, R_TELCOM_FULL_FUN },      
	{ 0x64CA, R_TELCOM_ECHO_FUN },      
	{ 0x6517, R_TELCOM_UP_FUN },        
	{ 0x6608, R_TELCOM_DOWN_FUN },      
	{ 0x66DB, R_TELCOM_BYE_FUN },       
	{ 0x679E, R_PRINT_STRING },         
	{ 0x67A4, R_MENU_ENTRY },           
	{ 0x6828, R_DISP_DIR },             
	{ 0x6860, R_MENU_CTRL_U_HANDLER },  
	{ 0x6A08, R_MENU_CMD_LOOP },        
//	{ 0x588E, R_MENU_BKSP_HANDLER },    
//	{ 0x58F7, R_MENU_ENTER_HANDLER },   
	{ 0x6AEF, R_EXEC_ROM_FILE },        
	{ 0x6CB1, R_DISP_DIR_TYPE_C },      
	{ 0x6D31, R_CONV_FILENAME },        
	{ 0x6D51, R_NEXT_DIR_ENTRY },       
	{ 0x6D97, R_CLS_PRINT_TIME_DAY },   
	{ 0x6D9E, R_PRINT_TIME_DAY },       
	{ 0x6DF6, R_PRINT_STRING2 },        
	{ 0x6E06, R_COPY_MEM_DE_M },        
	{ 0x6E11, R_CMP_MEM_DE_M },         
	{ 0x6E1D, R_CLEAR_FKEY_TBL },       
	{ 0x6E20, R_SET_FKEYS },            
	{ 0x6E42, R_DISP_FKEYS },           
	{ 0x6E4D, R_SEARCH_DIR },           
	{ 0x6E8C, R_GET_FILE_ADDR },        
	{ 0x6EB6, R_DIR_DISP_ORDER_TBL },   
	{ 0x6EE7, R_ADDRSS_ENTRY },         
//	{ 0x5B6B, R_ADDRSS_ENTRY_W_FILE },  
	{ 0x6EED, R_SCHEDL_ENTRY },         
//	{ 0x5B72, R_SCHEDL_ENTRY_W_FILE },  
	{ 0x6F9E, R_ADDRSS_FIND_FUN },      
	{ 0x6FA0, R_ADDRSS_LFND_FUN },      
	{ 0x7042, R_FIND_TEXT_IN_FILE },    
	{ 0x7076, R_FIND_NEXT_LINE_IN_FILE },  
	{ 0x707D, R_CHECK_FOR_CRLF },       
	{ 0x70ED, R_ADDRSS_INST_VCTR_TBL }, 
//	{ 0x5D64, R_GET_KEY_CONV_TOUPPER }, 
//	{ 0x5D6A, R_SEND_CURSOR_HOME },     
//	{ 0x5D70, R_PRINT_TIME_LOOP },      
	{ 0x719D, R_TEXT_ENTRY },           
	{ 0x71D4, R_TEXT_FKEY_TBL },        
	{ 0x7207, R_EDIT_STMT },            
	{ 0x72E5, R_WAIT_FOR_SPACE_KEY },   
	{ 0x731B, R_EDIT_DO_FILE_FUN },     
	{ 0x7396, R_TEXT_EDIT_LOOP },       
	{ 0x73CF, R_TEXT_CTRL_VCTR_TBL },   
	{ 0x740F, R_TEXT_ESC_FUN },         
	{ 0x745D, R_TEXT_CTRL_P_FUN },      
	{ 0x746B, R_TEXT_CTRL_I_FUN },      
	{ 0x749F, R_TEXT_CTRL_M_FUN },      
	{ 0x74BF, R_TEXT_CTRL_D_FUN },      
	{ 0x74C4, R_TEXT_CTRL_X_FUN },      
	{ 0x74EC, R_TEXT_CTRL_H_FUN },      
	{ 0x7532, R_TEXT_CTRL_S_FUN },      
	{ 0x7536, R_TEXT_CTRL_E_FUN },      
	{ 0x755B, R_TEXT_CTRL_F_FUN },      
	{ 0x756D, R_TEXT_CTRL_A_FUN },      
	{ 0x75A3, R_TEXT_CTRL_T_FUN },      
	{ 0x75b8, R_TEXT_CTRL_B_FUN },      
	{ 0x75DE, R_TEXT_CTRL_R_FUN },      
	{ 0x75EC, R_TEXT_CTRL_Q_FUN },      
	{ 0x75F1, R_TEXT_CTRL_W_FUN },      
	{ 0x75FD, R_TEXT_CTRL_Z_FUN },      
	{ 0x7623, R_TEXT_CTRL_L_FUN },      
	{ 0x7670, R_TEXT_CTRL_C_FUN },      
	{ 0x77C6, R_TEXT_GET_NEXT_BYTE },   
	{ 0x7812, R_TEXT_CTRL_O_FUN },      
	{ 0x7826, R_TEXT_CTRL_U_FUN },      
	{ 0x792C, R_TEXT_CTRL_N_FUN },      
	{ 0x79B7, R_COPY_NULL_STRING },     
	{ 0x7A83, R_TEXT_CTRL_Y_FUN },      
	{ 0x7DDD, R_TEXT_CTRL_G_FUN },      
	{ 0x7E3E, R_TEXT_CTRL_V_FUN },      
	{ 0x829C, R_INSERT_A_INTO_FILE },   
	{ 0x82A8, R_INSERT_SPACES },        
	{ 0x82DA, R_DELETE_CHARS },         
	{ 0x8316, R_MOVE_BC_BYTES_INC },    
	{ 0x8321, R_MOVE_BC_BYTES_DEC },    
	{ 0x832C, R_ROM_CAT_ENTRIES },      
	{ 0x838F, R_BASIC_ENTRY },          
	{ 0x83D3, R_LOAD_BASIC_FKEYS },     
	{ 0x83DC, R_LOAD_BASIC_FKEYS },     
	{ 0x841C, R_RE_INIT_SYSTEM },       
	{ 0x8439, R_WARM_RESET },           
	{ 0x84C9, R_SEND_A_TO_LPT },        
	{ 0x8508, R_CHECK_RS232_QUEUE },    
	{ 0x8519, R_READ_RS232_QUEUE },     
	{ 0x8547, R_RST_6_5_FUN },          
	{ 0x85F9, R_INC_RS232_QUEUE_IN },   
	{ 0x8608, R_SEND_XON },             
	{ 0x8617, R_DISABLE_XON_XOFF },     
	{ 0x8629, R_SEND_C_TO_RS232 },      
	{ 0x864F, R_SEND_A_USING_XON },
	{ 0x8681, R_XON_XOFF_HANDLER },     
	{ 0x86AD, R_SET_RS232_BAUD_RATE },  
	{ 0x86CC, R_RS232_BAUD_TIMER_VALS },
	{ 0x86DE, R_INIT_RS232_MDM },       
//	{ 0x8740, R_UNINIT_RS232_MDM },     
	{ 0x8740, R_CLICK_SND_PORT },       
	{ 0x874A, R_CHECK_CD },             
	{ 0x879D, R_ENABLE_XON_XOFF },      
	{ 0x87A5, R_INIT_SER_BUF_PARAMS },  
	{ 0x87D1, R_CAS_WRITE_HEADER },     
	{ 0x87E6, R_CAS_WRITE_NO_CHKSUM },  
//	{ 0x6F5B, R_CAS_WRITE_NO_SYNC },    
	{ 0x87F5, R_CAS_WRITE_BIT },        
	{ 0x8810, R_CAS_READ_HEADER },      
	{ 0x8866, R_CAS_READ_BIT },         
	{ 0x88AC, R_CAS_COUNT_BITS },       
	{ 0x88B3, R_CAS_READ_NO_CHKSUM },   
	{ 0x88CC, R_CAS_REMOTE_FUN },       
	{ 0x88E4, R_KEYSCAN_MGT_FUN },      
	{ 0x88EF, R_KEY_DETECTION },        
	{ 0x893F, R_KEY_REPEAT_DET },       
//	{ 0x70B0, R_GET_KEY_MATRIX },       
//	{ 0x7122, R_INIT_KEY_RPT_CNT },     
	{ 0x89D8, R_KEY_DECODE },           
	{ 0x8A96, R_KEY_FIRST_IN_BUF },     
	{ 0x8AA5, R_KEY_ADD_TO_BUF },       
	{ 0x8AB8, R_ISR_EXIT_FUN },         
	{ 0x8ACB, R_UNSHIFTED_KEY },        
	{ 0x8AE3, R_ARROW_KEY },            
	{ 0x8AED, R_CAPS_LOCK_KEY },        
	{ 0x8AF4, R_NUM_KEY },              
	{ 0x8B03, R_SCAN_KEYBOARD },        
	{ 0x8B2B, R_ENABLE_INTERRUPTS },    
	{ 0x8B31, R_CHK_PENDING_KEYS },     
	{ 0x8B4D, R_CHK_BREAK },            
	{ 0x8B69, R_CHK_SHIFT_BREAK },      
	{ 0x8B7B, R_SCAN_SPECIAL_KEYS },    
	{ 0x8B8F, R_GEN_TONE },             
//	{ 0x7329, R_GET_CLK_CHIP_REGS },    
//	{ 0x732A, R_PUT_CLK_CHIP_REGS },    
//	{ 0x7352, R_READ_CLK_CHIP_BIT },    
	{ 0x8CD6, R_SET_CLK_CHIP_MODE },    
	{ 0x8CF5, R_BLINK_CURSOR },         
	{ 0x8D3A, R_CHAR_PLOT_7 },           
	{ 0x8D76, R_PLOT_POINT },          
	{ 0x8D77, R_CLEAR_POINT },          
	{ 0x8DA4, R_LCD_BYTE_PLOT },        
	{ 0x8E9D, R_ENABLE_LCD_DRIVER },  //???  
	{ 0x8EAA, R_WAIT_LCD_DRIVER },      
//	{ 0x7551, R_LCD_BIT_PATTERNS },     
//	{ 0x7643, R_LCD_BIT_PATTERNS },     
	{ 0x8F9B, R_DELAY_FUN },            
	{ 0x8FA0, R_SET_INTR_1DH },         
	{ 0x8FA6, R_BEEP_FUN },             
	{ 0x8FC9, R_CLICK_SOUND_PORT },     
	{ 0x8FD4, R_CHK_XTRNL_CNTRLER },    
	{ 0x8FE2, R_XTRNL_CNTRLER_DRIVER }, 
	{ 0x9063, R_LCD_CHAR_SHAPE_TBL1 },  
	{ 0x9363, R_LCD_CHAR_SHAPE_TBL2 },  //???
	{ 0x9763, R_KEYBOARD_CONV_MATRIX }, 
	{ 0x98AB, R_BOOT_ROUTINE },         
	{ 0x9A16, R_COLD_BOOT },            
	{ 0x9AF7, R_DISP_MODEL },           
	{ 0x9AFD, R_DISP_FREE_BYTES },      
	{ 0x9B17, R_INIT_RST_38H_TBL },     
	{ 0x9B32, R_CALC_FREE_RAM },        
	{ 0x9B54, R_INIT_CLK_CHIP_REGS },   
	{ 0x9C4E, R_MENU_TEXT_STRINGS },    
	{ 0x9C85, R_RST_38H_DRIVER },       
//	{ 0xF5F9, R_RST_5_5_VECTOR },       
//	{ 0xF5FC, R_RST_6_5_VECTOR },       
//	{ 0xF5FF, R_RST_7_5_VECTOR },       
//	{ 0xF602, R_TRAP_VECTOR },          
//	{ 0xF605, R_DETECT_OPTION_ROM },       
	{ -1, -1 }
};

RomDescription_t gM200_Desc = {
	0x7A27C3A7,					/* Signature */
	0x7A20,						/* Signature address */
	1,                          /* StdRom */

	gM200_Tables,				/* Known tables */
	gM200_Vars,					/* Known variables */
	gM200_Funs,					/* Known functions */

	0xF295,                     /* Address of unsaved BASIC prgm */
	0xF2A0,                     /* Address of next DO file */
	0xF661,                     /* Start of DO file area */
	0xF663,                     /* Start of CO file area */
	0xF665,                     /* Start of Variable space */
	0xF667,                     /* Start of Array data */
	0xF669,                     /* Pointer to unused memory */
	0xEEB4,                     /* Address where HIMEM is stored */
	0xF177,                     /* End of RAM for file storage */
	0xF4EE,                     /* Lowest RAM used by system */
	0xF252,                     /* Start of RAM directory */
	0xEF63,                     /* BASIC string	buffer pointer */
	0xF505,						/* BASIC size */
	0xFD0E,						/* Keyscan array */
	0x9063,						/* Character generator array */
	0x0000,						/* Location of Year - not used for T200 */
	0xFA30,						/* Location of LCD buffer area */
	0xEF0A,						/* Label line enable flag */

	52,							/* Number of directory entries */
	9,							/* Index of first dir entry */
	0x6803						/* Address of MS Copyright string */
};

