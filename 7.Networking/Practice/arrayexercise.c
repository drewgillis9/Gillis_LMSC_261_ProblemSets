#include <stdio.h>

const int COUNT = 10;
//inputs are size of array and actual array
//outputs sum of all numbers in the array
int sum(int size, int numbers[COUNT]);

//initialize array with constant set number of 10

int main(){
    int nums[COUNT] = {1, 5, 6, 10, 3, 20, 7, 12, 17, 9};
    int s = sum(10, nums);
    // nums does not equal numbers. 2 different variables
    //the function sum() have 2 inputs created with variables size and numbers. in this last line, nums = numbers
    //the variables in sum() are different than variables in main()
    int a = average(10, s);
    printf("Sum of all numbers is: %d, Print average: %d\n, ", s, a); 
    //can create a quick variable 'result' here:
    //int result  = sum(10, nums)
    //printf("Sum of all numbers is: %d\n", result);
}

int sum(int size, int numbers[COUNT]){
    int m = 0;
    //m = nums[0] + nums[1];
    for (int i = 0; i < COUNT; i++){
        m = m + numbers[i];
    }
    return m;
}

//must create function for average! you can do this - practice!
int average(int size, int sum[]){
    int m = 0;
    //m = nums[0] + nums[1];
    for (int i = 0; i < COUNT; i++){
        m = m + [i];
    }
    return m;
}