#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);

    scanf("%s",&c);

    scanf("%d",&b);
    switch(c){
    case '+':
        printf("sum=%d",a+b);
        break;
    case '-':
        printf("difference=%d",a-b);
        break;
    case '*':
        printf("product=%d",a*b);
        break;
    case '/':
        printf("div=%d",a/b);
        break;


    }

}
