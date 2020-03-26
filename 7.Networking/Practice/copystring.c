#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[] = "i love you";
    char *t = s; // have t point at the memory address of the first index of s
    char copy[10];

    for(int i = 0, n = strlen(t); i < n; i++){
        printf("%c %c\n", copy[i], s[i]);

        //copy[i] = s[i];
    }

    copy[0] = toupper(copy[0]);

    //capitalize first letter in string
    // if(strlen(t) > 0){
    //     t[0]  = toupper(t[0]);
    // }

    // printf("s: %s\n", s);
    // printf("t: %s\n", t);
}

// by the way this code isnt perfect. but its a start?