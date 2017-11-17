/*
 * Main implementation: use this 'C' sample to create your own application
 *
 */

#include "C:\My Documents\Continental\IAR\Devs\lib\Common\Std_Types.h"
//#include "C:\My Documents\Continental\IAR\Devs\lib\MCAL\typedef.h"
#include "C:\My Documents\Continental\IAR\Devs\lib\HAL\clock.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\HAL\delays.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\HAL\button.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\HAL\segmentbar.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\HAL\leds.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\SERVICES\Interrupts\interrupts.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\SERVICES\Scheduler\SchM.c"
#include "C:\My Documents\Continental\IAR\Devs\lib\SERVICES\Scheduler\SchM_Cfg.c"


   
 void main(void){
  clock_InitClock();
  delays_InitTimer();
  segmentbar_InitBar();
  leds_InitBoardLeds();
  leds_InitLeds();
    
  SchM_Init(&SchM_Config);			/* Scheduler Services Initialization */
  SchM_Start();							/* Start Scheduler Services */
    
  for(;;){
    // Do nothing
  }
}

/*============================================================================*/
/**************************************************************
 *  Name                 : SystTick interruption
 *  Description          : Moves the Window upwards
 *  Parameters           : [void]
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void SysTick_Handler(void){
  if ( NULL!= GlbSysTickCallback)
	  GlbSysTickCallback();
  leds_ToggleBlueBoardLED();
}