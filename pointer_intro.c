#include <stdio.h>
#include <stdlib.h>

// Learning about pointers.

int main()
{
    // Integer variable, storing and integer value of 30;
    int age = 30;
    // Double variable, storing a double value of 3.4;
    double gpa = 3.4;
    // Char variable, storing a char value of A;
    char grade = 'A';
    // Pointer variable, storing a pointer value of ;
    // Storing a memory address, which I don't know off the top of my head.
    // Store the memory address of another variable inside my program.
    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;

    // Printing our new pointer variables.
    printf("Addresses: \n Age: %p\n gpa: %p\n grade: %p\n", pAge, pGpa, pGrade);

    // Printing age's memory address
    printf("Age's memory address: %p\n", &age);
    return 0;
}
