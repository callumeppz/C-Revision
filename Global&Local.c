#include <stdio.h>

float resultGlobal; 
/* ^ This is a global variable, declared out 
of the function and accessible to all */

float addingNumbers (float num1, float num2){
    resultGlobal = num1 + num2;
    return resultGlobal; 
}

float multiplyNumbers (float num1, float num2){
    float resultLocal = num1 * num2;
/* ^ This is a Local variable, declared inside 
the function and only accessible within */

    return resultLocal; 
}

int main() {
    resultGlobal = addingNumbers(5.2, 5.3);
    printf ("%f Global \n", resultGlobal);

    float resultLocal = multiplyNumbers(5.2, 5.3);
    printf ("%f local", resultLocal);

}