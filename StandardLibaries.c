#include <stdio.h>
#include <math.h>
#include <ctype.h>

int example; //global operator
int num = 25;
char alpha = 'e';

int main () {

    char upper = toupper(alpha);
    printf ("%c", upper);

    char lower = tolower(upper);
    printf ("%c", lower);

    int a = 5; // local operator
    int b = 2;

    double result =  pow(a, b); // a is base value, b is power raised to base
    printf ("Power Example: %lf", result);

    printf ("Example of a standard libary function");
    scanf ("%d, Example of a standard libary function", &example);
    
    printf ("Square Root Libary Example %lf", sqrt(num));
    printf ("Cube Root Libary Example %lf", cbrt(num));
}