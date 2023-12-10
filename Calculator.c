#include <stdio.h>

int main () {
    char oper; 
    double result; 
    printf("enter an operator you would like to use for calculation: '+' '-' '*' '/'\n");
    scanf("%c", &oper);

    printf ("Now enter the two numbers for calculation: ");
    double num1, num2;
    scanf ("%lf %lf", &num1, &num2);

    switch(oper){
        
        case '+':
        result = num1 + num2;
        printf ("%lf\n", result);
        break;
        case '-':
        result = num1 - num2;
        printf ("%lf\n", result);
        break;
        case '*':
        result = num1 * num2;
        printf ("%lf\n", result);
        break;
        case '/':
        result = num1 / num2;
        printf ("%lf\n", result);
        break;
        default: 
        printf ("\ninvalid operation or number");
        break;
    }

    (num1 > num2) ? printf ("number  1 > number 2") : printf ("number 2 > number 1");

    return 0;
}