#include <stdio.h>
int main() {
   int a[10],b[10],c[10];
   for(int i=0;i<5;i++){
    printf("enter the %dth element of 1st array ",i+1);
   scanf("%d",&a[i]);
   }
   
   for(int i=0;i<5;i++){
    
    printf("enter the %dth element of 2nd array ",i+1);
   scanf("%d",&b[i]);
   }
   for(int i=0;i<5;i++){
c[i]=a[i]+b[i];
   }
     for(int i=0;i<5;i++)
   printf("enter the %dth element of array sum is %d\n ",i+1,c[i]);
    return 0;
}