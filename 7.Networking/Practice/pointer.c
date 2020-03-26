#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a; // pointer stores a mnemory address of another variable;
    // &a and b are now equal
    printf("the address of a is %p. the value of a is %d", b, *b);
}