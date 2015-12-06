 /* Header file Library for send data through USART AVR	*/

/*                  ***** Intructions ******
To use this library you must initilize in you header project by the function: usart_init();

Then you can to use five functions as follow: */

put_float(variable);        // Send float data
put_string(" ");            // Send character space
put_int(variable);          // Send int data
put_string(" ");
put_long(variable);         // Send long data
put_string("\n");			// Send newline character

void get_float(void);			// Rx float data
void get_int(void);				// Rx int data

Also you should define the CPU frequency for your board and the baud
rate in this code and in your Terminal Window of Atmel Studio 6 project.

For further information contact with me please. julome21@gmail.com
************************************/

#ifndef _usart_h_
#define _usart_h_

#ifndef F_CPU 
#define F_CPU 16000000UL		// Define Clock AVR
#endif

#define USART_BAUD	57600UL		// Define Baud rate

// Functions definitions
void usart_init(void);			// Initialize USART
int put_char(int);	// Tx character char
void put_string (char*);		// Tx string data
void put_int(int);				// Tx integer data
void put_long(long);			// Tx long data
void put_float(float);			// Tx float data

int get_char(void);				// Rx char data
float get_float(void);			// Rx float data
int get_int(void);				// Rx int data

#endif
