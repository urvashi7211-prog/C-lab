//Print area of triangle. ((height*base)/2)
#include<stdio.h>
int main(){
    float h,b,area;
    printf("Enter h,b:");
    scanf("%f %f",&h,&b);
    area=(h*b)/2;
    printf("%f",area);
    return 0;

}