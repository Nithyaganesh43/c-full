#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,a,b;
    a=5;
    p=(int*)calloc(0,sizeof(int));
   for(int i=0;i<a;i++){
        printf("enter the value");
        scanf("%d",p+i);
    }
    for(int i=0;i<a;i++){
        printf("%d\n",*(p+i));
    }
}