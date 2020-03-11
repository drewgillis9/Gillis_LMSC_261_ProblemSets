#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//function declaration
bool compareString(char a[], char b[]);

int main(){
    char s[256], t[256];
    printf("Input a string for s:");
    scanf("%s", s); // you dont need &s here because strings and arrays automatically have memory location. s is the first address of the string named s;
    printf("Input a string for t:");
    scanf("%s", t);

    if(compareString(s, t)){
        printf("Two are the same\n");
    }
    else{
        printf("Two are different\n");
    }
}

// function definition
bool compareString(char a[], char b[]){
    
    if(strlen(a) != strlen(b)){ // not the same length means they are not the same string
        return false;
    }

// go through individual characters in the string
// check whether or not they are the same
    for(int i = 0, n = strlen(a); i < n; i++){
        printf("%c %c\n", a[i], b[i]);
        if(a[i] != b[i]){
            printf("%c and %c is not the same\n", a[i], b[i]);
            return false;
        }
    }

    return true;
}
