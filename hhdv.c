#include<stdio.h>
int main(){
    int a,*b;
    scanf("%d",&a);
    b=&a;
    printf("%d\n",b);
    b=b+15;
    printf("%d\n",*b);
    }


