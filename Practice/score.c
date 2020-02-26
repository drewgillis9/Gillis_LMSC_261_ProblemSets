#include <stdio.h>

int main(){
    int score1 = 10;
    int score2 = 20;
    int score3 = 30;

    printf("Score 1:");
    for (int i = 0; i < score1; i++){
        printf("#");
    }
    printf("\n");

    printf("Score 2:");
    for (int i = 0; i < score2; i++){
        printf("#");
    }
    printf("\n");

    printf("Score 2:");
    for (int i = 0; i < score2; i++){
        printf("#");
    }
    printf("\n");
}

//making a function for score so we dont have to keep printing everything for esch different score
void chart(int score);

void chart(int score){
    for (int i = 0; i < score; i++){
        printf("#");
    }
    printf("\n");
}

int main(){
    int score1 = 10;
    int score2 = 20;
    int score3 = 30;

    printf("Score 1:");
    chart(score1);

    printf("Score 2:");
    chart(score2);

    printf("Score 2:");
    chart(score3);
}




//using an array to shorten the code even further
//declare and define function
void chart(int score);

void chart(int score){
    for (int i = 0; i < score; i++){
        printf("#");
    }
    printf("\n");
}

//declare array with const integer for array size
const int COUNT = 3;
int main(){
    int scores[COUNT];

//initialize array
    for(int i = 0; i < COUNT; i++){
        scores[i] = (i + 1) * 10;
    }

//print the score
    for (int i = 0; i < COUNT; i++){
        printf("Score %d:", i+1);
        chart(scores[i]); //scores = score1;
    }
}