/*
 * APP.c
 *
 * Created: 9/23/2021 1:49:01 AM
 *  Author: Mohamed El-Kholy
 */ 

#include "APP.h"

 /* Global Array Holds the String Received */
 u8 global_u8Array[10] ;
 
 
void APP_voidInit(void)
{
	/* Initialize USART */
	  MUSART_voidUsartInit();
}
void APP_voidUpdate(void)
{
	/* Receive The Incoming String */
	MUSART_voidUsartReceiveString(global_u8Array);
	/* Resend The Incoming String */
	MUSART_voidUsartSendString(global_u8Array);
}