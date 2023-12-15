#include <stdio.h>

int steps (int n);

int main () {

    int number;
    printf ("Enter a value:     ");
    scanf ("%d", &number );
    printf ("Amount of paths:     %d", steps(number));
}

int steps (int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }

    int firststep = 1, secondstep = 2;
    int temp;
    for (int i = 3; i <= n; ++i){
        temp = firststep + secondstep;
        firststep = secondstep;
        secondstep = temp;
    }
    return temp;
}