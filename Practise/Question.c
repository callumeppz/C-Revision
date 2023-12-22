#include <stdio.h>

int neutralNum (int n, int n1, int sum);

int main() {
    int n, n1, sum;
    printf ("Enter Limit");
    scanf ("%d", &sum);
    printf ("\nEnter Two Numbers");
    scanf ("%d %d", &n, &n1);
    int result = neutralNum(n, n1, sum);
    printf ("\nNeutral Numbers:  %d", result);
}

int neutralNum (int n, int n1, int sum){
    for (int i = 1; i < sum; i++) {
        if ((sum % n1 == 0) || (sum % n == 0)) {
            sum+=i;
        }
    }
    return sum;
}