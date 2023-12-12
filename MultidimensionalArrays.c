#include <stdio.h>

int main () {
    int arr[2][3] = {{1,3,5}, {2,4,6}}; // 2 dimensional array with 3 elements in each

    printf ("%d\n",     arr[0][0]);
    printf ("%d\n",     arr[1][2]);

    //change array indexes

    arr[0][2] = 10; // changing first array second element
    printf ("new array index: %d\n",     arr[0][2]); // printing to cli

    for (int i = 0; i < 2; ++i) { // if statement runs starting from zero, after seond loop complete I becomes 1 and moves onto next array
        for (int j = 0; j < 3; ++j) { // if statement to print arrays to screen
            printf("%d ", arr[i][j]);
        }
        printf ("\n");
    }

}