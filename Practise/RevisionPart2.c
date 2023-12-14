#include <stdio.h>
#include <string.h>


int main () {
    char str[] = {1, 3, 5,11 , 9};
    int maxArr = *str;
    int newI = 0;

    for (int i = 0; i < 5; ++i) {
        if (*(str + i) > maxArr) {
            maxArr = *(str+i);
            newI = i;
        }
    }

    printf ("\n%d", str[newI]);

    char arr[4][20];

    printf("Enter first value of string");
    scanf ("%s", arr[0]);
    printf("Enter first value of string");
    scanf ("%s", arr[1]);
    printf("Enter first value of string");
    scanf ("%s", arr[2]);
    printf("Enter first value of string");
    scanf ("%s", arr[3]);

    int maxLen = strlen(arr[0]);
    int newI2 = 0;

    for (int j = 0; j < 4; ++j){
        if (strlen(arr[j]) > maxLen) {
            maxLen = strlen(arr[j]);
            newI2 = j;
        }
    }

    printf ("biggest is: %s", arr[newI2]);


}