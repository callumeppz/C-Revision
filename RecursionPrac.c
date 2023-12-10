#include <stdio.h>

// sript to find the factorial of numbers

int Factorial (int n);

int main () {

    int number;

    printf ("Enter a number");
    scanf ("%d", &number);

    printf("Factotial is = %d", Factorial(number));
    return 0;

}

int Factorial (int n) {
    if (n > 0){
        return n * Factorial(n - 1);
    }
    else {
        return 1;
    }
}