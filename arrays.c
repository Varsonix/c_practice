#include <stdio.h>
#include <stdlib.h>


/* Lesson on Arrays / Variables */
int main()
{

    // Creating an array variable (int) with 6 numbers in it (indexes 0 - 5)
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    // Creating a variable with 10 index capacity.
    int luckyNum[10];
    luckyNum[0] = 80;
    luckyNum[1] = 50;
    luckyNum[2] = 99;
    printf ("%d \n", luckyNum[2]);
    // Printing an undefined index
    printf ("%d \n", luckyNum[8]);
    //                   {0, 1,  2,  3,  4,  5}
    // Modifying an index within the array variable.
    luckyNumbers[1] = 200;
    printf ("%d", luckyNumbers[1]);

    // Creating a character array (string-ish)
    char phrase[20] = "Array";

    return 0;
}
