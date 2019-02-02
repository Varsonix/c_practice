#include <stdio.h>
#include <stdlib.h>

int main()
{

/* Mad libs lesson. taking input which will be injected into a story for comical results */

    // Creating variables to store future strings.
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    // Prompting and taking input from user for the 3 variables.
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;

}
