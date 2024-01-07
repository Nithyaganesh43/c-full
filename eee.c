#include<stdio.h>
int main()
{
int v=1;
test(v);}
int test(int v){
    printf("%d\n",v);
    if(v<=4)
        {test(++v);}
    printf("%d\n",v);
}

