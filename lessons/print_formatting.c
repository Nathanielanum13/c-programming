#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float item1 = 2.20;
    float item2 = 18.99;
    float item3 = 100.40;

    printf("item 1 is GHS%-8.2f\n", item1);
    printf("item 2 is GHS%-8.2f\n", item2);
    printf("item 3 is GHS%-8.2f\n", item3);

    return 0;
}