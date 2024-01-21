#include <stdio.h>
#include <stdlib.h>
int main(){

int *a,*b,*k,*p;
int c=0;
a=&c;
p=&a;
b=*p;
k=*b;
printf("%d\n",*k);
}
