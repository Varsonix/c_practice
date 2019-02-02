#include <stdio.h>
#include <stdlib.h>

// Checks user input and prints a message depending on whether the number input is even or odd.
int main()
{
    /* Lesson on scanf (short idea of pointers, but not there yet) */
    printf("Enter your age: ");
    /* Declaring userAge variable before scanning to it. */
    int userAge;
    /* Allow user to input information and store it in userAge */
    scanf("%d", &userAge);
    /* Print back out the variable */
    printf("You are %d years old.\n", userAge);

    /* Same lesson, but for characters / strings */
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is: %c", grade);

    /* Same lesson, but for doubles / floats */
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is: %lf \n", gpa);

    /* Mini tutorial on using fgets() instead of scanf for a string */
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);


    return 0;
}
