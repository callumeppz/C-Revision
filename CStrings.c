#include <stdio.h>

int main () {
    // char str[] = "Example of String"; // creating a string
    // printf ("%s", str); // printing with S operator 

    // string input

    char str[20];
    printf ("Enter name: ");
    // scanf ("%s", str); // array which already points at the address of the first elemnent of str
    // scanf only takes input untill white space

    fgets (str, sizeof(str), stdin); // to take entire line fgets, name of string, size of string, standard input from keybaord

    str[2] = 'c'; // changes character within string

    printf("%s", str);

    printf ("%c", str[2]); // print individual character to the screen
    printf ("%c", str[3]); // print individual character to the screen



    return 0;
}