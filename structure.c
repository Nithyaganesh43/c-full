#include<stdio.h>
struct 
{
    int roll;
    int name[20];
}s1={10},s2={20};
int main(){
int *a,*b;
a=&s1.roll;
b=&s2.roll;
printf("%ds1 %d \n %ds2 %d ",a,*a,b,*b);
}