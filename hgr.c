#include<stdio.h>
int main()
{
    long int a=1234567890;
    long int num[11];
    for(int i=0;i<12;i++){
        num[i]=a%10;
        a=a/10;
    }
    for(int j=9;j>-1;j--){
        printf("%ld",num[j]);
    }

}

