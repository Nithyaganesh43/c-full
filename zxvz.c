#include<stdio.h>
int main(){
char s[5];
scanf("%s",s);
if(s[0]>65 && s[0]<92){

int c = strlwr(s);

printf("\nopposit case is%s",c);
}
else{
int c = strupr(s);
printf("\nopposit case is%s",c);
}
}
