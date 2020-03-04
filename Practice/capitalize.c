#include <string.h>
#include <stdio.h>

int main(){
    char str[] = "This is it";
    for (int i = 0, len = strlen(str); i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){ // looking for lower case letters in a string
            str[i] = str[i] - ('a' - 'A');
        }
    }
    printf("Capitalized? %s\n", str); // %s is string
}