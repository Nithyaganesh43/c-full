#include<stdio.h>
int main()
{
    int a=12,*j,g;
    g=&a;
    *j=g;
    printf("%d",*j);
}
