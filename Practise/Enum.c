#include <stdio.h>

enum Size{
    Small,
    Medium,
    Large,
    ExtraLarge
};

int main () {
    enum Size shoesize;
    shoesize = Large; 
    printf ("%d", shoesize);
    return 0;
}