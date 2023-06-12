#include<stdio.h>
#include<string.h>
#define MAX 500
int t[MAX];
void shifttable(char p[])
{
int i,j,m;
m=strlen(p);
for(i=0;i<MAX;i++)
t[i]=m;
for(j=0;j<m-1;j++)
t[p[j]]=m-1-j;
}
int horspool(char src[],char p[])
{
int i,k,m,n;
n=strlen(src);
m=strlen(p);
printf("\n length of text =%d",n);
printf("\n length of pattern =%d",m);
i=m-1;
while(i<n)
 {
k=0;
while((k<m)&&(p[m-1-k]==src[i-k]))
k++;
if(k==m)
return(i-m+1);
else
i+=t[src[i]];
 }
return -1;
}
void main()
{
char src[100],p[100];
int pos;
printf("enter the text which pattern is to be searched:\n");
gets(src);
printf("enter the pattern to be searched:\n");
gets(p);
shifttable(p);
pos = horspool(src,p);
if(pos>=0)
printf("\n the desired pattern was found from position %d",pos+1);
else
printf("\n the pattern was not found in the given text\n");
}