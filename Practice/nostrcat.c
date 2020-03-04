#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "Hello, ";
    char str2[] = "World";
    //find the string lengths of both
    //printf("Size of string is: %lu, %lu", strlen(str1), strlen(str2));
    // here is how he would do it. do not print - this is not something we really need to see.
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    // next step is read every character in str2
    for(int i = 0; i < len2; i++){
        printf("%c", str2[i]);
    }
    printf("\n");
//here, start at the null of str1 (where len1 is) and print each character, and use +i to make each next character print one character later in the string;
    for(int i = 0; i < len2; i++){
        str1[len1+i] = str2[i];
    }
    printf("%s", str1);

}