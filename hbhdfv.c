#include <stdio.h>
int main() {
    int a,*b,*c;
    a=10;
    b=&a;
c=&b;
    printf("\n%d",*c);

    return 0;
}
