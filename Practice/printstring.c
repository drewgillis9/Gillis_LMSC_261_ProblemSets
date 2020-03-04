#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "I love you";
    printf("Print out the string:\n");
    //strlen = string length
    //%lu is just because the compiling program asked for it rather than %d
    printf("Size of string is: %lu\n", strlen(str));
    for (int i = 0; i < strlen(str); i++){
        printf("%c\n", str[i]);
    }

//manual strlen computation
//look for \0 which is the terminating character for a string
    int i = 0;
    while (str[i] != '\0'){
        //!= means do this until:, and '\0' is the null point in a string, aka nothing left
        i++;
    }

    printf("Manual strlen says: %d\n", i);
}