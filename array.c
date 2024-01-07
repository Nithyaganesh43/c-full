#include <stdio.h>
int main() {
    int a[2][2],sum[2]={0,0};
   //geting
    printf(" ");
    for(int i=0;i<2;i++)
    {
    
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
    }
    //working
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++){
    sum[i]=sum[i]+a[j][i];
    }
    }
    //printing
    for(int i=0;i<2;i++)
    {
    printf(" \n\n ");{
    printf("%d\t",sum[i]);
    }
    }
}