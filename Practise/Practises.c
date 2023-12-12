#include <stdio.h>
#include <string.h>

int main () {
    char str[4][100];

    printf ("enter a value 1:   ");
    scanf("%s", str[0]);
    printf ("\nenter a value 2:   ");
    scanf("%s", str[1]);
    printf ("\nenter a value 3:   ");
    scanf("%s", str[2]);
    printf ("\nenter a value 4:   ");
    scanf("%s", str[3]);

    int maxlen = strlen(str[0]);
    int newI = 0;

    for ( int i = 0; i < 4; i ++) {
        if (strlen(str[i]) > maxlen) {       
            maxlen = strlen(str[i]);
            newI = i;
        }
    }

    printf ("\nBiggest Value: %s", str[newI]);
}