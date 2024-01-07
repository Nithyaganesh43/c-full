#include<stdio.h>
int *f();
int main(){
    
int *p=f();
printf("%u\n'",p);
}
int *f(){
   int *j;
    *j=10;
    return j;
}