#include <stdio.h>

int main() {
    char str[20];

    printf ("Enter name: ");

    fgets(str, sizeof(str), stdin);

    str[0] = 'X';

    printf ("%s", str);
}