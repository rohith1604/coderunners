#include<stdio.h>
#include<conio.h>
#include<time.h>
Void heapsort(int a[],int n)
{
inti,temp;
heapfun(a,n);
for(i=n-1;i>=0;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
heapfun(a,i);
}
}
heapfun(int a[],int n)
{
intp,c,k,key;
for(k=0;k<n;k++)
 {
key=a[k];
 c=k;
 p=(c-1)/2;
while(c>0&&key>a[p])
 {
a[c]=a[p];
 c=p;
 p=(c-1)/2;
 }
a[c]=key;
 }
return;
}
void main()
{
int a[40],i,n;
clock_tstart,end;
float t;
clrscr();
printf("enter the no of elements\n");
scanf("%d",&n);
printf("elements are\n");
for(i=0;i<n;i++)
 {
a[i]=rand()%100;
 }
printf("randomly selected elements are\n");
for(i=0;i<n;i++)
 {
printf("%d\n",a[i]);
 }
start=clock();
delay(100);
for(i=0;i<n;i++)
 {
heapsort(a,n-i);
 }
end=clock();
t=(end-start)/CLK_TCK;
printf("sorted array is\n");
for(i=0;i<n;i++)
 {
printf("%d\n",a[i]);
 }
printf("time complexity is %f",t);
}
