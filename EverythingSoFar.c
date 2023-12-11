#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// goes over everything weve coverered so far, aswell as a function to calculate multiplication without the * operator
// makes use of recurssion to solve the issue, and loops through untill num2 is complete

int multiplication(int num1, int num2);

int main() {
    int num = 4;
    int numtest = 5;
    int arraytest[5];
    int numtrial;

    //printf ("%lf", sqrt(num)); // math.h
    //printf ("%lf", cbrt(num));
    printf ("%d", multiplication(3, 4));

    (num > numtest) ? printf ("\ntrue") : printf ("\nfalse"); // turnible

    bool result1; // bool

    if (num < numtest) { // if else
        printf ("%d", result1);
    }
    else {
        return 0;
    }

    int total;

    for (int i = 0; i < 5; ++i){ // arrays
        printf ("enter a number");
        scanf ("%d", &arraytest[i]);
        printf ("%d", arraytest[i]);
        total = total + arraytest[i];
    }
    printf ("\n%d", total);
    return 0;

}




int multiplication(int num1, int num2){ // function call
    int result;
        for (int i = 0; i < 4; ++i) {
            result +=  num1;
        }
    return result;
}
