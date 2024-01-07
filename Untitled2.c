#include<stdio.h>
int main()
{
    char a[10];
    int g;
printf("enter");
scanf("%s",&a);
printf("%s",a);
{if(("jan"||"mar"||"may"||"jul"||"nov"||"aug")==a)
    g=1;
else if(("apr"||"jun"||"sep"||"dec")==a)
    g=2;
else if(a==("feb"))
    g=3;}
switch(g)
{
    case 1:
        printf("has  31 days");
        break;
    case 2:
        printf("has 30 days");
        break;
    case 3:
        printf("has 29 days");
        break;
    }}
