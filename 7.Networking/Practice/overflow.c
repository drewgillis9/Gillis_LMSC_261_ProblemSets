#include <stdio.h>
#include <unistd.h>

// i *= 2 means i = i*2, we are squaring i
int main(){
    for(int i = 1; ; i*=2){
        printf("%i\n", i);
        sleep(1);
    }
}

// can stop a loop with control-C 
