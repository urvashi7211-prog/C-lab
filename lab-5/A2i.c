//Swap two numbers. (Using temporary variable) 

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a,b:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}