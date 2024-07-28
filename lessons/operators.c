#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int num1 = 9;
    int num2 = 4;
    num1 = num1 + 1;

    num1+=2;
    num1-=3;
    num1/=3;

    num1%=5;
    num1*=15;

    printf("The value is %d \n", num1);
    // printf("The value is %d \n", num1 % num2);


    printf("\n\n\n");

    return 0;
}