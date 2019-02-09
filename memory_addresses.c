#include <stdio.h>
#include <stdlib.h>

// Memory Addresses

int main()
{
    // Creating three variables for the lesson.
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';


    // Printing them with the %p format specifier
    // Printing a pointer that references the address to which the pointer refers.
    printf("%p \n%p \n%p \n", &age, &gpa, &grade);

    // Output:

    // 0060FF0C
    // 0060FF00
    // 0060FEFF

    return 0;
}
