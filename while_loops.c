#include <stdio.h>
#include <stdlib.h>


// While loops lesson
int main()
{
    int index = 6;
    // Creating while loop while index is less than or equal to 5
    // and will print the value of index each time.
    while (index <= 5){
        printf("%d \n", index);
        // index = index + 1;
        index++;
    }

    // A do while loop in case you need to run the code at least once.
    do {
        printf("%d \n", index);
        // index = index + 1;
        index++;
    } while (index <= 5);

    return 0;
}
