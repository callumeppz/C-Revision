#include <stdio.h>
#include <string.h> // use to import stlen() 


int main () {

    char str[] = "C Practise";
    char swap[strlen(str)]; // swaps string 

    strcpy(swap, str);

    printf ("%s", str);

    // finding the length of a string
    printf("\nLength %zu", strlen(str)); // used to output length of str, suing the %zu operator
    printf ("%s", swap);

    char str2[] = "Join me, ";
    char str3[] = "And me";

    // strcat(str2, str3); //this works just not on MacOS currently would provide the ouputs "Join me, And me"
 
    // printf("%c", str1);

    int result2 = strcmp(str2, str3);

    printf("\n%d", result2);

    return 0;
}