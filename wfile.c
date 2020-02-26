#include <stdio.h>

int main(){
 FILE *fp;

 fp = fopen("Alphabet.txt", "w");

 if(fp == NULL){
     printf("File cannot be opened\n");
     return 1;
 }   

 // fputc --> file put character
 for (char c = 'A'; c <= 'Z'; c++){
     int check = fputc(c, fp);
     if(check == EOF){
         printf("Error in writing file.\n");
         return 1;
     }
 }

 fclose(fp);
 return 0;
}