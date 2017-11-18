/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
 * $Revision: version 1$
 * $Author: Habib Apez $
 * $Date: 2017-11- 16 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \SchM_Tasks.c
    Source of SchM_Tasks. Located at SERVICES in Scheduler.
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  Author             |        Version     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/* Habib Apez          |          1         |   Initial version               */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SchM_Tasks.h"

/* Constants and types  */
/*============================================================================*/

/* Variables */
/*============================================================================*/

/* Private functions prototypes */
/*============================================================================*/

/* Inline functions */
/*============================================================================*/

/* Private functions */
/*============================================================================*/

/* Exported functions */
/*============================================================================*/
/**************************************************************
 *  Name                 : SchM_3p125ms_Task
 *  Description          : Executes a task each 3.125ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_3p125ms_Task(void){   /* Code Task0*/
  segmentbar_TurnOnSeg0();
  delays_Wait500us();
  //delays_Wait500us();         /* Comment this line to observe the CPU load change */
  segmentbar_TurnOffSeg0();
}

/**************************************************************
 *  Name                 : SchM_6p25ms_Task
 *  Description          : Executes a task each 6.25ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_6p25ms_Task(void){  /* Code Task1*/
  segmentbar_TurnOnSeg1();
  delays_Wait500us();
  // delays_Wait500us();
  segmentbar_TurnOffSeg1();
}

/**************************************************************
 *  Name                 : SchM_12p5ms_Task
 *  Description          : Executes a task each 12.5ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_12p5ms_Task(void){  /* Code Task2*/
  segmentbar_TurnOnSeg2();
  delays_Wait500us();           /* Comment this line to observe the CPU load change */
  segmentbar_TurnOffSeg2();
}

/**************************************************************
 *  Name                 : SchM_25ms_Task
 *  Description          : Executes a task each 25ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_25ms_Task(void){  /* Code Task3*/
  segmentbar_TurnOnSeg3();
  delays_Wait500us();
  segmentbar_TurnOffSeg3();
}

/**************************************************************
 *  Name                 : SchM_50ms_Task
 *  Description          : Executes a task each 50ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_50ms_Task(void){  /* Code Task4*/
  segmentbar_TurnOnSeg4();
  delays_Wait500us();
  segmentbar_TurnOffSeg4();
}

/**************************************************************
 *  Name                 : SchM_100ms_Task
 *  Description          : Executes a task each 100ms
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SchM_100ms_Task(void){  /* Code Task5*/
  segmentbar_TurnOnSeg5();
  delays_Wait500us();
  /*
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
  delays_Wait500us();
*/
  segmentbar_TurnOffSeg5();
}
 /* Notice: the file ends with a blank new line to avoid compiler warnings */
