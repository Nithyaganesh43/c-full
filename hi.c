#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g=0;
printf("enter");
scanf("%d%d%d",&a,&b,&c);
d=a>b&&a>c;
e=b>a&&b>c;
f=c>b&&c>a;
if(d==1)
    g+=1;
if(e==1)
    g+=2;
if(f==1);
    g+=3;
printf("%d",g);
switch(g)
{


    case 1:
        printf("%d is big",a);
    case 2:
        printf("%d is big",b);
    case 3:
        printf("%d is big",c);
    }}
