#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* 
    
    // My method, crafted from prior experience in python / javascript
    // (sightread guess to the lesson) 
    // Just taking a stab at trying this before the lesson went over how we would want to go about 
    // this. 
    
    int numOne;
    int numTwo;
    int numTotal;

    printf("Please enter a number: \n");
    scanf("%d", &numOne);
    printf("Please enter another number: \n");
    scanf("%d", &numTwo);

    numTotal = numOne + numTwo;
    printf("The sum of %d and %d is: %d \n", numOne, numTwo, numTotal);
    return 0;
    */

    /*The lesson's method */
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %.3lf", num1 + num2);

    /* Looks like we were on the same track, I just added an extra variable out of habit.
    I could have easily just added the two variables together within the printf statement. */
    
    return 0;
}
