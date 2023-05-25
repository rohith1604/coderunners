#include<LPC21XX.h> 
void clockwise(void); 
void anticlockwise(void); 
unsigned long int v1,v2; 
unsigned int i=0;j=0,k=0; 
int main(void) 
{ 
 PINSEL0 = 0x00FFFFFF; 
 IO0DIR = 0x0000F000; 
 while(1) 
 { 
 for(j=0;j<50;j++); 
 clockwise(); 
 for(k=0;k<6500;k++); 
 for(j=0;j<50;j++); 
 anticlockwise(); 
 for(k=0;k<6500;k++); 
 } 
} 
void clockwise(void); 
{ 
 v1= 0x00000800; 
 for(i=0;i<=3;i++) 
 { 
 v1=v1<<1; 
 v2 = v1; 
 v2 = v2 & 0x0000F000; 
 IO0PIN = v2; 
 for(k=0;k<3000;k++); 
 } 
 } 
void anticlockwise(void); 
{ 
 v1= 0x00010000; 
 for(i=0;i<=3;i++) 
 { 
 v1=v1>>1; 
 v2 = v1; 
 v2 = v2 & 0x0000F000; 
 IO0PIN = v2; 
 for(k=0;k<3000;k++); 
 } 
 }