#include <stdio.h>

// 1.Function Declaration
// specify what the input and output is going to be
void hello(int counter);

// 2.Function Definition
// what is this function going to do?
void hello(int counter){
    for(int i = 0; i < counter; i++){
        printf("Hello, World\n");
    }
}

// Function Definition for main() function
int main(void){
    // 3. use (or call) the function
    hello(10);
}



