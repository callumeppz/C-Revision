#include <stdio.h>

int* squareNum (int* num) {
    int square = *num * *num;
    *num = square;
    return num;
}

int* numberSum (int* num1, int* num2, int* sum) {

    *sum = *num1 +*num2;
    return sum;
}

int main () {
    int number = 21;
    int number1 = 32;
    int number2 = 18;
    int sum;

    int* result2 =numberSum(&number1, &number2, &sum);

    int* result = squareNum(&number);

    printf("Sqaure is:  %d", *result);
    printf("\nAdded is:  %d", *result2);


    return 0;
}