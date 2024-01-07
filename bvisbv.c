#include<stdio.h>
int i=0;
int main(){
    printf("*****\n");
    if(i<4){
            i++;
       main(i);
    }
}
