//  Author      : Srinikethan M
//  File        : CodingChallenge.c
//  Time        : 2019-06-06 11:54:04

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

//function prototypes
int binarySearch(int *, int, int);



// binary search algorithm
int binarySearch(int arr[], int len, int item){

    //initial conditions for bS
    int low = 0;
    int high = len;

    while(low < high){
        
        int mid = floor((low + high )/2);
        int guess = arr[mid];

        //comparison logic
        if (guess == item){
            return mid;
        }
        else if (guess > item){
            high = mid - 1 ;
        }
        else{
            low = mid + 1 ;
        }
    }
    return -1;

}


