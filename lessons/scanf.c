#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    
    const int NAME_SIZE = 30;
    char name[NAME_SIZE];
    int age;
    char gender;

    printf("What is your name? ");
    fgets(name, NAME_SIZE, stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("\nWhat's your gender? M or F? ");
    scanf(" %c", &gender);

    printf("\n\n\n");

    printf("===============\n");
    printf("   ABOUT YOU   \n");
    printf("===============\n");

    printf("\n");

    const char* translateGender = (gender == 'M') ? "Male" : "Female";

    printf("My name is %s, I am %d years old and I am a %s", name, age, translateGender);


    printf("\n\n\n");

    return 0;
}