#include <stdio.h>

int main () {
    int trial[2] = {5, 3}; // initialising array with type and size (stores 2 values {array elements})
    int trial1[4] = {5, 3}; // 3rd and 4th will be default valuess 

    printf("%d",trial[0]); // prints array index
    printf("\n%d",trial[1]); 

    int assignValues[5];

    printf("enter last two input values");
    scanf("%d", &assignValues[4]);
    scanf("%d", &assignValues[5]);

    assignValues[0] = 21;
    assignValues[1] = 22;
    assignValues[2] = 3;

    int age[5];

    for(int i = 0; i < 5; ++i){
        scanf("%d", &age[i]);
    }

    for(int i = 0; i < 5; ++i){
        printf("%d", age[i]);
    }

    return 0;
}