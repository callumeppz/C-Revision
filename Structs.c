#include <stdio.h>

typedef struct newStruct
{
    double salary;
    int age;
} newsruct;


int main() {
    struct newStruct newStruct1 = {.age = 20, .salary = 43.4}; // quicker way to assign
    newsruct newStruct2;



    newStruct2.age = 12;
    newStruct2.salary = 12.5;

    printf ("Age of person:  %d", newStruct1.age);
    printf ("\nSalary of person:  %.2lf", newStruct1.salary);

    printf ("\nAge of person2:  %d", newStruct2.age);
    printf ("\nSalary of person2:  %.2lf", newStruct2.salary);

}