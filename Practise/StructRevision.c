#include <stdio.h>

typedef struct StructRevision
{
    double real;
    double imagine;
}StructRevision;

int main() {

    StructRevision c1 = {.real = 20.3, .imagine = 43.22};
    StructRevision c2 = {.real = 10.2, .imagine = 20.42};
    StructRevision c3 = {.real = 60.6, .imagine = 4.52};
    StructRevision sum;

    sum.real = c1.real - c2.real - c3.real;
    sum.imagine = c1.imagine - c2.imagine - c3.imagine;

    printf ("%.2lf and %.2lf", sum.real, sum.imagine);

}
