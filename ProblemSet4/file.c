#include <stdio.h>

int main(){
    // create a variable named textFile that is of FILE * type
    FILE *textFile;

    // Open file
    textFile = fopen("/Users/Drew/Documents/GitHub/Gillis_LMSC_261_ProblemSets/ProblemSet4/ProblemSet4.2.txt", "r" );

    if(textFile == NULL){
        printf("This file does not exist or cannot be opened\n");
        return 1;
    }
    else {
        printf("File exists!!");
        return 2;
    }
    
    int character;

// fgetc means file get character
// EOF means end of file
   
    while ((character = fgetc(textFile)) != EOF){
        printf("%c\n", character);
    }
}