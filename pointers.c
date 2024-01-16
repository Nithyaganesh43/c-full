#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a,b[5]={1,2,3,4,5};
    a=&b;
for(int i=0;i<5;i++){
   *a=5; 
printf("v%d\n a%d\n\n",*a,a);

a=a+1;
}
}