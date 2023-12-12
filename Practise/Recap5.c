#include <stdio.h>
#include <math.h>
#include <string.h>

int Recap(int num1, int num2);

int main () {

    char str[20];
    char str1[20];
    char str2[20];
    char str3[20];

    char oper;
    int result;
    int number1, number2;
    char strings[4][100]; // multidimensional array

    printf ("\nEnter String 1:    ");
    scanf("%s", strings[0]); // input to array
    printf ("\nEnter String 2:    ");
    scanf("%s", strings[1]);
    printf ("\nEnter String 3:    ");
    scanf("%s", strings[2]);
    printf ("\nEnter String 4:    ");
    scanf("%s", strings[3]);
    
    int longestIndex = 0;

    int maxlength = strlen(strings[0]); // loop to check longest string in the array  setting maxlength to array 0
    for (int i = 0; i < 4; ++i){
        if (strlen(strings[i]) > maxlength) {
            maxlength = strlen(strings[i]);
            longestIndex = i;
        }
    }

    printf ("the longest string is: %s \n", strings[longestIndex]);

    printf ("\nEnter two numbers ");
    scanf ("%d %d", &number1, &number2);
    printf ("%d", Recap(number1, number2));

    return 0;

}

int Recap(int num1, int num2){
    int result = 0;
    for (int i = 0; i < num2; ++i){
        result = result + num1;
    }
    return result;
}