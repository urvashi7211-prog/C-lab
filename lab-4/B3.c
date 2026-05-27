//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
int main(){
    float f,c;
    printf("Enter f:");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("%f",c);
    return 0;
}