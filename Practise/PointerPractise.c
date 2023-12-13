#include <stdio.h>
#include <string.h>
#include <math.h>

int multiplenum(int num1, int num2);

int main() {
    double salary;
    char jobs[4][100];

    printf("enter your first job:     ");
    scanf ("%s", jobs[0]);
    printf("enter your second job:     ");
    scanf ("%s", jobs[1]);
    printf("enter your third job:     ");
    scanf ("%s", jobs[2]);
    printf("enter your fourth job:     ");
    scanf ("%s", jobs[3]);

    int maxStr = strlen(jobs[0]);
    int newI = 0;

    for (int i = 0; i < 4; ++i){
        if (strlen(jobs[i]) > maxStr) {
            maxStr = strlen(jobs[i]);
            newI = i;
        }
    }

    printf ("%s", jobs[newI]);

    printf ("\n%d", multiplenum(3, 4));

    printf("\nenter your salary:     ");
    scanf("%lf", &salary);

    double* ptr = &salary;
    *ptr = 31.2;

    printf ("\nNew Salary:   %lf", *ptr);

    return 0;

}

int multiplenum (int num1, int num2) {
    int result = 0;
    for (int i = 0; i < num2; ++i) {
        result = result + num1;
    }
    return result;
}