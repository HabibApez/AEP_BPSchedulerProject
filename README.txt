# AEP_BPSchedulerProject

Binary Progression Scheduler (BPS) at Continental

AEP 2017

Lastest Release: 2017/11/17 


Author: Habib Alejandro Apez González


Contact: habibapez@hotmail.com
      

Location: Querétaro, México.


The Scheduler uses the Binary Progression Algorithm to determine the execution of the tasks.

1. The scheduler was implemented in the S32K144EVB.
2. This project was compiled in IAR.
3. The code was developed following the AUTOSAR Software Architecture: MCAL, HAL, SERVICES and APP Layers were defined.
4. To implement the Scheduler’s Tick, the SysTick Interruption of the microcontroller was used. The Scheduler has a 781.25us Tick.
5. To implement the delays, the LPIT0 was used.
6. All code files of the project are attached as well as the Scheduler Design document.
7. The hardware of the window lifter project was used for this project



Content:
*Documentation
	** Design: Contains the Scheduler Design.
      	** Report: Contains the Scheduler Report.
      	** Requirements: Contains the files with requirements of the project.
*lib
   	** APP: Contains the application file (main.c).
 	** Common: Contains the file with definition of the data types used.
   	** HAL: Contains the Hardware Abstraction Layer modules.
    	** MCAL: Contains the Microcontroller Abstraction Layer modules.
     	** SERVICES: Contains the Service Layer modules.
*projects
   	** SchedulerLED: Contains the project settings of IAR.  
      	** settings: Contains the workspace settings of IAR.  
