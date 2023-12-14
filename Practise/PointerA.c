#include <stdio.h>

int main () {
    int arr[] = {1,3,5,7,1,8,2};
    int maxArr = *arr;

    for (int i = 0; i < 5; ++i){
        if (arr[i] > maxArr) {
            maxArr = arr[i];
        }
    }
    printf ("\nBiggest in array:  %d", maxArr);

    // same but with pointers instead

    *(arr+2) = 32;
    printf ("\n%d", *(arr+2));

    for (int i = 0; i < 5; ++i){
        if (*(arr+i) > maxArr){
            maxArr = *(arr+i);
        }
    }
    printf ("\nBiggest in array:  %d", maxArr);

    


}