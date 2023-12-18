#include <stdio.h>

typedef struct Prac
{
    int age;
}Prac;


int main () {
    int first = 0, second = 1, next;
    int arr[] = {1,2,3,8,9,16};
    int num = 1;
    int target = 2;
    int loops = 0; // Counter to track the number of loops taken
    int newi = 0;

    for (int i = 0; i < sizeof(arr); ++i) {
        loops++;
        if (arr[i] == target){
            printf ("Found Target");
            printf ("%d", arr[i]);
            newi = i;
        }
    }

    if (arr[newi] == 1) {
        printf ("\ninvalid target number");
    }
    else {
        printf ("\narray number %d found in %d loops.", arr[newi], loops);
    }

    printf ("\n");

    for (int i = 0; i < 10; ++i) {
        num = num + 1;
        printf ("\ntwo sum: %d", num);
        }

    printf ("\n");

    for (int i = 0; i < 10; ++i) {
        next = first + second;
        first = second;
        second = next;
        printf ("\nfibo sum: %d", first);
        }
    


    return 0;

}