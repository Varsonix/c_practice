#include <stdio.h>
#include <stdlib.h>

// Prototyping the function (lesson)
double cube(double num);



int main()
{
    // Printing out the call of the cube(3.0) function
    // Expected output: 27.00000
    printf("Answer: %f", cube(3.0));
    return 0;
}

// Lesson on return statements
double cube(double num)
{
    double result = num * num * num;
    // Return will break us out of the function and return this value back
    // Anything placed under this wouldn't work because the function has been broken out of
    // at this point.
    return result;
    // you could also return num * num * num instead of the variable
}
