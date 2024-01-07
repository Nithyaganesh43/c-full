#include <stdio.h>

int main() {
    int sum,a[3][3]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<9;i++){
    sum=sum+a[i][i];}
    printf("%d",sum);
}

