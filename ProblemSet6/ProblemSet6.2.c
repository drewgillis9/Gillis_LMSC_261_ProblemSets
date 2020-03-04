#include <stdio.h>

// declare and define removeDigit function
void removeDigit(char s[]);

//declare the variables
int i = 0;
int len = 14;

int main(){
    // set the string text to a string name
    char str[] = "It's6 a9 trap!";
    //use manual string computation here. I am printing all numbers because I am unsure of a better way. Made into comments - in order to find the value
    // of len, un-comment the next thread;
    
    // printf("The length of the string is:\n");
    // while(str[i] != '\0'){
    //     i++;
    //     printf("%d\n", i);
    // }

        // the length is 14. input into int len above;
    removeDigit(str[i]);
    
    return 0;

}

// define the function
void removeDigit(char s[]){
    char str[] = "It's6 a9 trap!";
    int len = 14;
    for(i = 0, len = 14; i < len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            ;
        }
        else{
            printf("%c", str[i]);
        }   
    }
}