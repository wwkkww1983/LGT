//*******************************************************************************
//*******************************  C Header File  *******************************
//*******************************************************************************
// filename   : lgt8f328p_tc0.h
// version    : 1.0
// data       : Feb07, 2017
// revised by : LogicGreen Software Group
// description: Original version
//*******************************************************************************
// Copyright (c) 2017, LogicGreen Technologies Co., LTD
// All rights reserved.
//*******************************************************************************

#ifndef _LGT8F328P_TC0_H_
#define _LGT8F328P_TC0_H_

#include "../inc/allinone.h"

// TC0 Waveform Generation Mode definition
#define	TC0_WGM_NORMAL		0x0		/** normal mode **/
#define	TC0_WGM_PCPWMXFF	0x1		/** phase correct pwm mode with top=0xff **/
#define	TC0_WGM_CTC		0x2		/** CTC mode **/
#define	TC0_WGM_FPWMXFF		0x3		/** fast pwm mode with top=0xff **/
#define	TC0_WGM_PCPWMOCA	0x5		/** phase correct pwm mode with top=OCR0A **/
#define	TC0_WGM_FPWMOCA		0x7		/** fast pwm mode with top=OCR0A **/

// TC0 Compare Output Mode definition
#define	TC0_COM_DIS		0x0		/** OC0x disconnected, used as GPIO port **/
#define	TC0_COM_TOG		0x1		/** Toggle OC0x on Compare Match in non-PWM mode **/
#define	TC0_COM_CLR_MACH	0x2		/** Clear OC0x on Compare Match when up-counting, Set OC0x on Compare Match when down-counting or at Bottom **/
#define	TC0_COM_SET_MACH	0x3		/** Set OC0x on Compare Match when up-counting, Clear OC0x on Compare Match when down-counting or at Bottom **/

// TC0 Clock Select definition
#define	TC0_CS_NO		0x0		/** No clock source, TC0 is stopped **/
#define	TC0_CS_DIV1		0x1		/** Clkio/1 **/
#define	TC0_CS_DIV8		0x2		/** Clkio/8 **/
#define	TC0_CS_DIV64		0x3		/** Clkio/64 **/
#define	TC0_CS_DIV256		0x4		/** Clkio/256 **/
#define	TC0_CS_DIV1024		0x5		/** Clkio/1024 **/
#define	TC0_CS_EXF		0x6		/** Falling edge of external clock source on T0 pin **/
#define	TC0_CS_EXR		0x7		/** Rising edge of external clock source on T0 pin **/

void tc0_init(void);


volatile unsigned char dut_cyc;
volatile unsigned int  tov_cnt;

#endif
