/**************************************************
 *
 * This file contains an interrupt vector for Cortex-M written in C.
 * The actual interrupt functions must be provided by the application developer.
 *
 * Copyright 2007-2017 IAR Systems AB.
 *
 * $Revision: 112610 $
 *
 **************************************************/

#pragma language=extended
#pragma segment="CSTACK"

extern void __iar_program_start( void );

extern void NMI_Handler( void );
extern void HardFault_Handler( void );
extern void MemManage_Handler( void );
extern void BusFault_Handler( void );
extern void UsageFault_Handler( void );
extern void SVC_Handler( void );
extern void DebugMon_Handler( void );
extern void PendSV_Handler( void );
extern void SysTick_Handler( void );

/************ s32K144 Specific Interrupts Functions *****************/
extern void PORTA_IRQHandler( void );
extern void PORTB_IRQHandler( void );
extern void PORTC_IRQHandler( void );
extern void PORTD_IRQHandler( void );
extern void PORTE_IRQHandler( void );


typedef void( *intfunc )( void );
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

// The vector table is normally located at address 0.
// When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
// If you need to define interrupt service routines,
// make a copy of this file and include it in your project.
// The name "__vector_table" has special meaning for C-SPY, which
// is where to find the SP start value.
// If vector table is not located at address 0, the user has to initialize
// the  NVIC vector table register (VTOR) before using interrupts.


#pragma location = ".intvec"
const intvec_elem __vector_table[] =
{
  { .__ptr = __sfe( "CSTACK" ) },
  __iar_program_start,

  NMI_Handler,                                     /* NMI Handler,*/
  HardFault_Handler,                               /* Hard Fault Handler,*/
  MemManage_Handler,                               /* MPU Fault Handler,*/
  BusFault_Handler,                                /* Bus Fault Handler,*/
  UsageFault_Handler,                              /* Usage Fault Handler,*/
  0,                                               /* Reserved*/
  0,                                               /* Reserved*/
  0,                                               /* Reserved*/
  0,                                               /* Reserved*/
  SVC_Handler,                                     /* SVCall Handler,*/
  DebugMon_Handler,                                /* Debug Monitor Handler,*/
  0,                                               /* Reserved*/
  PendSV_Handler,                                  /* PendSV Handler,*/
  SysTick_Handler,                                 /* SysTick Handler,*/  
  /********* s32K144 Specific Interrupt Handlers (BEGIN) ***********/
  0,                                 /* DMA channel 0 transfer complete*/
  0,                                 /* DMA channel 1 transfer complete*/
  0,                                 /* DMA channel 2 transfer complete*/
  0,                                 /* DMA channel 3 transfer complete*/
  0,                                 /* DMA channel 4 transfer complete*/
  0,                                 /* DMA channel 5 transfer complete*/
  0,                                 /* DMA channel 6 transfer complete*/
  0,                                 /* DMA channel 7 transfer complete*/
  0,                                 /* DMA channel 8 transfer complete*/
  0,                                 /* DMA channel 9 transfer complete*/
  0,                                /* DMA channel 10 transfer complete*/
  0,                                /* DMA channel 11 transfer complete*/
  0,                                /* DMA channel 12 transfer complete*/
  0,                                /* DMA channel 13 transfer complete*/
  0,                                /* DMA channel 14 transfer complete*/
  0,                                /* DMA channel 15 transfer complete*/
  0,                            /* DMA error interrupt channels 0-15*/
  0,                                  /* FPU sources*/
  0,                                 /* FTFC Command complete*/
  0,                       /* FTFC Read collision*/
  0,                              /* PMC Low voltage detect interrupt*/
  0,                           /* FTFC Double bit fault detect*/
  0,                             /* Single interrupt vector for WDOG and EWM*/
  0,                                  /* RCM Asynchronous Interrupt*/
  0,                        /* LPI2C0 Master Interrupt*/
  0,                         /* LPI2C0 Slave Interrupt*/
  0,                               /* LPSPI0 Interrupt*/
  0,                               /* LPSPI1 Interrupt*/
  0,                               /* LPSPI2 Interrupt*/
  0,                           /* Reserved Interrupt 45*/
  0,                           /* Reserved Interrupt 46*/
  0,                         /* LPUART0 Transmit / Receive Interrupt*/
  0,                           /* Reserved Interrupt 48*/
  0,                         /* LPUART1 Transmit / Receive  Interrupt*/
  0,                           /* Reserved Interrupt 50*/
  0,                         /* LPUART2 Transmit / Receive  Interrupt*/
  0,                           /* Reserved Interrupt 52*/
  0,                           /* Reserved Interrupt 53*/
  0,                           /* Reserved Interrupt 54*/
  0,                                 /* ADC0 interrupt request.*/
  0,                                 /* ADC1 interrupt request.*/
  0,                                 /* CMP0 interrupt request*/
  0,                           /* Reserved Interrupt 58*/
  0,                           /* Reserved Interrupt 59*/
  0,                     /* ERM single bit error correction*/
  0,                     /* ERM double bit error non-correctable*/
  0,                                  /* RTC alarm interrupt*/
  0,                          /* RTC seconds interrupt*/
  0,                            /* LPIT0 channel 0 overflow interrupt*/
  0,                            /* LPIT0 channel 1 overflow interrupt*/
  0,                            /* LPIT0 channel 2 overflow interrupt*/
  0,                            /* LPIT0 channel 3 overflow interrupt*/
  0,                                 /* PDB0 interrupt*/
  0,                           /* Reserved Interrupt 69*/
  0,                           /* Reserved Interrupt 70*/
  0,                           /* Reserved Interrupt 71*/
  0,                           /* Reserved Interrupt 72*/
  0,                                  /* SCG bus interrupt request*/
  0,                               /* LPTIMER interrupt request*/
  PORTA_IRQHandler,                                /* Port A pin detect interrupt*/
  PORTB_IRQHandler,                                /* Port B pin detect interrupt*/
  PORTC_IRQHandler,                                /* Port C pin detect interrupt*/
  PORTD_IRQHandler,                                /* Port D pin detect interrupt*/
  PORTE_IRQHandler,                                /* Port E pin detect interrupt*/
  0,                                  /* Software interrupt*/
  0,                           /* Reserved Interrupt 81*/
  0,                           /* Reserved Interrupt 82*/
  0,                           /* Reserved Interrupt 83*/
  0,                                 /* PDB1 interrupt*/
  0,                               /* FlexIO Interrupt*/
  0,                           /* Reserved Interrupt 86*/
  0,                           /* Reserved Interrupt 87*/
  0,                           /* Reserved Interrupt 88*/
  0,                           /* Reserved Interrupt 89*/
  0,                           /* Reserved Interrupt 90*/
  0,                           /* Reserved Interrupt 91*/
  0,                           /* Reserved Interrupt 92*/
  0,                           /* Reserved Interrupt 93*/
  0,                            /* CAN0 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
  0,                           /* CAN0 Interrupt indicating that errors were detected on the CAN bus*/
  0,                         /* CAN0 Interrupt asserted when Pretended Networking operation is enabled, and a valid message matches the selected filter criteria during Low Power mode*/
  0,                    /* CAN0 OR'ed Message buffer (0-15)*/
  0,                   /* CAN0 OR'ed Message buffer (16-31)*/
  0,                           /* Reserved Interrupt 99*/
  0,                          /* Reserved Interrupt 100*/
  0,                            /* CAN1 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
  0,                           /* CAN1 Interrupt indicating that errors were detected on the CAN bus*/
  0,                          /* Reserved Interrupt 103*/
  0,                    /* CAN1 OR'ed Interrupt for Message buffer (0-15)*/
  0,                          /* Reserved Interrupt 105*/
  0,                          /* Reserved Interrupt 106*/
  0,                          /* Reserved Interrupt 107*/
  0,                            /* CAN2 OR'ed [Bus Off OR Transmit Warning OR Receive Warning]*/
  0,                           /* CAN2 Interrupt indicating that errors were detected on the CAN bus*/
  0,                          /* Reserved Interrupt 110*/
  0,                    /* CAN2 OR'ed Message buffer (0-15)*/
  0,                          /* Reserved Interrupt 112*/
  0,                          /* Reserved Interrupt 113*/
  0,                          /* Reserved Interrupt 114*/
  0,                         /* FTM0 Channel 0 and 1 interrupt*/
  0,                         /* FTM0 Channel 2 and 3 interrupt*/
  0,                         /* FTM0 Channel 4 and 5 interrupt*/
  0,                         /* FTM0 Channel 6 and 7 interrupt*/
  0,                           /* FTM0 Fault interrupt*/
  0,                      /* FTM0 Counter overflow and Reload interrupt*/
  0,                         /* FTM1 Channel 0 and 1 interrupt*/
  0,                         /* FTM1 Channel 2 and 3 interrupt*/
  0,                         /* FTM1 Channel 4 and 5 interrupt*/
  0,                         /* FTM1 Channel 6 and 7 interrupt*/
  0,                           /* FTM1 Fault interrupt*/
  0,                      /* FTM1 Counter overflow and Reload interrupt*/
  0,                         /* FTM2 Channel 0 and 1 interrupt*/
  0,                         /* FTM2 Channel 2 and 3 interrupt*/
  0,                         /* FTM2 Channel 4 and 5 interrupt*/
  0,                         /* FTM2 Channel 6 and 7 interrupt*/
  0,                           /* FTM2 Fault interrupt*/
  0,                      /* FTM2 Counter overflow and Reload interrupt*/
  0,                         /* FTM3 Channel 0 and 1 interrupt*/
  0,                         /* FTM3 Channel 2 and 3 interrupt*/
  0,                         /* FTM3 Channel 4 and 5 interrupt*/
  0,                         /* FTM3 Channel 6 and 7 interrupt*/
  0,                           /* FTM3 Fault interrupt*/
  0,                      /* FTM3 Counter overflow and Reload interrupt*/
  0,                                      /* 139*/
  0,                                      /* 140*/
  0,                                      /* 141*/
  0,                                      /* 142*/
  0,                                      /* 143*/
  0,                                      /* 144*/
  0,                                      /* 145*/
  0,                                      /* 146*/
  0,                                      /* 147*/
  0,                                      /* 148*/
  0,                                      /* 149*/
  0,                                      /* 150*/
  0,                                      /* 151*/
  0,                                      /* 152*/
  0,                                      /* 153*/
  0,                                      /* 154*/
  0,                                      /* 155*/
  0,                                      /* 156*/
  0,                                      /* 157*/
  0,                                      /* 158*/
  0,                                      /* 159*/
  0,                                      /* 160*/
  0,                                      /* 161*/
  0,                                      /* 162*/
  0,                                      /* 163*/
  0,                                      /* 164*/
  0,                                      /* 165*/
  0,                                      /* 166*/
  0,                                      /* 167*/
  0,                                      /* 168*/
  0,                                      /* 169*/
  0,                                      /* 170*/
  0,                                      /* 171*/
  0,                                      /* 172*/
  0,                                      /* 173*/
  0,                                      /* 174*/
  0,                                      /* 175*/
  0,                                      /* 176*/
  0,                                      /* 177*/
  0,                                      /* 178*/
  0,                                      /* 179*/
  0,                                      /* 180*/
  0,                                      /* 181*/
  0,                                      /* 182*/
  0,                                      /* 183*/
  0,                                      /* 184*/
  0,                                      /* 185*/
  0,                                      /* 186*/
  0,                                      /* 187*/
  0,                                      /* 188*/
  0,                                      /* 189*/
  0,                                      /* 190*/
  0,                                      /* 191*/
  0,                                      /* 192*/
  0,                                      /* 193*/
  0,                                      /* 194*/
  0,                                      /* 195*/
  0,                                      /* 196*/
  0,                                      /* 197*/
  0,                                      /* 198*/
  0,                                      /* 199*/
  0,                                      /* 200*/
  0,                                      /* 201*/
  0,                                      /* 202*/
  0,                                      /* 203*/
  0,                                      /* 204*/
  0,                                      /* 205*/
  0,                                      /* 206*/
  0,                                      /* 207*/
  0,                                      /* 208*/
  0,                                      /* 209*/
  0,                                      /* 210*/
  0,                                      /* 211*/
  0,                                      /* 212*/
  0,                                      /* 213*/
  0,                                      /* 214*/
  0,                                      /* 215*/
  0,                                      /* 216*/
  0,                                      /* 217*/
  0,                                      /* 218*/
  0,                                      /* 219*/
  0,                                      /* 220*/
  0,                                      /* 221*/
  0,                                      /* 222*/
  0,                                      /* 223*/
  0,                                      /* 224*/
  0,                                      /* 225*/
  0,                                      /* 226*/
  0,                                      /* 227*/
  0,                                      /* 228*/
  0,                                      /* 229*/
  0,                                      /* 230*/
  0,                                      /* 231*/
  0,                                      /* 232*/
  0,                                      /* 233*/
  0,                                      /* 234*/
  0,                                      /* 235*/
  0,                                      /* 236*/
  0,                                      /* 237*/
  0,                                      /* 238*/
  0,                                      /* 239*/
  0,                                      /* 240*/
  0,                                      /* 241*/
  0,                                      /* 242*/
  0,                                      /* 243*/
  0,                                      /* 244*/
  0,                                      /* 245*/
  0,                                      /* 246*/
  0,                                      /* 247*/
  0,                                      /* 248*/
  0,                                      /* 249*/
  0,                                      /* 250*/
  0,                                      /* 251*/
  0,                                      /* 252*/
  0,                                      /* 253*/
  0                                       /* 254*/  
  /********* s32K144 Specific Interrupt Handlers (ENDS) ***********/
};

#pragma call_graph_root = "interrupt"
__weak void NMI_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void HardFault_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void MemManage_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void BusFault_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void UsageFault_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void SVC_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void DebugMon_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void PendSV_Handler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void SysTick_Handler( void ) { while (1) {} }

/************ s32K144 Specific Interrupts pragma *******************/
#pragma call_graph_root = "interrupt"
__weak void PORTA_IRQHandler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void PORTB_IRQHandler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void PORTC_IRQHandler (void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void PORTD_IRQHandler( void ) { while (1) {} }
#pragma call_graph_root = "interrupt"
__weak void PORTE_IRQHandler( void ) { while (1) {} }

void __cmain( void );
__weak void __iar_init_core( void );
__weak void __iar_init_vfp( void );

#pragma required=__vector_table
void __iar_program_start( void )
{
  __iar_init_core();
  __iar_init_vfp();
  __cmain();
}
