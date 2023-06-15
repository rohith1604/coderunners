#include <LPC21xx.h> 
signed int delay, count=0, Switchcount=0; 
unsigned int Disp[10]={0x003F0000, 0x00060000, 0x005B0000, 0x004F0000, 0x00660000,0x006D0000,0x007D0000, 
0x00070000, 0x007F0000, 0x006F0000 }; 
#define ALLDISP 0x10000000 
int main (void) 
{ 
 PINSEL0 = 0x00000000; 
 IO0DIR = 0xF0FF0000; 
 IO0SET |= ALLDISP; 
 while(1) 
 { 
 for(Switchcount=0;Switchcount<=9;Switchcount++) 
 { 
 IO0CLR = 0x00FF0000; 
 for(delay=0;delay<100;delay++) 
 IO0SET = Disp[Switchcount]; 
 for(delay=0;delay<1000000;delay++) 
 {} 
 } 
 for(Switchcount=9;Switchcount>=0;Switchcount--) 
 { 
 
 IO0CLR = 0x00FF0000; 
 for(delay=0;delay<100;delay++) 
 IO0SET = Disp[Switchcount]; 
 for(delay=0;delay<1000000;delay++)
 {}
 }
 }
}