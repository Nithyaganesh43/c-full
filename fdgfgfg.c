#include <stdio.h>

    int a,b=0,c;
int factorial(int n) {
    while(n>0){
    a=n%10;
    b=b*10+a;
    n=n/10;}
    return b;

}

int main() {
    int num;
    int fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
        fact = factorial(num);
        printf("reverse of %d = %d\n", num, fact);

    return 0;
}
