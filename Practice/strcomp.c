#include <stdio.h>

int main(){
    char s[256], t[256];
    printf("Input a string for s:");
    scanf("%s", s); // you dont need &s here because strings and arrays automatically have memory location. s is the first address of the string named s;
    printf("Input a string for t:");
    scanf("%s", t);

    if(s == t){
        printf("two strings are the same\n");
    }
    else{
        printf("two strings are different\n");
    }
}

// this only compares the memory location of the very first value - not even the character of the first value! check out comment above
//then check out strcomp2.c