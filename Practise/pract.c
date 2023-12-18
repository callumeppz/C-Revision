// C program to build the outline 
// boundary using draw() 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
int i, j, height = 30; 
int width = 30, gameover, score, flag; 
int fruitx, fruity,x,y;

// Function to draw a boundary 
void draw() 
{ 
    for (i = 0; i < height; i++) { 
        for (j = 0; j < width; j++) { 
            if (i == 0 || i == height - 1 || j ==0 || j == width -1){
                printf ("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        }
}

void setup () {
    x = height/2;
    y = width /2;
    gameover = 0;
    label1:
        fruitx = rand()%2;
        if (fruitx == 0){
            goto label1;
        }
    label2:
        fruity = rand()%2;
        if (fruity == 0){
            goto label2;
        }
    score = 0;
}

void input (){
    if (kbhit)
    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}
// Driver Code 
int main() 
{ 


	// Function Call 
	draw(); 

	return 0; 
} 
