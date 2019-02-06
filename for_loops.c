#include <stdio.h>
#include <stdlib.h>

/*
Lesson: Basic for loop structure and looping through an array.
*/

int main()
{

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    int i;
    for(int i = 0; i < 6; i++){

        printf("You are at index %d of the array. \n", i);
        printf("%d \n", luckyNumbers[i]);
    }

    return 0;
}
