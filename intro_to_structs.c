#include <stdio.h>
#include <stdlib.h>


// Lesson on structs.
// We are going to use a struct to represent a student in our program.

// Here we are creating sort of the "Template" of our student with a struct and
// defining some variables.
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

// Making a car struct

struct Vehicle{
    char make[20];
    char model[30];
    int year;
    double milesPerGallon;
};

int main()
{

    // Here we have created a container called student1 that's going to be able to store
    // a name / major / age / gpa
    struct Student student1;

    student1.age = 29;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jordan");
    strcpy(student1.major, "Programming");

    // Creating a second instance of Student named student2
    struct Student student2;
    student2.age = 22;
    student2.gpa = 3.8;
    strcpy(student2.name, "Cory");
    strcpy(student2.major, "Computer Science");

    // Creating an instance of the vehicle struct and setting values.
    struct Vehicle vehicle1;
    strcpy(vehicle1.make, "Subaru");
    strcpy(vehicle1.model, "Impreza");
    vehicle1.year = 1994;
    vehicle1.milesPerGallon = 12.3;


    // Printing out some of the values of our newly created structs.
    printf("%f \n", student1.gpa);
    printf("\n");
    printf("%s \n", vehicle1.make);
    printf("%s \n", vehicle1.model);
    printf("%d \n", vehicle1.year);
    printf("%f \n", vehicle1.milesPerGallon);
    return 0;
}
