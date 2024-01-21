#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];
    int (*p)[5]=&a;
    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++){
        
            scanf("%d \n \t ",&p[i]);
    }
    for(int i=0;i<size+1;i++){
            printf("output \t%d  ",*p[i]);
    }

}

