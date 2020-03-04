#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Something else";
    char character = 'a';
    //%i is the same as %d
    printf("%d %c\n", character, character);
   
   
    for (int i = 0, len = strlen(str); i < len; i++){
        int moreWork = (int) str[i];
        printf("%c %d\n", str[i], moreWork);
    }
}