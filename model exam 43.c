#include<stdio.h>
float areaofc(float *r){
    float area=(*r)*(*r)*1.34;
    return area;

}
int main(){
    float area,r;
    printf("Enter radius");
    scanf("%f",&r);
    area = areaofc(&r);
    printf("area of circle is :%.2f",area);

}

