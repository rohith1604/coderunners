#include<stdio.h>
#include<stdlib.h>
#int max,min;
int a[100];
void maxmin(int i,int j){
    int max1,min1,mid;
    if(i==j){
        max=min=a[i];
    }else{
        if(i==j-1){
            if(a[i]<a[j]){
                max=a[j];
                min=a[i];
            }else{
                max=a[i];
                min=a[j];
            }
        }else[
            mid=(i+j)/2;
            maxmin(i,mid);
            max1=max;
            min1=min;
            maxmin(mid+1,j);
            if(max<max1)
            max=max1;
            if(min<min1)
            min=min1;
        ]
    }
}
void main(){
    int i, num;
    printf("\n enter the total number of numners");
    scanf("%d",&num);
    printf("\n enter the number");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[10];
    min=a[10];
    maxmin(1,num);
    printf("minimum number in the arrays is%d",min);
    printf("maximum number in the arrays is%d",max);
    return 0;
}