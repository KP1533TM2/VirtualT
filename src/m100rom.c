/* m100rom.c */

/* $Id: m100rom.c,v 1.4 2008/01/26 14:39:46 kpettit1 Exp $ */

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


Std_ROM_Table_t	gM100_Tables[] = {
	{ 0x0003, 5,   TABLE_TYPE_STRING },
	{ 0x0040, 64,  TABLE_TYPE_JUMP },
	{ 0x0080, 271, TABLE_TYPE_MODIFIED_STRING },
	{ 0x018F, 97,  TABLE_TYPE_MODIFIED_STRING },
	{ 0x01F0, 112, TABLE_TYPE_MODIFIED_STRING },
	{ 0x0262, 140, TABLE_TYPE_JUMP },
	{ 0x02EE, 46,  TABLE_TYPE_JUMP },
	{ 0x031C, 62,  TABLE_TYPE_2BYTE },
	{ 0x036F, 123, TABLE_TYPE_CODE },
	{ 0x03EA, 23,  TABLE_TYPE_STRING },
	{ 0x0C74, 19,  TABLE_TYPE_STRING },
	{ 0x0D71, 17,  TABLE_TYPE_STRING },
	{ 0x14D2, 6,   TABLE_TYPE_JUMP },
	{ 0x14F2, 6,   TABLE_TYPE_JUMP },
	{ 0x14FC, 10,  TABLE_TYPE_JUMP },
	{ 0x167F, 10,  TABLE_TYPE_JUMP },
	{ 0x1754, 6,   TABLE_TYPE_JUMP },
	{ 0x1762, 10,  TABLE_TYPE_JUMP },
	{ 0x17D1, 10,  TABLE_TYPE_JUMP },
	{ 0x1877, 10,  TABLE_TYPE_JUMP },
	{ 0x1978, 21,  TABLE_TYPE_3BYTE },
	{ 0x2481, 16,  TABLE_TYPE_STRING },
	{ 0x25d5, 18,  TABLE_TYPE_STRING },
	{ 0x26FE, 14,  TABLE_TYPE_STRING },
	{ 0x325C, 32,  TABLE_TYPE_CODE },
	{ 0x327C, 2,   TABLE_TYPE_CODE },
	{ 0x327E, 88,  TABLE_TYPE_CODE },
	{ 0x32D6, 1,   TABLE_TYPE_CODE },
	{ 0x32D7, 32,  TABLE_TYPE_CODE },
	{ 0x32F7, 1,   TABLE_TYPE_CODE },
	{ 0x32F8, 24,  TABLE_TYPE_CODE },
	{ 0x3310, 1,   TABLE_TYPE_CODE },
	{ 0x3311, 32,  TABLE_TYPE_CODE },
	{ 0x3331, 1,   TABLE_TYPE_CODE },
	{ 0x3332, 40,  TABLE_TYPE_CODE },
	{ 0x335A, 1,   TABLE_TYPE_CODE },
	{ 0x335B, 64,  TABLE_TYPE_CODE },
	{ 0x339B, 1,   TABLE_TYPE_CODE },
	{ 0x339C, 64,  TABLE_TYPE_CODE },
	{ 0x438A, 24,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x43B8, 66,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x466F, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x50F1, 33,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5113, 16,  TABLE_TYPE_JUMP },
	{ 0x517C, 9,   TABLE_TYPE_STRING },
	{ 0x5185, 30,  TABLE_TYPE_4BYTE_CMD },
	{ 0x51A3, 1,   TABLE_TYPE_CODE },
	{ 0x51A4, 28,  TABLE_TYPE_CTRL_DELIM },
	{ 0x51E7, 6,   TABLE_TYPE_STRING },
	{ 0x5244, 9,   TABLE_TYPE_STRING },
	{ 0x5443, 18,  TABLE_TYPE_CTRL_DELIM },
	{ 0x550D, 16,  TABLE_TYPE_JUMP },
	{ 0x551D, 1,   TABLE_TYPE_CODE },
	{ 0x5583, 18,  TABLE_TYPE_STRING },
	{ 0x5595, 6,   TABLE_TYPE_STRING },
	{ 0x559B, 2,   TABLE_TYPE_CODE },
	{ 0x5751, 64,  TABLE_TYPE_STRING },
	{ 0x5AE9, 36,  TABLE_TYPE_3BYTE },
	{ 0x5B0D, 17,  TABLE_TYPE_STRING },
	{ 0x5B1E, 6,   TABLE_TYPE_CODE },
	{ 0x5B24, 19,  TABLE_TYPE_STRING },
	{ 0x5B37, 15,  TABLE_TYPE_CODE },
	{ 0x5B46, 34,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5D01, 1,   TABLE_TYPE_CODE },
	{ 0x5D02, 8,   TABLE_TYPE_STRING },
	{ 0x5D0A, 51,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5CCE, 33,  TABLE_TYPE_STRING },
	{ 0x5CEF, 18,  TABLE_TYPE_4BYTE_CMD },
	{ 0x5E15, 13,  TABLE_TYPE_STRING },
	{ 0x5E22, 8,   TABLE_TYPE_CODE },
	{ 0x5E2A, 36,  TABLE_TYPE_CTRL_DELIM },
	{ 0x5F38, 17,  TABLE_TYPE_STRING },
	{ 0x5F49, 2,   TABLE_TYPE_CODE },
	{ 0x5F4B, 21,  TABLE_TYPE_STRING },
	{ 0x5F60, 5,   TABLE_TYPE_STRING },
	{ 0x6016, 64,  TABLE_TYPE_JUMP },
	{ 0x60B1, 13,  TABLE_TYPE_STRING },
	{ 0x65CE, 17,  TABLE_TYPE_STRING },
	{ 0x665D, 21,  TABLE_TYPE_BYTE_LOOKUP },
	{ 0x670C, 7,   TABLE_TYPE_STRING },
	{ 0x6735, 9,   TABLE_TYPE_STRING },
	{ 0x6BF1, 88,  TABLE_TYPE_CATALOG },
	{ 0x6E94, 18,  TABLE_TYPE_JUMP },
	{ 0x7551, 240, TABLE_TYPE_CODE },
	{ 0x7643, 20,  TABLE_TYPE_CODE },
	{ 0x770B, 6,   TABLE_TYPE_CODE },
	{ 0x7711, 96*5,   TABLE_TYPE_CODE },
	{ 0x78F1, 128*6,  TABLE_TYPE_CODE },
	{ 0x7BF1, 322, TABLE_TYPE_CODE },
	{ 0x7F01, 14,  TABLE_TYPE_CODE },
	{ 0x7F98, 39,  TABLE_TYPE_STRING },
	{ 0x7FBF, 23,  TABLE_TYPE_STRING },
	{ -1, 0, 0 }
};

Std_ROM_Addresses_t gM100_Vars[] = {
	{ 0x0040, R_FUN_VCTR_TBL },			
	{ 0x0080, R_BASIC_TBL },				
	{ 0x018E, R_FUN_TBL_TAB },			
	{ 0x01F0, R_FUN_TBL_SGN },			
	{ 0x0262, R_BASIC_VCTR_TBL },		
	{ 0x02EE, R_MATH_VCTR_TBL },			
	{ 0x031A, R_BASIC_ERR_TXT },			
	{ 0x035A, R_INIT_IMAGE },				
	{ 0x036F, R_XROM_DET_IMAGE },			
	{ 0x03EA, R_BASIC_STRINGS },			
	{ 0x1F24, R_CAS_FREQ_CNT },			
	{ 0x4349, R_CAS_FREQ_CNT },			
	{ 0x551D, R_TERM_FKEY_VCTR_TBL },		
	{ 0x5B1E, R_DIR_DISP_ORDER_TBL },		
	{ 0x5E22, R_TEXT_FKEY_VCTR_TBL },		
	{ 0x6BF1, R_ROM_CAT_ENTRIES },		
	{ 0x71F7, R_INT_EXIT_FUN },			
	{ 0x71F8, R_INT_EXIT_FUN },			
	{ 0x7551, R_8155_PIO_PAT1 },			
	{ 0x7643, R_8155_PIO_PAT2 },			
	{ 0x7F01, R_INIT_CLK_VALUES },		
	{ 0x7F98, R_MENU_STRINGS },			
	{ 0x7FA4, R_MODEL_NUM_STRING },		
	{ 0xF5F0, R_ACTIVE_SIGNATURE },		
	{ 0xF5F4, R_HIMEM },					
	{ 0xF5F9, R_RST_5_5_VCTR },			
	{ 0xF5FC, R_RST_6_5_VCTR },			
	{ 0xF5FF, R_RST_7_5_VCTR },			
	{ 0xF602, R_TRAP_VCTR },            	
	{ 0xF62A, R_OPTION_ROM_FLAG },      	
	{ 0xF62B, R_DIAL_SPEED },           	
	{ 0xF630, R_FKEY_STAT_TBL },        	
	{ 0xF638, R_NEW_CONSOLE_FLAG },     	
	{ 0xF639, R_CURSOR_ROW },
	{ 0xF63A, R_CURSOR_COL },           	
	{ 0xF63B, R_ACTIVE_ROW_CNT },       	
	{ 0xF63C, R_ACTIVE_COL_CNT },       	
	{ 0xf63d, R_LABEL_LINE_PROT },      	
	{ 0xF63e, R_SCROLL_DISABLE },       	
	{ 0xF63f, R_CURSOR_STAT },          	
	{ 0xF640, R_CURSOR_ROW2 },          	
	{ 0xF641, R_CURSOR_COL2 },          	
	{ 0xF646, R_ESC_MODE_FLAG },        	
	{ 0xF648, R_REV_VID_SWITCH },       	
	{ 0xF64E, R_LAST_PLOT_X },          	
	{ 0xF64F, R_LAST_PLOT_Y },          	
	{ 0xF656, R_PWR_OFF_STAT },         	
	{ 0xF658, R_DUPLEX_SWITCH },        	
	{ 0xF65A, R_RS232_LF_SWITCH },      	
	{ 0xF65B, R_RS232_PARAM_TBL },      	
	{ 0xF661, R_ADDRESS_LAST_CALLED },  	
	{ 0xF667, R_OUT_STMT_HOOK },        	
	{ 0xF66A, R_INP_STMT_HOOK },        	
	{ 0xF672, R_LAST_ERROR_CODE },      	
	{ 0xF674, R_LPT_HEAD_POS },         	
	{ 0xF675, R_OUTPUT_DEVICE },        	
	{ 0xF678, R_BASIC_STR_BUF_PTR },    	
	{ 0xF67A, R_CUR_BASIC_LINE_NUM },   	
	{ 0xF67C, R_START_BASIC_PGM_PTR },  	
	{ 0xF680, R_END_OF_STMT_MARKER },   	
	{ 0xF685, R_KEYBOARD_BUF },         	
	{ 0xF788, R_CURSOR_H_POS },         	
	{ 0xF789, R_FKEY_DEF_BUF },         	
	{ 0xF80A, R_BASIC_FKEY_DEF_BUF },   	
	{ 0xF88C, R_FILE_RAM_END },         	
	{ 0xF923, R_SEC_ONES },             	
	{ 0xF924, R_SEC_TENS },             	
	{ 0xF925, R_MIN_ONES },             	
	{ 0xF926, R_MIN_TENS },             	
	{ 0xF927, R_HR_ONES },              	
	{ 0xF928, R_HR_TENS },              	
	{ 0xF929, R_DATE_ONES },            	
	{ 0xF92A, R_DATE_TENS },            	
	{ 0xF92B, R_DAY_CODE },             	
	{ 0xF92C, R_MONTH },                	
	{ 0xF92D, R_YEAR_ONES },            	
	{ 0xF92E, R_YEAR_TENS },            	
	{ 0xF933, R_SEC_ONES2 },            	
	{ 0xF934, R_SEC_TENS2 },            	
	{ 0xF935, R_MIN_ONES2 },            	
	{ 0xF936, R_MIN_TENS2 },            	
	{ 0xF937, R_HR_ONES2 },             	
	{ 0xF938, R_HR_TENS2 },             	
	{ 0xF939, R_DATE_ONES2 },           	
	{ 0xF93A, R_DATE_TENS2 },           	
	{ 0xF93B, R_DAY_CODE2 },            	
	{ 0xF93D, R_ONTIME_TIME },          	
	{ 0xF944, R_ONCOM_FLAG },           	
	{ 0xF945, R_ONCOM_ADDRESS },        	
	{ 0xF947, R_ONTIME_FLAG },          	
	{ 0xF948, R_ONTIME_ADDRESS },       	
	{ 0xF94A, R_FKEY_VCTR_TBL },        	
	{ 0xF962, R_DIR_RAM_START },        	
	{ 0xF99A, R_UNSAVED_BASIC_PTR },    	
	{ 0xF9A5, R_PASTE_RAM_START },      	
	{ 0xFAAC, R_LAST_CHAR_PRINTED },    	
	{ 0xFAAD, R_LABEL_ENABLE_FLAG },    	
	{ 0xFAAE, R_PORT_A8H },             	
	{ 0xFAAF, R_IPL_FILENAME_START },   	
	{ 0xFABA, R_BASIC_LIST_START },     	
	{ 0xFABE, R_SP_SAVE_BUF },          	
	{ 0xFAC0, R_LOWEST_RAM },           	
	{ 0xFAC9, R_RST_38H_OFFSET },       	
	{ 0xFAD0, R_LAST_PGRM_LEN },        	
	{ 0xFADA, R_RST_38H_VCTR_TBL },     	
	{ 0xFAE2, R_LCD_OUTPUT_HOOK },      	
	{ 0xFAE4, R_LPT_OUTPUT_HOOK },      	
	{ 0xFB00, R_EOF_FUN_HOOK },         	
	{ 0xFB0C, R_TERM_F6_HOOK },         	
	{ 0xFB0E, R_TERM_F7_HOOK },         	
	{ 0xFB14, R_WIDTH_STMT_HOOK },      	
	{ 0xFB1A, R_CRT_OPEN_HOOK },        	
	{ 0xFB1E, R_CRT_OUTPUT_HOOK },      	
	{ 0xFB20, R_WAND_OPEN_HOOK },       	
	{ 0xFB22, R_WAND_CLOSE_HOOK },      	
	{ 0xFB24, R_WAND_GET_HOOK },        	
	{ 0xFB26, R_WAND_IO_HOOK },         	
	{ 0xFB28, R_LOF_HOOK },             	
	{ 0xFB2A, R_LOC_HOOK },             	
	{ 0xFB2C, R_LFILES_HOOK },          	
	{ 0xFB2E, R_DSKI_HOOK },            	
	{ 0xFB30, R_DSKO_HOOK },            	
	{ 0xFB64, R_VAR_CREATE_LOC_FLAG },  	
	{ 0xFB65, R_LAST_VAR_TYPE },        	
	{ 0xFB67, R_FILE_BUF_PTR },         	
	{ 0xFB94, R_DATA_STMT_LINE_NUM },   	
	{ 0xFB96, R_FOR_NEXT_ACTIVE_FLAG }, 	
	{ 0xFB99, R_LAST_VAR_ASSIGNED_ADDR },	
	{ 0xFB9B, R_RUNNING_LINE_NUM_ADDR },	
	{ 0xFB9D, R_BASIC_SP_BUF },         	
	{ 0xFB9F, R_LAST_ERR_LINE_NUM },    	
	{ 0xFBA1, R_LAST_ENTERED_LINE_NUM },	
	{ 0xFBA3, R_ERR_PTR },              	
	{ 0xFBA5, R_ONERROR_ADDRESS },      	
	{ 0xFBA7, R_BASIC_RUNNING },      	
	{ 0xFBAA, R_BREAK_LINE_NUM },       	
	{ 0xFBAC, R_BREAK_ADDRESS },        	
	{ 0xFBAE, R_DO_FILES_PTR },         	
	{ 0xFBB0, R_CO_FILES_PTR },         	
	{ 0xFBB2, R_VAR_PTR },              	
	{ 0xFBB4, R_ARRAY_TBL_PTR },        	
	{ 0xFBB6, R_UNUSED_MEM_PTR },       	
	{ 0xFBB8, R_DATA_SEARCH_ADDR },     	
	{ 0xFBBA, R_DEF_TBL },              	
	{ 0xFBE7, R_FP_TEMP1 },           	
	{ 0xFC18, R_FP_FAC1 },              	
	{ 0xFC1A, R_INT_FAC1 },             	
	{ 0xFC60, R_FP_TEMP2 },           	
	{ 0xFC69, R_FP_FAC2 },              	
	{ 0xFC6B, R_INT_FAC2 },             	
	{ 0xFC79, R_FP_TEMP3 },           	
	{ 0xFC82, R_MAXFILES },             	
	{ 0xFC83, R_FILE_NUM_TBL_PTR },     	
	{ 0xFC93, R_BASIC_FILENAME },       	
	{ 0xFC9C, R_LAST_LOAD_FILENAME },   	
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
	{ 0xFF45, R_PORT_E8H },             	
	{ 0xFF46, R_RS232_CHAR_BUF },       	
	{ 0xFF86, R_RS232_BUF_CNT },        	
	{ 0xFF87, R_RS232_BUF_OUT },        	
	{ 0xFF88, R_RS232_BUF_IN },         	
	{ 0xFF8A, R_CTRL_S_STAT },          	
	{ 0xFF8B, R_UART_BAUD_TIMER_VAL },  	
	{ 0xFF8D, R_RS232_PARITY_CTRL },    	
	{ 0xFF8E, R_CAS_PULSE_CTRL },       	
	{ 0xFF97, R_SPEC_KEY_STAT },        	
	{ 0xFF98, R_FKEY_STAT },            	
	{ 0xFF99, R_KEY_SCAN_STORAGE1 },    	
	{ 0xFFA2, R_KEY_SCAN_STORAGE2 },    	
	{ 0xFFA3, R_SHIFT_KEY_STAT },       	
	{ 0xFFA4, R_KEY_REPT_START },       	
	{ 0xFFA6, R_KEY_POSITION },         	
	{ 0xFFA8, R_2ND_KEY_BUF_PTR },      	
	{ 0xFFAA, R_KEY_BUF_CNT },          	
	{ 0xFFAB, R_KEY_TYPEAHEAD_BUF },   	
	{ 0xFFEC, R_CURSOR_BIT_PAT_BUF },   	
	{ -1, -1 }
};

Std_ROM_Addresses_t gM100_Funs[] = {
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
	{ 0x03EA, R_FUN_BASIC_STRINGS },       
	{ 0x0401, R_POP_FOR_NEXT },            
	{ 0x0422, R_INIT_AND_READY },          
	{ 0x0446, R_GEN_SN_ERROR },            
	{ 0x0449, R_GEN_d0_ERROR },            
	{ 0x044C, R_GEN_NF_ERROR },            
	{ 0x044F, R_GEN_DD_ERROR },            
	{ 0x0452, R_GEN_RW_ERROR },            
	{ 0x0455, R_GEN_OV_ERROR },            
	{ 0x0458, R_GEN_MO_ERROR },            
	{ 0x045B, R_GEN_TM_ERROR },            
	{ 0x045D, R_GEN_ERR_IN_E },            
	{ 0x048D, R_RESTORE_JMP_BC },          
	{ 0x04C5, R_PRINT_BASIC_ERR },         
	{ 0x0501, R_POP_GO_BASIC_RDY },        
	{ 0x0502, R_GO_BASIC_RDY_OK },         
	{ 0x0511, R_GO_BASIC_RDY },            
	{ 0x0523, R_PERFORM_M_GO_RDY },        
	{ 0x05F0, R_UPDATE_LINE_ADDR },        
	{ 0x060A, R_EVAL_LIST_ARGS },          
	{ 0x0628, R_FIND_LINE_IN_DE },         
	{ 0x062B, R_FIND_LINE_DE_AT_HL },      
	{ 0x0646, R_TOKEN_COMPRESS },          
	{ 0x0726, R_FOR_STMT },                
	{ 0x076B, R_TO_STMT },                 
	{ 0x0783, R_STEP_STMT },               
	{ 0x0804, R_RUN_BASIC_PGRM },          
	{ 0x083A, R_RUN_BASIC_AT_HL },         
	{ 0x0840, R_EXEC_INST_IN_A },          
	{ 0x0858, R_RST_10H_INC_HL },          
	{ 0x0859, R_RST_10H },                 
	{ 0x0872, R_DEF_STMT },                
	{ 0x0881, R_DEFDBL_STMT },             
	{ 0x0886, R_DEFINT_STMT },             
	{ 0x0896, R_DEFSNG_STMT },             
	{ 0x089F, R_DEFSTR_STMT },             
	{ 0x08A1, R_DECL_VAR_TYPE_E },         
	{ 0x08DB, R_GEN_FC_ERROR },            
	{ 0x08E0, R_EVAL_LINE_NUM },           
	{ 0x08EB, R_ASCII_TO_BIN },            
	{ 0x08EC, R_ASCII_TO_BIN_PREINC },     
	{ 0x090F, R_RUN_STMT },                
	{ 0x091E, R_GOSUB_STMT },              
	{ 0x0936, R_GOTO_STMT },               
	{ 0x094D, R_GEN_UL_ERROR },            
	{ 0x0966, R_RETURN_STMT },             
	{ 0x099E, R_DATA_STMT },               
	{ 0x09A0, R_REM_STMT },                
	{ 0x09C3, R_LET_STMT },                
	{ 0x0A2F, R_ON_STMT },                 
	{ 0x0A34, R_ON_ERROR_STMT },           
	{ 0x0A5B, R_ON_KEY_STMT },             
	{ 0x0A94, R_ON_TIME_STMT },            
	{ 0x0AB0, R_RESUME_STMT },             
	{ 0x0B0F, R_ERROR_STMT },              
	{ 0x0B1A, R_IF_STMT },                 
	{ 0x0B4E, R_LPRINT_STMT },             
	{ 0x0B56, R_PRINT_STMT },              
	{ 0x0C01, R_TAB_STMT },                
	{ 0x0C45, R_LINE_STMT },               
	{ 0x0C99, R_INPUT_NO_STMT },           
	{ 0x0CA3, R_INPUT_STMT },              
	{ 0x0CD9, R_READ_STMT },               
	{ 0x0DAB, R_EVAL_BASIC_INST },         
	{ 0x0F0D, R_INT16_DIV },               
	{ 0x0F1C, R_EVAL_FUN },                
	{ 0x0F47, R_ERR_FUN },                 
	{ 0x0F56, R_ERL_FUN },                 
	{ 0x0F7E, R_VARPTR_FUN },              
	{ 0x0F86, R_VARPTR_BUF_FUN },          
	{ 0x0F92, R_VARPTR_VAR_FUN },          
	{ 0x0FDA, R_EVAL_VAR },                
	{ 0x0FE8, R_CONV_M_TOUPPER },          
	{ 0x0FE9, R_CONV_A_TOUPPER },          
	{ 0x1037, R_ASCII_NUM_CONV },          
	{ 0x1054, R_NOT_FUN },                 
	{ 0x1069, R_RST_28H },                 
	{ 0x108C, R_OR_FUN },                   
	{ 0x1097, R_AND_FUN },                 
	{ 0x10A2, R_XOR_FUN },                 
	{ 0x10AD, R_EQV_FUN },                 
	{ 0x10B5, R_IMP_FUN },                 
	{ 0x10C8, R_LPOS_FUN },                
	{ 0x10CE, R_POS_FUN },                 
	{ 0x10D1, R_LD_FAC1_INT },             
	{ 0x10E6, R_CHK_RUNNING_PGRM },        
	{ 0x10EF, R_GEN_ID_ERROR },            
	{ 0x1100, R_INP_FUN },                 
	{ 0x110C, R_OUT_STMT },                
	{ 0x1112, R_EVAL_EXPR },               
	{ 0x1113, R_EVAL_EXPR_PREDEC },        
	{ 0x112D, R_EVAL_EXPR },               
	{ 0x112E, R_EVAL_EXPR_PREDEC },        
	{ 0x113B, R_LLIST_STMT },              
	{ 0x1140, R_LIST_STMT },               
	{ 0x11A2, R_BUF_TO_LCD },              
	{ 0x1284, R_PEEK_FUN },                
	{ 0x128B, R_POKE_FUN },                
	{ 0x1297, R_EVAL_EXPR },               
	{ 0x12CB, R_WAIT_KEY },                
	{ 0x13A5, R_TOGGLE_LABEL },            
	{ 0x13DB, R_CHK_KEY_QUEUE },           
	{ 0x1419, R_POWER_STMT },              
	{ 0x1431, R_LOW_PWR_TRAP },            
	{ 0x143F, R_POWER_DOWN },              
	{ 0x1459, R_POWER_CONT_STMT },         
	{ 0x1461, R_POWER_ON_STMT },           
	{ 0x1470, R_OUT_CH_TO_LPT },           
	{ 0x148A, R_LOAD_CAS_HDR },            
	{ 0x1494, R_GEN_IO_ERROR },            
	{ 0x1499, R_DET_CAS_SYNC_HDR },        
	{ 0x14A8, R_CAS_MOTOR_ON },            
	{ 0x14AA, R_CAS_MOTOR_OFF },           
	{ 0x14B0, R_CAS_READ_BYTE },           
	{ 0x14C1, R_CAS_WRITE_BYTE },          
	{ 0x14D2, R_LCD_DCB },                 
	{ 0x14D8, R_LCD_OPEN },                
	{ 0x14E5, R_LCD_OUT },                 
	{ 0x14ED, R_POP_ALL_REGS },            
	{ 0x14F2, R_CRT_DCB },                 
	{ 0x14FC, R_RAM_DCB },                 
	{ 0x1506, R_RAM_OPEN },                
	{ 0x158D, R_RAM_CLOSE },               
	{ 0x15AC, R_RAM_OUT },                 
	{ 0x15C4, R_RAM_IN },                  
	{ 0x161B, R_RAM_IO },                  
	{ 0x167F, R_CAS_DCB },                 
	{ 0x1689, R_CAS_OPEN },                
	{ 0x16AD, R_CAS_CLOSE },               
	{ 0x16C7, R_CAS_OUT },                 
	{ 0x16D2, R_CAS_IN },                  
	{ 0x1754, R_LPT_DCB },                 
	{ 0x175A, R_LPT_OUT },                 
	{ 0x1762, R_COM_DCB },                 
	{ 0x176C, R_MDM_OPEN },                
	{ 0x176D, R_COM_OPEN },                
	{ 0x179E, R_COM_CLOSE },               
	{ 0x17A8, R_COM_OUT },                 
	{ 0x17B0, R_COM_IN },                  
	{ 0x17CA, R_COM_IO },                  
	{ 0x17D1, R_MDM_DCB },                 
	{ 0x17DB, R_MDM_CLOSE },               
	{ 0x17E6, R_SET_RS232_PARAMS },        
	{ 0x1877, R_BCR_DCB },                 
	{ 0x1889, R_EOF_FUN },                 
	{ 0x1904, R_TIME_FUN },                
	{ 0x190F, R_READ_TIME },               
	{ 0x192F, R_DATE_FUN },                
	{ 0x1955, R_DAY_FUN },                 
	{ 0x1962, R_READ_DAY },                
	{ 0x19A0, R_UPDATE_CLK_VALUES },       
	{ 0x19AB, R_TIME_STMT },               
	{ 0x19B3, R_UPDATE_CLK_CHIP },         
	{ 0x19BD, R_DATE_STMT },               
	{ 0x19F1, R_DAY_STMT },                
	{ 0x1A42, R_GET_TIME_STRING },         
	{ 0x1A78, R_IPL_STMT },                
	{ 0x1A96, R_ERASE_IPL_PRGM },          
	{ 0x1A9E, R_COM_MDM_STMT },            
	{ 0x1AB2, R_KEY_FUN },                 
	{ 0x1AC3, R_KEY_ON_OFF_STMT },         
	{ 0x1AEA, R_DET_TIME_ARG },            
	{ 0x1AFC, R_DET_DEVICE_ARG },          
	{ 0x1B0F, R_ONTIME_STMT },             
	{ 0x1B22, R_ONCOM_STMT },              
	{ 0x1B32, R_RST7_5_ISR },              
	{ 0x1BB1, R_KICK_PWR_OFF_WDT },        
	{ 0x1BB8, R_KEY_STMT },                
	{ 0x1BBD, R_KEY_LIST_STMT },           
	{ 0x1BE0, R_SEND_CHARS_TO_LCD },       
	{ 0x1C57, R_PSET_STMT },               
	{ 0x1C66, R_PRESET_STMT },             
	{ 0x1C6D, R_LINE_STMT },               
	{ 0x1CA6, R_DRAW_FBOX },               
	{ 0x1CBC, R_DRAW_BOX },                
	{ 0x1D2E, R_TOKENIZE_XY },             
	{ 0x1D90, R_CSRLIN_FUN },              
	{ 0x1D9B, R_MAX_FUN },                 
	{ 0x1DA7, R_MAXRAM_FUN },              
	{ 0x1DB2, R_MAXFILES_FUN },            
	{ 0x1DB9, R_HIMEM_FUN },               
	{ 0x1DC3, R_WIDTH_STMT },              
	{ 0x1DC5, R_SOUND_STMT },              
	{ 0x1DE5, R_SOUND_OFF_STMT },          
	{ 0x1DE6, R_SOUND_ON_STMT },           
	{ 0x1DEC, R_MOTOR_STMT },              
	{ 0x1DF1, R_MOTOR_ON_STMT },           
	{ 0x1DF5, R_MOTOR_OFF_STMT },          
	{ 0x1DFA, R_CALL_STMT },               
	{ 0x1E22, R_SCREEN_STMT },             
	{ 0x1E5E, R_LCOPY_STMT },              
	{ 0x1F3A, R_FILES_STMT },              
	{ 0x1F42, R_DISPLAY_CAT },             
	{ 0x1F91, R_KILL_STMT },               
	{ 0x1FBE, R_KILL_TEXT_FILE },          
	{ 0x2037, R_NAME_STMT },               
	{ 0x20FE, R_NEW_STMT },                
	{ 0x21FA, R_STRLEN },                  
	{ 0x2206, R_GET_FIND_DO_FILE },        
	{ 0x220F, R_OPEN_TEXT_FILE },          
	{ 0x2280, R_CSAVE_STMT },              
	{ 0x22B9, R_CAS_WRITE_BUF },           
	{ 0x22CC, R_SAVEM_STMT },              
	{ 0x22DD, R_CSAVEM_STMT },             
	{ 0x2377, R_CLOAD_STMT },              
	{ 0x2413, R_CAS_READ_REC },            
	{ 0x2478, R_GEN_VERIFY_FAIL_ERR },     
	{ 0x2491, R_LOADM_STMT },           
	{ 0x24A7, R_CLOADM_STMT },          
	{ 0x2542, R_MOVE_B_BYTES },         
	{ 0x254B, R_EXEC_CO_FILE },         
	{ 0x260B, R_CAS_OPEN_OUT_BA },      
	{ 0x260E, R_CAS_OPEN_OUT_DO },      
	{ 0x2611, R_CAS_OPEN_OUT_CO },      
	{ 0x2650, R_CAS_OPEN_IN_BA },       
	{ 0x2653, R_CAS_OPEN_IN_DO },       
	{ 0x2656, R_CAS_OPEN_IN_CO },       
	{ 0x273A, R_STR_FUN },              
	{ 0x27B1, R_PRINT_STRING },         
	{ 0x290F, R_MOVE_L_BYTES },         
	{ 0x2943, R_LEN_FUN },              
	{ 0x294F, R_ASC_FUN },              
	{ 0x295F, R_CHR_FUN },              
	{ 0x296D, R_STRING_FUN },           
	{ 0x298E, R_SPACE_FUN },            
	{ 0x29AB, R_LEFT_FUN },             
	{ 0x29DC, R_RIGHT_FUN },            
	{ 0x29E6, R_MID_FUN },              
	{ 0x2A07, R_VAL_FUN },              
	{ 0x2A37, R_INSTR_FUN },            
	{ 0x2B4C, R_FRE_FUN },              
	{ 0x2B69, R_DBL_SUB },              
	{ 0x2B78, R_DBL_ADD },              
	{ 0x2C4F, R_BCD_ADD },              
	{ 0x2CFF, R_DBL_MULT },             
	{ 0x2DC7, R_DBL_DIV },              
	{ 0x2EE6, R_MOVE_C_BYTES },         
	{ 0x2EEF, R_COS_FUN },              
	{ 0x2F09, R_SIN_FUN },              
	{ 0x2F58, R_TAN_FUN },              
	{ 0x2F71, R_ATN_FUN },              
	{ 0x2FCF, R_LOG_FUN },              
	{ 0x305A, R_SQR_FUN },              
	{ 0x30A4, R_EXP_FUN },              
	{ 0x313E, R_RND_FUN },              
	{ 0x3182, R_INIT_TEMP3 },              
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
	{ 0x3209, R_TBL_BASED_MATH },       
	{ 0x322E, R_PUSH_FAC2 },            
	{ 0x3234, R_PUSH_FAC1 },            
	{ 0x3245, R_POP_FAC2 },             
	{ 0x324B, R_POP_FAC1 },             
	{ 0x325C, R_FP_NUMBERS },           
	{ 0x327C, R_FP_SHARED_NUMBERS },    
	{ 0x327E, R_FP_NUMBERS },           
	{ 0x32D6, R_EXP_MATH_TBL },         
	{ 0x32F7, R_EXP_MATH_TBL },         
	{ 0x3310, R_LOG_MATH_TBL },         
	{ 0x3331, R_LOG_MATH_TBL },         
	{ 0x335A, R_SIN_MATH_TBL },         
	{ 0x339B, R_ATN_MATH_TBL },         
	{ 0x33DC, R_RST_30H_FUN },          
	{ 0x33F2, R_ABS_FUN },              
	{ 0x3407, R_SGN_FUN },              
	{ 0x3422, R_PUSH_SNGL_FAC1 },       
	{ 0x342F, R_SNGL_FAC1_EQ_M },       
	{ 0x3432, R_SNGL_FAC1_EQ_BCDE },    
	{ 0x343D, R_SNGL_BCDE_EQ_FAC1 },    
	{ 0x3447, R_SNGL_BCDE_EQ_M },       
	{ 0x3450, R_SNGL_DECB_EQ_M },       
	{ 0x3459, R_SNGL_M_EQ_FAC1 },       
	{ 0x3461, R_LOAD_FAC2_FROM_M },     
	{ 0x3469, R_MOVE_B_BYTES_INC },     
	{ 0x3472, R_MOVE_B_BYTES_DEC },     
	{ 0x3498, R_SNGL_CMP_BCDE_FAC1 },   
	{ 0x34B0, R_SNGL_CMP_BCDE_M },      
	{ 0x34C2, R_SINT_CMP },             
	{ 0x34FA, R_CMP_FAC1_FAC2 },        
	{ 0x3501, R_CINT_FUN },             
	{ 0x3510, R_FAC1_EQ_SINT_HL },      
	{ 0x352A, R_CSNG_FUN },             
	{ 0x3540, R_CONV_SINT_SNGL },       
	{ 0x3543, R_CONV_SINT_HL_SNGL },    
	{ 0x35BA, R_CDBL_FUN },             
	{ 0x35F8, R_SINT_SUB },             
	{ 0x3645, R_FIX_FUN },              
	{ 0x3654, R_INT_FUN },              
	{ 0x3704, R_SINT_ADD },             
	{ 0x3725, R_SINT_MULT },            
	{ 0x377E, R_SINT_DIV },             
	{ 0x37F4, R_SNGL_ADD_BCDE },        
	{ 0x37F7, R_SNGL_ADD_FAC2 },        
	{ 0x37FD, R_SNGL_SUB },             
	{ 0x3803, R_SNGL_MULT_BCDE },       
	{ 0x3806, R_SNGL_MULT_FAC2 },       
	{ 0x380E, R_SNGL_DIV },             
	{ 0x3827, R_SNGL_LOAD },            
	{ 0x3840, R_ASCII_TO_DBL },         
	{ 0x3867, R_ASCII_FND_e },          
	{ 0x388A, R_ASCII_FND_E },          
	{ 0x3904, R_ASCII_FND_DOT },        
	{ 0x391A, R_ASCII_FND_PERC },       
	{ 0x3929, R_ASCII_FND_LB },         
	{ 0x3931, R_ASCII_CONV_HELPER },    
	{ 0x3940, R_ASCII_CONV_HELPER2 },   
	{ 0x39CC, R_PRNT_BASIC_ERR_TERM },  
	{ 0x39D4, R_PRINT_HL_ON_LCD },      
	{ 0x39E8, R_PRINT_FAC1 },           
	{ 0x39EC, R_PRINT_FAC1_FORMAT },    
	{ 0x3D11, R_FAC1_EQ_ZERO },         
	{ 0x3D7F, R_SNGL_EXP },             
	{ 0x3D8E, R_DBL_EXP },              
	{ 0x3DF7, R_INT_EXP },              
	{ 0x3F28, R_INIT_BASIC_VARS },         
	{ 0x3FA0, R_TIME_ON_STMT },         
	{ 0x3FB2, R_TIME_OFF_STMT },        
	{ 0x3FB9, R_TIME_STOP_STMT },       
	{ 0x3FD2, R_TRIG_INTR },            
	{ 0x3FF1, R_CLEAR_INTR },           
	{ 0x4009, R_CLEAR_COM_INT_DEF },    
	{ 0x407F, R_RESTORE_STMT },         
	{ 0x409A, R_STOP_STMT },            
	{ 0x409F, R_END_STMT },             
	{ 0x40DA, R_CONT_STMT },            
	{ 0x40F1, R_ISALPHA_M },            
	{ 0x40F2, R_ISALPHA_A },            
	{ 0x40F9, R_CLEAR_STMT },           
	{ 0x4174, R_NEXT_STMT },            
	{ 0x4222, R_SEND_CRLF },            
	{ 0x4225, R_SEND_LF },              
	{ 0x4229, R_BEEP_STMT },            
	{ 0x422D, R_HOME_CURSOR },          
	{ 0x4231, R_CLS_STMT },             
	{ 0x4235, R_PROTECT_LABEL },        
	{ 0x423A, R_UNPROT_LABEL },         
	{ 0x423F, R_STOP_AUTO_SCROLL },     
	{ 0x4244, R_RESUME_AUTO_SCROLL },   
	{ 0x4249, R_TURN_CURSOR_ON },       
	{ 0x424E, R_TURN_CURSOR_OFF },      
	{ 0x4253, R_DEL_CUR_LINE },         
	{ 0x4258, R_INSERT_LINE },          
	{ 0x425D, R_ERASE_TO_EOL },         
	{ 0x4262, R_SEND_ESC_X },           
	{ 0x4269, R_INV_CHAR_ENABLE },      
	{ 0x426E, R_INV_CHAR_DISABLE },     
	{ 0x4270, R_END_ESC_SEQ },          
	{ 0x4277, R_CURSOR_TO_LOW_LEFT },   
	{ 0x427C, R_SET_CURSOR_POS },       
	{ 0x428A, R_ERASE_FKEY_DISP },      
	{ 0x42A5, R_SET_DISP_FKEY },        
	{ 0x42A8, R_DISP_FKEY_LINE },       
	{ 0x4313, R_PRINT_A_TO_LCD },       
//	{ 0x4431, R_CHAR_PLOT_3 },          
	{ 0x4335, R_CHAR_PLOT_4 },          
	{ 0x434C, R_CHAR_PLOT_5 },             
	{ 0x4373, R_LCD_OUT_DRIVER },       
	{ 0x438A, R_RST_20H_LKUP_TBL },     
	{ 0x43AF, R_ESC_Y },                
	{ 0x43B2, R_LCD_OUT_ESC_FUN },      
	{ 0x43B8, R_LCD_ESC_LKUP_TBL },     
	{ 0x43FA, R_ESC_SEQ_DRIVER },       
	{ 0x4431, R_ESC_p_FUN },            
	{ 0x4432, R_ESC_q_FUN },            
	{ 0x4437, R_ESC_U_FUN },            
	{ 0x4439, R_ESC_T_FUN },            
	{ 0x443A, R_ESC_X_FUN },            
	{ 0x443F, R_ESC_V_FUN },            
	{ 0x4440, R_ESC_W_FUN },            
	{ 0x4453, R_ESC_C_FUN },            
	{ 0x445C, R_ESC_D_FUN },            
	{ 0x4461, R_BKSPACE_FUN },          
	{ 0x4469, R_ESC_A_FUN },            
	{ 0x446E, R_ESC_B_FUN },            
	{ 0x4480, R_TAB_FUN },              
	{ 0x4494, R_LF_FUN },               
	{ 0x44A8, R_ESC_H_FUN },            
	{ 0x44AA, R_CR_FUN },               
	{ 0x44AF, R_ESC_P_FUN },            
	{ 0x44BA, R_ESC_Q_FUN },            
	{ 0x44C4, R_ESC_M_FUN },            
	{ 0x44D2, R_LCD_SCROLL },           
	{ 0x44EA, R_ESC_L_FUN },            
	{ 0x4512, R_GET_LCD_CHAR },         
	{ 0x4535, R_ESC_l_FUN },            
	{ 0x4537, R_ESC_K_FUN },            
	{ 0x4548, R_CLS_FUN },              
	{ 0x454E, R_ESC_J_FUN },            
	{ 0x4560, R_CHAR_PLOT_6 },          
	{ 0x463E, R_INP_DISP_LINE },        
	{ 0x4644, R_INP_DISP_LINE_NO_Q },   
	{ 0x4684, R_INP_CTRL_C_HANDLER },   
	{ 0x4696, R_INP_ENTER_HANDLER },    
	{ 0x46A0, R_INP_BKSP_HANDLER },     
	{ 0x46C3, R_INP_CTRL_U_HANDLER },   
	{ 0x46CA, R_INP_TAB_HANDLER },      
	{ 0x478B, R_DIM_STMT },             
	{ 0x4790, R_FIND_VAR_ADDR },        
	{ 0x4991, R_USING_FUN },            
	{ 0x4B44, R_SEND_A_LCD_LPT },       
	{ 0x4B55, R_PRINT_A_EXPAND },       
	{ 0x4B92, R_SET_OUT_DEV_LCD },      
	{ 0x4BAB, R_LCD_CHAR_OUT_FUN },     
	{ 0x4BB8, R_LCD_NEW_LINE },         
	{ 0x4BEA, R_INKEY_FUN },            
	{ 0x4C84, R_GET_FILE_DESC },        
	{ 0x4CCB, R_OPEN_STMT },            
	{ 0x4D59, R_LCD_CLOSE_FUN },        
	{ 0x4D6E, R_RUN_STMT },             
	{ 0x4D70, R_LOAD_STMT },            
	{ 0x4D71, R_MERGE_STMT },           
	{ 0x4DCF, R_SAVE_STMT },            
	{ 0x4E28, R_CLOSE_STMT },           
	{ 0x4E8E, R_INPUT_STMT },           
	{ 0x4F0A, R_CLEAR_MEM },            
	{ 0x4F0B, R_LOAD_MEM },             
	{ 0x4F2E, R_PRINT_LB_INIT_FUN },    
	{ 0x4F5B, R_LINE_INPUT_STMT },      
	{ 0x504E, R_GEN_NM_ERR_FUN },       
	{ 0x5051, R_GEN_AO_ERR_FUN },       
	{ 0x5054, R_GEN_DS_ERR_FUN },       
	{ 0x5057, R_GEN_FF_ERR_FUN },       
	{ 0x505A, R_GEN_CF_ERR_FUN },       
	{ 0x505D, R_GEN_BN_ERR_FUN },       
	{ 0x5060, R_GEN_IE_ERR_FUN },       
	{ 0x5063, R_GEN_EF_ERR_FUN },       
	{ 0x5066, R_GEN_FL_ERR_FUN },       
	{ 0x506B, R_LOF_FUN },              
	{ 0x506D, R_LOC_FUN },              
	{ 0x506F, R_LFILES_FUN },           
	{ 0x5071, R_DSKO_FUN },             
	{ 0x5073, R_DSKI_FUN },             
	{ 0x50F1, R_DEV_NAME_TBL },         
	{ 0x5113, R_DCB_VCTR_TBL },         
	{ 0x5146, R_TELCOM_ENTRY },         
	{ 0x515B, R_TELCOM_RE_ENTRY },      
	{ 0x5185, R_TELCOM_INST_VCTR_TBL }, 
	{ 0x51A4, R_TELCOM_LABEL_TXT },     
	{ 0x51C0, R_TELCOM_STAT_FUN },      
	{ 0x51C7, R_PRINT_TELCOM_STAT },    
	{ 0x51ED, R_SET_TELCOM_STAT },      
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
	{ 0x5455, R_TELCOM_TERM_FUN },      
	{ 0x54FC, R_TELCOM_DISPATCH },      
	{ 0x550D, R_TERM_FKEY_VCTR_TBL },   
	{ 0x5523, R_TELCOM_PREV_FUN },      
	{ 0x553E, R_TELCOM_FULL_FUN },      
	{ 0x5550, R_TELCOM_ECHO_FUN },      
	{ 0x559D, R_TELCOM_UP_FUN },        
	{ 0x567E, R_TELCOM_DOWN_FUN },      
	{ 0x571E, R_TELCOM_BYE_FUN },       
	{ 0x5791, R_PRINT_STRING },         
	{ 0x5797, R_MENU_ENTRY },           
	{ 0x57F8, R_DISP_DIR },             
	{ 0x5837, R_MENU_CTRL_U_HANDLER },  
	{ 0x585A, R_MENU_CMD_LOOP },        
	{ 0x588E, R_MENU_BKSP_HANDLER },    
	{ 0x58F7, R_MENU_ENTER_HANDLER },   
	{ 0x596F, R_EXEC_ROM_FILE },        
	{ 0x5970, R_DISP_DIR_TYPE_C },      
	{ 0x59AD, R_CONV_FILENAME },        
	{ 0x59C9, R_NEXT_DIR_ENTRY },       
	{ 0x5A12, R_CLS_PRINT_TIME_DAY },   
	{ 0x5A15, R_PRINT_TIME_DAY },       
	{ 0x5A58, R_PRINT_STRING2 },        
	{ 0x5A62, R_COPY_MEM_DE_M },        
	{ 0x5A6D, R_CMP_MEM_DE_M },         
	{ 0x5A79, R_CLEAR_FKEY_TBL },       
	{ 0x5A7C, R_SET_FKEYS },            
	{ 0x5A9E, R_DISP_FKEYS },           
	{ 0x5AA9, R_SEARCH_DIR },           
	{ 0x5AE3, R_GET_FILE_ADDR },        
	{ 0x5B1E, R_DIR_DISP_ORDER_TBL },   
	{ 0x5B68, R_ADDRSS_ENTRY },         
	{ 0x5B6B, R_ADDRSS_ENTRY_W_FILE },  
	{ 0x5B6F, R_SCHEDL_ENTRY },         
	{ 0x5B72, R_SCHEDL_ENTRY_W_FILE },  
	{ 0x5BF5, R_ADDRSS_FIND_FUN },      
	{ 0x5BF7, R_ADDRSS_LFND_FUN },      
	{ 0x5C3F, R_FIND_TEXT_IN_FILE },    
	{ 0x5C6D, R_FIND_NEXT_LINE_IN_FILE },  
	{ 0x5C74, R_CHECK_FOR_CRLF },       
	{ 0x5CEF, R_ADDRSS_INST_VCTR_TBL }, 
	{ 0x5D64, R_GET_KEY_CONV_TOUPPER }, 
	{ 0x5D6A, R_SEND_CURSOR_HOME },     
	{ 0x5D70, R_PRINT_TIME_LOOP },      
	{ 0x5DEE, R_TEXT_ENTRY },           
	{ 0x5E22, R_TEXT_FKEY_TBL },        
	{ 0x5E51, R_EDIT_STMT },            
	{ 0x5F2F, R_WAIT_FOR_SPACE_KEY },   
	{ 0x5F65, R_EDIT_DO_FILE_FUN },     
	{ 0x5FDD, R_TEXT_EDIT_LOOP },       
	{ 0x6016, R_TEXT_CTRL_VCTR_TBL },   
	{ 0x6056, R_TEXT_ESC_FUN },         
	{ 0x607C, R_TEXT_CTRL_P_FUN },      
	{ 0x608A, R_TEXT_CTRL_I_FUN },      
	{ 0x60BE, R_TEXT_CTRL_M_FUN },      
	{ 0x60DE, R_TEXT_CTRL_D_FUN },      
	{ 0x60E2, R_TEXT_CTRL_X_FUN },      
	{ 0x610B, R_TEXT_CTRL_H_FUN },      
	{ 0x6151, R_TEXT_CTRL_S_FUN },      
	{ 0x6155, R_TEXT_CTRL_E_FUN },      
	{ 0x617A, R_TEXT_CTRL_F_FUN },      
	{ 0x618C, R_TEXT_CTRL_A_FUN },      
	{ 0x61C2, R_TEXT_CTRL_T_FUN },      
	{ 0x61D7, R_TEXT_CTRL_B_FUN },      
	{ 0x61FD, R_TEXT_CTRL_R_FUN },      
	{ 0x620B, R_TEXT_CTRL_Q_FUN },      
	{ 0x6210, R_TEXT_CTRL_W_FUN },      
	{ 0x621C, R_TEXT_CTRL_Z_FUN },      
	{ 0x6242, R_TEXT_CTRL_L_FUN },      
	{ 0x628F, R_TEXT_CTRL_C_FUN },      
	{ 0x63E5, R_TEXT_GET_NEXT_BYTE },   
	{ 0x6431, R_TEXT_CTRL_O_FUN },      
	{ 0x6445, R_TEXT_CTRL_U_FUN },      
	{ 0x6551, R_TEXT_CTRL_N_FUN },      
	{ 0x65C3, R_COPY_NULL_STRING },     
	{ 0x6691, R_TEXT_CTRL_Y_FUN },      
	{ 0x6713, R_TEXT_CTRL_G_FUN },      
	{ 0x6774, R_TEXT_CTRL_V_FUN },      
	{ 0x6B61, R_INSERT_A_INTO_FILE },   
	{ 0x6B6D, R_INSERT_SPACES },        
	{ 0x6B9F, R_DELETE_CHARS },         
	{ 0x6BDB, R_MOVE_BC_BYTES_INC },    
	{ 0x6BE6, R_MOVE_BC_BYTES_DEC },    
	{ 0x6BF1, R_ROM_CAT_ENTRIES },      
	{ 0x6C49, R_BASIC_ENTRY },          
	{ 0x6C93, R_LOAD_BASIC_FKEYS },     
	{ 0x6C9C, R_LOAD_BASIC_FKEYS },     
	{ 0x6CD6, R_RE_INIT_SYSTEM },       
	{ 0x6CE0, R_WARM_RESET },           
	{ 0x6D3F, R_SEND_A_TO_LPT },        
	{ 0x6D6D, R_CHECK_RS232_QUEUE },    
	{ 0x6D7E, R_READ_RS232_QUEUE },     
	{ 0x6DAC, R_RST_6_5_FUN },          
	{ 0x6DFC, R_INC_RS232_QUEUE_IN },   
	{ 0x6E0B, R_SEND_XON },             
	{ 0x6E1E, R_DISABLE_XON_XOFF },     
	{ 0x6E32, R_SEND_A_USING_XON },     
	{ 0x6E3A, R_SEND_C_TO_RS232 },      
	{ 0x6E4D, R_XON_XOFF_HANDLER },     
	{ 0x6E75, R_SET_RS232_BAUD_RATE },  
	{ 0x6E94, R_RS232_BAUD_TIMER_VALS },
	{ 0x6EA6, R_INIT_RS232_MDM },       
	{ 0x6ECB, R_UNINIT_RS232_MDM },     
	{ 0x6EE5, R_CLICK_SND_PORT },       
	{ 0x6EEF, R_CHECK_CD },             
	{ 0x6F31, R_ENABLE_XON_XOFF },      
	{ 0x6F39, R_INIT_SER_BUF_PARAMS },  
	{ 0x6F46, R_CAS_WRITE_HEADER },     
	{ 0x6F5B, R_CAS_WRITE_NO_CHKSUM },  
	{ 0x6F5B, R_CAS_WRITE_NO_SYNC },    
	{ 0x6F6A, R_CAS_WRITE_BIT },        
	{ 0x6F85, R_CAS_READ_HEADER },      
	{ 0x6FDB, R_CAS_READ_BIT },         
	{ 0x7023, R_CAS_COUNT_BITS },       
	{ 0x702A, R_CAS_READ_NO_CHKSUM },   
	{ 0x7043, R_CAS_REMOTE_FUN },       
	{ 0x7055, R_KEYSCAN_MGT_FUN },      
	{ 0x7060, R_KEY_DETECTION },        
	{ 0x70B0, R_KEY_REPEAT_DET },       
//	{ 0x70B0, R_GET_KEY_MATRIX },       
//	{ 0x7122, R_INIT_KEY_RPT_CNT },     
	{ 0x7122, R_KEY_DECODE },           
	{ 0x71D5, R_KEY_FIRST_IN_BUF },     
	{ 0x71E4, R_KEY_ADD_TO_BUF },       
	{ 0x71F7, R_ISR_EXIT_FUN },         
	{ 0x720A, R_UNSHIFTED_KEY },        
	{ 0x7222, R_ARROW_KEY },            
	{ 0x722C, R_CAPS_LOCK_KEY },        
	{ 0x7233, R_NUM_KEY },              
	{ 0x7242, R_SCAN_KEYBOARD },        
	{ 0x726A, R_ENABLE_INTERRUPTS },    
	{ 0x7270, R_CHK_PENDING_KEYS },     
	{ 0x7283, R_CHK_BREAK },            
	{ 0x729F, R_CHK_SHIFT_BREAK },      
	{ 0x72B1, R_SCAN_SPECIAL_KEYS },    
	{ 0x72C5, R_GEN_TONE },             
	{ 0x7329, R_GET_CLK_CHIP_REGS },    
	{ 0x732A, R_PUT_CLK_CHIP_REGS },    
	{ 0x7352, R_READ_CLK_CHIP_BIT },    
	{ 0x7383, R_SET_CLK_CHIP_MODE },    
	{ 0x73A9, R_BLINK_CURSOR },         
	{ 0x73EE, R_CHAR_PLOT_7 },          
	{ 0x744C, R_PLOT_POINT },           
	{ 0x744D, R_CLEAR_POINT },          
	{ 0x74A2, R_LCD_BYTE_PLOT },        
	{ 0x7533, R_ENABLE_LCD_DRIVER },    
	{ 0x7548, R_WAIT_LCD_DRIVER },      
	{ 0x7551, R_LCD_BIT_PATTERNS },     
	{ 0x7643, R_LCD_BIT_PATTERNS },     
	{ 0x7657, R_DELAY_FUN },            
	{ 0x765C, R_SET_INTR_1DH },         
	{ 0x7662, R_BEEP_FUN },             
	{ 0x7676, R_CLICK_SOUND_PORT },     
	{ 0x7682, R_CHK_XTRNL_CNTRLER },    
	{ 0x768F, R_XTRNL_CNTRLER_DRIVER }, 
	{ 0x7711, R_LCD_CHAR_SHAPE_TBL1 },  
	{ 0x78F1, R_LCD_CHAR_SHAPE_TBL2 },  
	{ 0x7BF1, R_KEYBOARD_CONV_MATRIX }, 
	{ 0x7D33, R_BOOT_ROUTINE },         
	{ 0x7DE7, R_COLD_BOOT },            
	{ 0x7EA6, R_DISP_MODEL },           
	{ 0x7EAC, R_DISP_FREE_BYTES },      
	{ 0x7EC6, R_INIT_RST_38H_TBL },     
	{ 0x7EE1, R_CALC_FREE_RAM },        
	{ 0x7F01, R_INIT_CLK_CHIP_REGS },   
	{ 0x7F98, R_MENU_TEXT_STRINGS },    
	{ 0x7FD6, R_RST_38H_DRIVER },       
	{ 0xF5F9, R_RST_5_5_VECTOR },       
	{ 0xF5FC, R_RST_6_5_VECTOR },       
	{ 0xF5FF, R_RST_7_5_VECTOR },       
	{ 0xF602, R_TRAP_VECTOR },          
	{ 0xF605, R_DETECT_OPTION_ROM },       
	{ -1, -1 }
};

RomDescription_t gM100_Desc = {
	0x3C003845,					/* Signature */
	0x7A20,						/* Signature address */
	1,                          /* StdRom */

	gM100_Tables,				/* Known tables */
	gM100_Vars,					/* Known variables */
	gM100_Funs,					/* Known functions */

	0xF99A,                     /* Address of unsaved BASIC prgm */
	0xF9A5,                     /* Address of next DO file */
	0xFBAE,                     /* Start of DO file area */
	0xFBB0,                     /* Start of CO file area */
	0xFBB2,                     /* Start of Variable space */
	0xFBB4,                     /* Start of Array data */
	0xFBB6,                     /* Pointer to unused memory */
	0xF5F4,                     /* Address where HIMEM is stored */
	0xF88C,                     /* End of RAM for file storage */
	0xFAC0,                     /* Lowest RAM used by system */
	0xF962,                     /* Start of RAM directory */
	0xF678,                     /* BASIC string	buffer pointer */
	0xFAD8,						/* BASIC Size */
	0xFF9A,						/* Keyscan location */
	0x7711,						/* Character generator table */
	0xF92D,						/* Loacation of Year storage */

	24,							/* Number of directory entries */
	8,							/* Index of first Dir entry */
	0x5B0D						/* Addres of MS Copyright string */
};

