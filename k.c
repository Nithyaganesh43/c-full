#include<stdio.h>
#include<math.h>
int main()
{
int num1,num,rev=0,num2;
scanf("%d",&num);
num1=num;
num2=num;
for (num;num>0;num=num/10){
    rev=rev+num1%10;
    num1=num1/10;
    rev=rev*10;
}
    printf("\n revers %d",rev/10);
if(num2==(rev/10)){
        printf("\npalindrome");}
else{printf("\nnot palindrome");}
}
