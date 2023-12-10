#include <stdio.h>

int Factorial (int n);

int main () {
    int number;
    printf ("add a number");
    scanf ("%d", &number);

    printf("\nFactorial is : %d", Factorial(number));
}

int Factorial (int n) {
    if (n > 0) {
        return n * Factorial(n-1);
    }
    else {
        return 1;
    }

}