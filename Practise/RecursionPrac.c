#include <stdio.h>

int n;

int factorial(int n);

int main () {
    printf ("enter a factorial");
    scanf ("%d", &n);

    printf ("%d", factorial(n));
}

int factorial (int n) {
    if (n > 0){
    return n * factorial(n-1);
    }
    else {
        return 1;
    }
}