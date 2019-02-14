#include <stdio.h>
#include <math.h>

int binarySearch(int[],int,int); //function prototype

//main driver function
int main()
{
	//array in which the number has to be found
	int myList[] ={1,3,5,7,9};
	//compute the length
	int len = sizeof(myList) / sizeof(myList[0]);

	//printer statements to check the functionality and outputs
	printf("%d\n", binarySearch(myList, 3,len));
	printf("%d\n", binarySearch(myList,-1,len));
	return 0;

}

//BinarySearch Algorithm -- takes array, element to be searched and length of the array as inputs
//For this Algorithm the array has to be a sorted one 
int binarySearch(int list[], int item,int len)
{	
	//initial conditions to find the mid element
	int low =0;
	int high = len;
	while(low <= high)
	{	
		int mid = floor((low+high)/2);
		int guess = list[mid];

		if (guess == item){
			return mid;
		}

		//if item is in the second half of the array, hence check for elements lesser than mid
		else if (guess > item){
			high = mid -1;
		}
		//if item is in the first half of the array, hence check for elements greater than mid
		else{
			low = mid+1;
		}

	}
	return -1; //if number is not found
}



