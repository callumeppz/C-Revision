#include <stdio.h>


int main (){
    int age = 25;

    printf ("%p", &age); // prints memeory address
    scanf ("%d", &age); // stores int to memeory address

    int* ptr = &age; // pointer
    int var; // usual variable

    printf ("\nAddress: %p", ptr); // prints memeory address
    
    printf ("\nValue: %d", *ptr); // prints memeory address value stored

    *ptr = 31; // new value to pointer address
    printf("%d", age);

    //int *ptr; causes confusing, asterisk attatched to value, will provide value pointing to not address

    int number;

   // ptr = number; // invalid number not a memory address
   // *ptr = &number // invalid *ptr shows value, &number shows memory address
   // ptr = &number //valid, both ptr and &number represent memory address
   // *ptr = number // both represent value





    return 0;
}