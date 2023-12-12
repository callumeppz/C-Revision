#include <stdio.h>
#include <math.h>

int multiplyNums(int num1, int num2);

int main() {
    char oper;
    int result;
    int sqrnum = 5;

    char str[20];

    printf ("\nEnter your name: ");
    fgets (str, sizeof(str), stdin); 

    str[2] = 'X';

    printf ("%s", str);

    int sqrnumPow = sqrt(sqrnum);
    int powerNum = pow(sqrnum, sqrnumPow);
    printf ("%d", powerNum);

    printf("enter an operator you would like to use for calculation: '+' '-' '*' '/'\n");
    scanf("%c", &oper);

    int num, num0;

    scanf ("%d %d", &num, &num0);

    switch(oper){
        case '+':
        result = num + num0;
        printf("%d",result);
        break;
        case '-':
        result = num - num0;
        printf("%d", result);
        break;
    }

    (num > num0) ? printf("\ntrue") : printf("\nfalse");

    multiplyNums(3, 5);
}


int multiplyNums(int num1, int num2) {
    int result = 0; 
    for (int i = 0; i < 5; ++i) {
        result = result + num1;
        printf ("\n%d", result);
    }
    return num1;
}