#include <stdio.h>
#include <stlib.h>

int main ()
{

    /* Basic variable types */
    int myNum = 1;
    float myFloat = 1.0;
    double myDouble = 1.00000;
    char myChar = 'a';
    char myString[] = "String";
    
    /* printf and format specifiers to display previously declared variables */
    printf ("Hello, world! \n");
    printf ("My number is %d \n", myNum);
    printf ("My float is %f \n", myFloat);
    printf ("My double is %lf \n", myDouble);
    printf ("My char is %c \n", myChar);
    printf ("My string is %s \n", myString);
    
    return 0;
}
