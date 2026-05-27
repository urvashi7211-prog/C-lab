//Print simple interest. (principal*roi*time period)/100)
#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter p,r,t:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("%f",si);
    return 0;
}