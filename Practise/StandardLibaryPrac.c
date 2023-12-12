#include <stdio.h>
#include <math.h>

/* A script that computes the result of a number raised to the power of
the square root of a number */

int test;

int main() {

    printf ("Please Enter A Number: ");
    scanf ("%d", &test);

    printf ("\nSquare Root of That Number: %lf ", sqrt(test));
    double testSquared = sqrt(test);

    double powerTest = pow(test, testSquared);
    printf ("\n%lf", powerTest);

}