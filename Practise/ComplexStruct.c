#include <stdio.h>
#include <string.h>

typedef struct ComplexStruct
{
    int age;
    double salary;
}ComplexStruct;

int multiplenums (int *num1, int *num2, int *sum){
    *sum = *num1 * *num2;
    return *sum;
}


int main(){

    ComplexStruct c1 = {.age = 32, .salary = 342.3};
    ComplexStruct c2 = {.age = 12, .salary = 343123212.3};

    printf ("%d %lf", c1.age, c1.salary);
    printf ("%d %lf", c2.age, c2.salary);


    char str[4][30];

    printf ("\nEnter first string:    ");
    scanf ("%s", str[0]);
    printf ("\nEnter Second string:    ");
    scanf ("%s", str[1]);
    printf ("\nEnter Third string:    ");
    scanf ("%s", str[2]);
    printf ("\nEnter Fourth string:    ");
    scanf ("%s", str[3]);

    int arr[] = {1,3,5,7,1,8,2};

    int MaxArr = *arr;
    int newI = 0;

    for (int i=0; i < 7; ++i){
        if (*(arr + i) > MaxArr) {
            MaxArr = *(arr + i);
            newI = i;
        }
    }

    printf("\nbiggest:    %d", arr[newI]);

    int MaxStr = strlen(str[0]);
    int newj = 0;

    for (int j=0; j < 4; ++j){
        if (strlen(str[j]) > MaxStr) {
            MaxStr = strlen(str[j]);
            newj = j;
        }
    }

    printf ("\nLongest String: %s\nWith a length of: %lu", str[newj], strlen(str[newj]));

    int number1 = 4;
    int number2 = 5;
    int sum;

    printf("\n%d", multiplenums(&number1, &number2, &sum));

    return 0;
}