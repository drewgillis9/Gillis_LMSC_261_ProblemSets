#include <stdio.h>

int main(){

    //type name = value
    int num = 10;

    //type name[size];
    int num[10];

    //Declaration and Initialization of an array
    int data[4] = {4, 6, 9, 2}; // data set includes 4, 6, 9, 2
    int nums[10] = {0}; // data set includes 0 ten times

    //accessing array elements
    printf("%d\n", data[0]);
    printf("%d\n", data[1]);
    printf("%d\n", data[2]);
    printf("%d\n", data[3]);

    //initialize array using for-loop
    for(int i = 0; i < 4; i++){
        printf("%d\n", i);
        data[i] = i * i + 1;
    }

    for (int i = 0; i < 4; i++){
        printf("index %d of data is: %d\n", i, data[i]);
    }

}