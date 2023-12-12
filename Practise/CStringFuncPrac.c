#include <stdio.h>
#include <string.h>

// Program to input 2 strings, print the one that is larger by how much and concatinate them at the end

int main() {
    char str1[20];
    char str2[20];

    printf ("Enter First String here:   ");
    fgets(str1, sizeof(str1), stdin);
    printf ("Enter Second String here:   ");
    fgets(str2, sizeof(str2), stdin);

    int string1 = strlen(str1);
    int string2 = strlen(str2);
    int result = string1 - string2;

    if (string1 > string2) {
        printf ("\nString one is cooler: %sby: %d\n", str1, result);
    }
    else {
        printf ("\nString two is cooler: %s", str2);
    }

    strcat(str1, str2);

    printf ("%s", str1);

    return 0;

}