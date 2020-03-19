/*
  							  	****************
*******************************  C SOURCE FILE  **********************************
** 								**************** 						        **
** 																		        **
** project  : LGT8F88ABSPPrj											    	**
** filename : DrvUSART.c	  													**
** version  : 1.0 													   			**
** date     : April 01, 2013 										   			**
** 			  		 	 												   		**
**********************************************************************************
** 																		   		**
** Copyright (c) 2013, 	Logic Green Technologies								**
** All rights reserved.                                                    		**
**                                                                         		**
**********************************************************************************
VERSION HISTORY:
----------------
Version 	: 1.0
Date 		: April 01, 2013
Revised by 	: LGT Software Group
Description : Original version.
*/

	
#define _USART_SRC_C_

/**********************************************************************************
***					            MODULES USED									***													  	
**********************************************************************************/
#include "DrvUSART.h"

/**********************************************************************************
***					           LOCAL VARIABLES									***													  	
**********************************************************************************/
/**
 * baud rate to clock divier
 * this array will be stored in FLASH
 */
const prog_uint16_t uart_br_ubrr[UART_CLK_SRC_NUM][UART_BR_NUM]
={{207, 103, 51, 34, 25, 16, 12, 8, 6, 3, 1, 1, 0, 0, 					// 8-a
	416, 207, 103, 68, 51, 34, 25, 16, 12, 8, 3, 3, 1, 0,  				// 8-a-2x
	1666, 832, 416, 277, 207, 138, 103, 68, 51, 34, 16, 15, 7, 3},							// hasn't been test 8-s
{416, 207, 103, 68, 51, 34, 25, 16, 12, 8, 3, 3, 1, 0, 					// 16-a
	832, 416, 207, 138, 103, 68, 51, 34, 25, 16, 8, 7, 3, 1, 			// 16-a-2x
	3332, 1666, 832, 555, 416, 277, 207, 138, 103, 69, 34, 31, 15, 7},	// 16-s
};

/**********************************************************************************
***					         				EOF									***													  	
**********************************************************************************/
