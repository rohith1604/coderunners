#include<LPC21XX.h>
int count=0,sinevalue,value; 
unsigned char sine_tab[49]= 
{0x80,0x90,0xA1,0xB1,0xC0,0xCD,0xDA,0xE5,0xEE,0xF6,0xFB,0xFE,0xFF,0xFE,0xFB,0xF6,0xEE,0xE5,0xDA,0xCD,0xC0,0xB1,0xA1,0x90,0x80,0x70,0x5F,0x4F,0x40,0x33,0x26,0x1B,0x12,0x0A,0x05,0x02,0x00,0x02,0x05,0x0A,0x12,0x1B,0x26,0x26,0x33,0x4F,0x5F,0x70,0x80}; 
int main(void) 
{ 
PINSEL0=0x00000000; 
IO0DIR = 0x00FF0000; 
Ccount=0; 
While(1) 
{ 
for(count=0;count<48;count++) 
{ 
 sinevalue=sine_tab[count]; 
 value= 0x00FF0000&(sinevalue<<16); 
 IO0PIN=value; 
} 
} 
} 
//square wave//
#include<LPC21XX.h> 
void delay(void); 
int main() 
{ 
 PINSEL0 = 0x00000000; 
PINSEL1 = 0x00000000; 
 IO0DIR = 0x00FF0000; 
 While(1) 
 { 
 IO0PIN = 0x00000000; 
 delay(); 
 IO0PIN = 0x00FF0000; 
 delay(); 
 } 
} 
Void delay(void) 
{ 
 unsigned int i=0; 
 for(i=0;i<=95000;i++); 
} 
//trianglewave//
#include<LPC21XX.h> 
int main() 
{ 
 unsigned long int temp = 0x00000000; 
unsigned int i=0; 
IO0DIR=0x00FF0000; 
while(1) 
{ 
 for(i=0;i!=0xFF;i++) 
 { 
 temp= i; 
 temp = temp<<16; 
 IO0PIN = temp; 
 } 
for(i=0xFF;i!=0;i--) 
 { 
 temp= i; 
 temp = temp<<16; 
 IO0PIN = temp; 
 } 
} 
} 