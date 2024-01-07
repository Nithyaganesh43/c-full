#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int eArr[n], oArr[n];
    int eC = 0;
    int oC = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            eArr[eC] = a[i];
            eC++;
        } else {
            oArr[oC] = a[i];
            oC++;
        }
    }
    printf("Even numbers: ");
    for (int i = 0; i < eC; i++) {
        printf("%d ", eArr[i]);
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < oC; i++) {
        printf("%d ", oArr[i]);
    }
    return 0;
}
