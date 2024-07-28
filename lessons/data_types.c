#include <stdio.h>
#include <stdbool.h>

int main() {
    
    char name[] = "Nathaniel Anum Adjah";
    int age = 25;
    char grade = 'B';
    float CWA = 2.85;
    bool isMale = true;
    unsigned char value = 100;

    printf("My name is %s, I am %d years old, During my university, my average grade was %c and my CWA was %-8.2f. I'm a \"male\"? %d\n", name, age, grade, CWA, isMale);

    printf("%c\n", value);

    return 0;
}