//Print area of circle. (pie*r*r) 
#include<stdio.h>
int main(){
    float r,pie=3.14,area;
    printf("Enter r:");
    scanf("%f",&r);
    area=pie*r*r;
    printf("%f",area);
    return 0;
}