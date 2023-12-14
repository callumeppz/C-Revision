#include <stdio.h>

int* Multiple(int* num1, int* num2, int* sum){
    *sum = *num1 * *num2;
    return sum;
}

int main() {
    int number1 = 13;
    int number2 = 9;
    int sum;

    int* result = Multiple(&number1, &number2, &sum);

    printf ("%d", *result);

}