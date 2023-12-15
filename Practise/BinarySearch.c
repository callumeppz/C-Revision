#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 7;

    for (int i = 0; i < sizeof(arr); ++i) {
        if (arr[i] == target) {
            printf ("%d", arr[i]);
            return i;
        }
    }
    return -1;
}
