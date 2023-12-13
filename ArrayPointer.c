#include <stdio.h>

int main () {

    int numbers[] = {1, 3, 5, 7 , 9};

    for (int i = 0; i < 5; ++i) {
        printf ("%d = %p \n", numbers[i], &numbers[i]); // 4 different per mem address, int type, size of int is 4 bytes
        continue;
    }

    printf ("\n");

    for (int i = 0; i < 5; ++i) {
        printf ("%d = %p \n", numbers[i], numbers + i); 
        continue;
    }

    printf ("\n");

        for (int i = 0; i < 5; ++i) {
        printf ("%d = %p \n", *(numbers + i), numbers + i);  // i'th element, first element, access address and value
        continue;
    }

    printf ("\n");
    //changing array elements using pointers
    *numbers = 2; // changes first element
    *(numbers + 4) = 11; // changes last element

    printf("First element: %d\n", *numbers);
    printf("last element: %d\n", *(numbers+4));

    printf ("\nArray Address of 1:  %p", numbers); // same as first element of array, always points to first element,array names directly converted tp pointers
    printf ("\nArray Address of 2:  %p\n", numbers + 1);   // prints second array element

    return 0;
}