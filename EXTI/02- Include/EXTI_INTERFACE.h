
#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

/////////////////////////External Interrupt Modes

#define RISING_EDGE    0
#define FALLING_EDGE   1
#define ON_CHANGE      2


//////////////////////////Ports

#define PORTA           0
#define PORTB           1
#define PORTC           2

//////////////////External Interrupt Lines

#define EXTI_LINE0  0
#define EXTI_LINE1  1
#define EXTI_LINE2  2
#define EXTI_LINE3  3

#define EXTI_LINE4  4
#define EXTI_LINE5  5
#define EXTI_LINE6  6
#define EXTI_LINE7  7

#define EXTI_LINE8  8
#define EXTI_LINE9  9
#define EXTI_LINE10 10
#define EXTI_LINE11 11

#define EXTI_LINE12 12
#define EXTI_LINE13 13
#define EXTI_LINE14 14
#define EXTI_LINE15 15


/////////////////////////External Interrupt Numbers


#define EXTI0IRQn     6
#define EXTI1IRQn     7
#define EXTI2IRQn     8
#define EXTI3IRQn     9
#define EXTI4IRQn     10

#define EXTI5IRQn     23
#define EXTI6IRQn     23
#define EXTI7IRQn     23
#define EXTI8IRQn     23
#define EXTI9IRQn     23

#define EXTI10IRQn    40
#define EXTI11IRQn    40
#define EXTI12IRQn    40
#define EXTI13IRQn    40
#define EXTI14IRQn    40
#define EXTI15IRQn    40


/////////////////////////////Functions Decleration


void EXTI_VidInit( u8 Copy_EXTILine , u8 Copy_u8EXTIMode );

void EXTI_VidEnableEXTI( u8 LOC_u8EXTILine);

void EXTI_VidDisableEXTI( u8 LOC_u8EXTILine);

void EXTI_VidSoftWareTrigger( u8 LOC_u8EXTILine);


/////////////////////////////////////////////CallBack Functions Declerations

void EXTI0_VidSetCallBack( void (*ptr) (void) );

#endif /* EXTI_INTERFACE_H_ */
