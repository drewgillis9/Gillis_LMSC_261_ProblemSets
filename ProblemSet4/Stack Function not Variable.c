#include <stdio.h>

void stacks(int n);

void stacks(int n){
    for(int i = 0; i < n; i++)
    {
        for(int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main(){ 
    stacks(6);
}