#include<stdio.h>
void assignValues(int m, int n, int arr[m][n]) {
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
arr[i][j] = i + j;
}
}
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
printf("%3d", arr[i][j]);
}

printf("\n");
}
}
int main(void) {
int m = 5, n = 5;
int arr[m][n];
assignValues(m, n, arr);
return 0;
}