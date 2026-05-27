//Multiply and divide a number by 2 without using multiplication/division operator. 

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiply by 2 = %d\n", num << 1);
    printf("Divide by 2 = %d\n", num >> 1);

    return 0;
}