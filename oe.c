#include<stdio.h>
#include<stdlib.h>
int main(){
int *p;
p=(int*)malloc(5*sizeof(int));
*p=5;
printf("%d",p);
free(p);
}
//1f1598