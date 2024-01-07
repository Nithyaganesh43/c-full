#include <stdio.h>
int main(){
int n;
    printf("Enter a number: ");
    scanf("%d", &n);
if (n % 2 != 0) {
        printf("strawberry\n");
    } else {
        if (n >= 2 && n <= 5) {
            printf("mango\n");
        } else if (n >= 6 && n <= 20) {
            printf("strawberry\n");
        } else {
            printf("mango\n");
        }
    }

    return 0;
}
