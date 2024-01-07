#include <stdio.h>
int main() {
    int a[2][2],sum[2][2];
   //igeting
    printf(" ");
    for(int i=0;i<2;i++)
    {
    
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
    }
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++){
       sum[i][j]=a[j][i];
    }
    }
    //printing
    for(int i=0;i<2;i++)
    {
    printf(" \n\n ");
    for(int j=0;j<2;j++){
    printf("%d\t",sum[i][j]);
    }
    }
}