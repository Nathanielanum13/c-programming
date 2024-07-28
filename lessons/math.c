#include <stdio.h>
#include <math.h>

int main() {
    
    int value;
    float fValue;
    int option;
    int exponent;

    printf("Welcome to Math Lab!!\n---------------------\n");
    printf("1. Square root a number\n");
    printf("2. Raise a number to another number\n");
    printf("3. Find the cosine of a given number\n");
    printf("4. Find the tagent of a given number\n");
    printf("5. Find the sine of a given number\n");
    printf("6. Round up a number\n");
    printf("7. Round down a number\n");

    printf("\nSelect an option from (1-7) to proceed? ");
    scanf("%d", &option);

    if (option > 7 || option < 1 ) {
        printf("Exiting program due to invalid input\n\n");
        return 1;
    }

    if (option == 1) {
        printf("\nEnter value to square root? ");
        scanf("%d", &value);

        double tempValue = (double) value;

        printf("The output is %lf\n", sqrt(tempValue));
    }

    if (option == 2) {
        printf("\nEnter base number? ");
        scanf("%d", &value);

        printf("\nEnter exponent or power? ");
        scanf("%d", &exponent);

        double tempValue = (double) value;
        double tempExponent = (double) exponent;

        printf("The output is %lf\n", pow(tempValue, tempExponent));
    }

    if (option == 3) {
        printf("\nEnter value to convert(COS)? ");
        scanf("%d", &value);

        double tempValue = (double) value;

        printf("The output is %lf\n", cos(tempValue));
    }

    if (option == 4) {
        printf("\nEnter value to convert(TAN)? ");
        scanf("%d", &value);

        double tempValue = (double) value;

        printf("The output is %lf\n", tan(tempValue));
    }

    if (option == 5) {
        printf("\nEnter value to convert(SIN)? ");
        scanf("%d", &value);

        double tempValue = (double) value;

        printf("The output is %lf\n", sin(tempValue));
    }

    if (option == 6) {
        printf("\nEnter value to round up? ");
        scanf("%f", &fValue);

        printf("The output is %lf\n", ceil(fValue));
    }

    if (option == 7) {
        printf("\nEnter value to round down? ");
        scanf("%f", &fValue);

        printf("The output is %lf\n", floor(fValue));
    }



    printf("\n\n\n");

    return 0;
}