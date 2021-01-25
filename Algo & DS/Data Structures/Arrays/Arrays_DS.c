//  Title          :arrays.c
// Author          :Srinikethan M
// Date & Time     :2019-06-05 15:03:35


#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>

#define nElems(x) (sizeof(x) / sizeof((x)[0]))
#define bool int


int twosum (int arr[], int n, int targetSum){
     
     int i, j =0;
    // consider each element except the last element
    for ( i = 0; i< n-1 ; i++){

        //start from the i'th element till last element
        for( j = i+1 ; j<n; j++){

            //if desired sum is found, print and return it
            if (arr[i]+arr[j] == targetSum){

                printf("pair found at index %d and %d",i,j);
                return;

            }
        }

    }

    printf("pair not found ");
    }


void quickSort(int *, int , int);
int hasArrayTwoCandidates(int A[], int arr_size, int sum){
    
    int l, r; //2 indices from l-> r

    /*sort the elements*/
    quickSort (A,0,arr_size-1);

    /*Now to search for the sum */
    l = 0;
    r = arr_size -1;

    while(l<r){
        if (A[l] + A[r] == sum){
            printf("%d %d \n", l,r);
            return l,r;
        }
        else if (A[l] + A[r] < sum){
            // printf("%d %d \n", l, r);
            l++;
            }
        else  if (A[l] + A[r] > sum){
            // printf("%d %d \n", l, r);
            r--;
        }

    }
    return 0;

}


void exchange(int *a, int *b) 
{ 
    int temp; 
    temp = *a; 
    *a   = *b; 
    *b   = temp; 
} 
  
int partition(int A[], int si, int ei) 
{ 
    int x = A[ei]; 
    int i = (si - 1); 
    int j; 
  
    for (j = si; j <= ei - 1; j++) 
    { 
        if(A[j] <= x) 
        { 
            i++; 
            exchange(&A[i], &A[j]); 
        } 
    } 
    exchange (&A[i + 1], &A[ei]); 
    return (i + 1); 
} 
  
/* Implementation of Quick Sort 
A[] --> Array to be sorted 
si  --> Starting index 
ei  --> Ending index 
*/
void quickSort(int A[], int si, int ei) 
{ 
    int pi;    /* Partitioning index */
    if(si < ei) 
    { 
        pi = partition(A, si, ei); 
        quickSort(A, si, pi - 1); 
        quickSort(A, pi + 1, ei); 
    } 
} 






int main(){

    int arr[] ={8,7,2,5,3,1};
    int sum = 15;
    int n = sizeof(arr)/sizeof(arr[0]);

    twosum(arr,n,sum); //o(n'2)
    if (hasArrayTwoCandidates(arr,n,sum)) //O(log n)
        printf("array has 2 elements with given sum");

    


    return 0;
}