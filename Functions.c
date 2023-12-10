#include <stdio.h>
// simple program for creation of a function to multiply floats
float multiplyNumbers(float num1, float num2);

int main () {
    float result = multiplyNumbers(5.2, 5.3);
    printf ("%f", result);
}

float multiplyNumbers(float num1,float num2){
    float product = num1 * num2;
    return product;
}