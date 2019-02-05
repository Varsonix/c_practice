#include <stdio.h>
#include <stdlib.h>
// Lesson on functions
int main()
{
    // Calling our newly created functions three times within the main function.
    sayHi("Jordan");
    sayHi("Ralph");
    sayHi("Oscar");
    sayHello("Jordan", 29);
    sayHello("Ryan", 35);
    sayHello("Cory", 28);
    return 0;
}

// Creating a function that says Hello User.
// In order to use this function we have to call it within the main() function.
// The function will take an 'argument' of a char string.
void sayHi(char userName[])
{
    printf("Hello %s \n", userName);
}

// A function that takes a string and an integer to print out our name and age.
void sayHello(char name[], int age)
{
    printf("Hello %s. You are %d. \n", name, age);
}
