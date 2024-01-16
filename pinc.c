#include<stdio.h>
void sum1(int);
int main(){
    printf("Enter how many sets you need to add");
    int n;
sum1(n);
}
void sum1(int n){
    
    scanf("%d",&n);
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        printf("sum is %d",a+b);
    }
}