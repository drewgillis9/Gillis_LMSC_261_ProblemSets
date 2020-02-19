#include <stdio.h>

//create code for the function, but no function yet

//declare addCharacters function
void addCharacters(char yay, char hmm);

//define addCharacters function
void addCharacters(char yay, char hmm){
    printf("%c+%c\n", yay, hmm);
}

//use addCharacters function
int main(){
    char arb = 'a';
    char blah = 'b';
    addCharacters(arb, blah);
}