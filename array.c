#include <stdio.h>
int main() {
   int a[10],o=0,e=0;
   for(int i=0;i<10;i++){
    
   scanf("%d",&a[i]);
   }
   for(int i=0;i<10;i++){
    if(a[i]%2==0){
        e++;
    }
    else{
        o++;
    }
   }
   printf("%do   %de",o,e);
    return 0;
}