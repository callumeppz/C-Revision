#include <stdio.h>


int fiboRecr(int x);

int main () {
    int number, x;


    printf("Enter Number:       ");
    scanf ("%d", &number);

    for (x = 0; x < number; ++x) {
        printf ("\nSequence to number:    %d", fiboRecr(x));
    }
    
    printf ("\niterations to number:    %d", x);
    
    return 0;
}

int fiboRecr (int x) {
    if (x == 0) {
        return 0;
    }
    else if (x == 1) {
        return 1;
    }
    else {
        return (fiboRecr(x - 1) + fiboRecr(x - 2));
    }
}