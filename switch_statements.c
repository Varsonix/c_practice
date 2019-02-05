#include <stdio.h>
#include <stdlib.h>


// Lesson on switch cases, similar to if/else statements.
int main()
{
    // Declaring grade variable
    char grade;

    // Having the user input the grade (To test the case)
    printf("Please input your grade: ");
    scanf(" %c", &grade);
    // Our switch statement, which will check the variable grade against 6 cases.
    // and will execute code depending on what case it comes out as.
    switch(grade){
    case 'A' :
        printf("You did great!");
        break;
    case 'B' :
        printf("You did alright!");
        break;
    case 'C' :
        printf("You did poorly.");
        break;
    case 'D' :
        printf("You did very bad.");
        break;
    case 'F' :
        printf("You failed!");
        break;
    case 'E':
        printf("What are you even doing?!");
        break;
    default :
        printf("Invalid Grade.");
        break;

    }

    return 0;
}
