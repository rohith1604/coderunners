void setup() 
{ 
 pinMode(2,OUTPUT) 
 pinMode(3,INPUT) 
} 
void loop() 
{ 
 if(digitalRead(2)==HIGH) 
 { 
 digitalWrite(3,HIGH); 
 delay(100); 
 digitalWrite(3,LOW); 
 delay(100); 
 } 
} 
//13
void setup() 
{ 
 pinMode(8,OUTPUT); 
 pinMode(9,OUTPUT); 
 pinMode(10,OUTPUT); 
} 
void loop() 
{ 
 digitalWrite(8,HIGH); 
 digitalWrite(9,LOW); 
 digitalWrite(10,LOW); 
 delay(100); 
 digitalWrite(9,HIGH); 
 digitalWrite(8,LOW); 
 digitalWrite(10,LOW); 
 dealy(100); 
 digitalWrite(10,HIGH); 
 digitalWrite(8,LOW); 
 digitalWrite(9,LOW); 
 delay(100); 
} 

//14
#include <lpc214x.h> 
void uart_interrupt(void)__irq; 
unsigned char temp; 
unsigned char rx_flag=0,tx_flag=0; 
int main(void) 
{ 
 PINSEL0=0X0000005; / 
IODIR1 = 0X00ff0000; 
 
 U0LCR = 0X00000083; 
 U0DLM = 0X00; 
 U0DLL = 0x13; 
 U0LCR = 0X00000003; 
 U0IER = 0X03; 
 VICVectAddr0 = (unsigned long)uart_interrupt; 
 VICVectCntl0 = 0x20|6; 
 VICIntEnable = 0x00000040; 
 
 rx_flag = 0x00; 
 tx_flag = 0x00; 
 while(1) 
 { 
 while(rx_flag == 0x00); 
 rx_flag = 0x00; 
 while(tx_flag == 0x00); 
 tx_flag = 0x00; 
 } 
} 
// Do this forever 
void uart_interrupt(void)__irq 
{ 
 temp = U0IIR; 
 temp = temp & 0x06; 
 if(temp == 0x02) 
 { 
 tx_flag = 0xff; 
 VICVectAddr=0; 
 } 
 else if(temp == 0x04) 
 { 
 U0THR = U0RBR; 
 rx_flag = 0xff; 
 VICVectAddr=0; 
 } 
} 
//15
//15. Rain indicator using rain sensor and water resource 
void setup() 
{ 
 pinMode(12,INPUT); 
 pinMode(13,OUTPUT); 
} 
Void loop() 
{ 
 if(digitalRead(12)==LOW) 
 { 
 digitalWrite(13,HIGH); 
 delay(100); 
 digitalWrite(13,LOW); 
 delay(500); 
} 
}
