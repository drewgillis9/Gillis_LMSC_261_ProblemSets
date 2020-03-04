#include <stdio.h>
#include <math.h>

//declare integers used in the code
int i;
int j;

int main(){
    //initialize the array - give it command to set array integers between 2-100; initially had this as i  = 0 and prime2[i] = i + 2, 
    // but had a problem with i = 0 since i told the code to ignore all zeros. Found help online - see acknowledgements
    int prime2[101];
    for(int i = 2; i <= 100; i++){
        prime2[i] = i;
    }

// set conditions for setting prime2 values to 0 - not exactly boolean because there is no 1 for true, but will have the code ignore any zeros in array.
    i = 2;
    while(i <= sqrt(100)){
        if(prime2[i] != 0){
            // set any multiples of any numbers in the array to 0. then have the file not read any zeros.
            for(j = 2; j < 100; j++){
                if(prime2[i]*j > 100)
                    break;
                else
                    prime2[prime2[i]*j] = 0;    
            }
        }
        i++;
    }

// start off the read correctly - needs no condition or loop
    printf("Prime numbers between 2 ~ 100 are:\n");

// as long as prime2[i] =/= 0, read the value out with 5 spaces in between values
    for(i = 2; i <= 100; i++){
        if(prime2[i] != 0)
            printf("%d     ", prime2[i]);
    }

    return 0;

}
