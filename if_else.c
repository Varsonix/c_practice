#include <stdio.h>
#include <stdlib.h>

// Lesson on if-else statements.

int max(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int superMax(int num1, int num2, int num3){
    int result;

    if (num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else{
        result = num3;
    }

    return result;
}
/* same function but using a variable instead of just returning
int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}
*/

int main()
{
    printf("%d \n", max(2, 1));
    printf("%d \n", max(1, 4));
    printf("\n");
    printf("%d \n", superMax(7, 3, 5));

    // additional ways to do if statements.
    if(3 > 2 || 2 > 5){
        // Will check if either 3 > 2 OR 2 > 5
        printf("True.");
    } else {
        printf("False.");
    }

    if(3 <= 2 && 5 >= 5){
        printf("True.");
    } else {
        printf("False.");
    }

    if (!(3 > 2)){
        printf("True.");
    } else {
        printf("False.");
    }
    return 0;
}
