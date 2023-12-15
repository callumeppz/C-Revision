#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // initialises array
    int target = 7; // initialises target

    for (int i = 0; i < sizeof(arr); ++i) { // searches array
        if (arr[i] == target) { // if i matches target
            printf ("%d", arr[i]);
            return i; // ends when found
        }
    }
    return -1; // returns -1 if not found
}
