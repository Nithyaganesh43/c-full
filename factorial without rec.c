#include<stdio.h>
int main()
{
    int n,ans=1,i;
    scanf("%d",&n);
    fact(n);
     }
int fact(int n){
    int m=1;
    m=m*n;
    n--;
    if(n>0){
    fact(n);}
    printf("%d",m);
}
