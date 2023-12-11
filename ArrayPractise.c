#include <stdio.h>

/* program to compute the average marks of a student */


int main() {
    int marks[5];
    int finalTotal;
    int subjects = 5;
    

    for (int i = 0; i < 5; ++i){
        scanf ("%d", &marks[i]);
        finalTotal = finalTotal + marks[i];
    }

    printf("Overall Mark is: %d", finalTotal);

    printf("\nAverage mark is: %d", finalTotal / 5);

}