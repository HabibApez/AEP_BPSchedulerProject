/*
 * Main implementation: use this 'C' sample to create your own application
 *
 */

#include "Std_Types.h"
#include "Port.h"
#include "Wdog.h"
#include "Nvic.h"
#include "Mcu.h"
#include "SchM.h"

int main(void)
{
	WDOG_disable();
	PORT_init();             				/* Configure ports */
	SOSC_init_8MHz();        				/* Initialize system oscilator for 8 MHz xtal */
	SPLL_init_160MHz();      				/* Initialize SPLL to 160 MHz with 8 MHz SOSC */
	NormalRUNmode_80MHz();   				/* Init clocks: 80 MHz sysclk & core, 40 MHz bus, 20 MHz flash */
	NVIC_init_IRQs();        				/* Enable desired interrupts and priorities */
	SchM_Init(&SchedulerConfig);			/* Scheduler Services Initialization */
	SchM_Start();							/* Start Scheduler Services */

	/* Further code should not be reached */
	for(;;) {

	}

	return (0);
}
