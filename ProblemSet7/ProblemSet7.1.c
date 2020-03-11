#include <stdio.h>
#include <string.h>

// variable declaration
// char character;

int main(){
    // set string[128] user to input
    char string[128];
    char character;
    char temp;

    printf("Input a character to pull from string: ");
    scanf("%c", &character);    

    printf("Input a sentence for string: ");
    scanf("%c", &temp); //temp statement to clear buffer
    scanf("%[^\n]", string); //this command counts spaces while %s did not in this case. see acknowledgements

    int i = 0;
    int count = 0;
    while(string[i] != '\0'){
        if((string[i]) == character){
            count++;
        }
        i++;
    }

    printf("The number of times the character '%c' appears in \"%s\" is %d.\n", character, string, count);



    return 0;

    

    // }
    // while(1){
     
    // }
    // printf("Input a sentence for string: ");
    // scanf("%s", string);
    // printf("Input a character to pull from string: ");
    // scanf("%c", &character);


    // printf("maybe this will work");

    // for(int i = 0; string[i] != '\0'; i++){
    //         printf("%c", string[i]);

    // // print the string, then say how many times character appears in string
    // // for(int i = 0, n = strlen(string); i < n; i++){
    // //     if(string[i] != '\0'){
    // //         printf("%c", string[i]);
    //     // }
    //     // printf("\n");
    //     // if(string[i] == string[character]){
    //     //     int z = character;
    //     //     printf("The number of times a character '%c' appears in \"%s\" is %d\n", character, string[i], z);
    //     // }
    // }
   

    // return 0;

}