#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[] = "Hello";
    for(int i = 0, n = strlen(str); i < n; i++){
        // if(isLower(str[i])){
            printf("%c", toupper(str[i]));
        // }
        // else{
        //     printf("%c", str[i]);
        // }
    }
    printf("\n");
}   