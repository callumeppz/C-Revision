#include <stdio.h>

int sum(int n);
int number;
int result;

int main () {
    printf ("enter a positive integer");
    scanf ("%d", &number);

    result = sum(number);
    printf("sum = %d", result);
    return 0;
}

int sum(int n){
    if (n != 0){
        // recursive call
        return n + sum(n-1);
    }
    else {
        return n; // once 0, recrusion stops
    }

}