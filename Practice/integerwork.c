#include <stdio.h>

int main(){
    int i, j;
    printf("input a value for i: ");
    scanf("%i", &i); // &i means give me a memory address to this variable; scanf() looks for the user to input a value in the terminal;
    printf("input a value for j: ");
    scanf("%i", &j);

    if(i == j){
        printf("They are the same.\n");
    }
    else {
        printf("They are different.\n");
    }
    
    // printf("The value from the user is %i\n", i);
}