#include<LPC21XX.h> 
 unsigned int delay,i,k; 
 int main(void) 
{ 
IO0DIR = 0x00FF0000; 
while(1) 
{ 
k= 0x00010000; 
for(i=0;i<8;i++) 
{ 
IO0SET=0x00FF0000; 
for(delay=0;delay<50000;delay++); 
IO0CLR = k; 
for(delay=0;delay<50000;delay++); 
k=k<<1; 
} 
} 
/////

#include<LPC21XX.h> 
 unsigned int delay,i,k; 
 int main(void) 
{ 
IO0DIR = 0x00FF0000; 
while(1) 
{ 
k= 0x00010000; 
for(i=0;i<8;i++) 
{ 
IO0SET=0x00FF0000; 
for(delay=0;delay<50000;delay++); 
IO0CLR = k; 
for(delay=0;delay<50000;delay++); 
k=(k<<1)|k; 
} 
} 