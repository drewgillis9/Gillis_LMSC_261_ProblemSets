#include <stdio.h>

int main(){
    int stacks, j;
    for(stacks = 0; stacks < 8; stacks++){
        for(j = 0; j <= stacks; j++){
            printf("#");
        }
        printf("\n");
    }
}