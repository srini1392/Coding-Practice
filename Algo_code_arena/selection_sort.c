#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define SIZE 5



// to find the smallest value in an array
int findSmallest (int *arr)
{

	//smallest value is the first element of the array, and smallest index is 0
	int smallest = arr[0];
	int smallest_index = 0;

	for(int i=1; i < SIZE; i++)
	{
		if(arr[i]<smallest){
			smallest = arr[i];
			smallest_index =i;
		}
	}
	return smallest_index;

}


//selection sort logic
int *selectionsort(int *arr)
{
	//create a new array to store the sorted elements
	int *newArr = (int *) malloc (SIZE * sizeof(int));
	for (int i=0;i<SIZE;i++)
	{
		int smallest = findSmallest(arr);
		newArr[i] = arr[smallest];
		arr[smallest] = INT_MAX;
		//printf("int_max value is %d",INT_MAX);

	}
	return newArr;
}


//main program
int main()
{
	int arr[SIZE] = {5,3,6,2,10};
	int *sortarr = selectionsort(arr);
	//print the sorted list
	for (int i=0;i<SIZE;i++){
		printf("%d ",sortarr[i]);

	}
	return 0;
}

