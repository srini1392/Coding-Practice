#include <stdio.h>
#include <math.h>

int binarySearch(int[],int,int);

int main()
{

	int myList[] ={1,3,5,7,9};
	int len = sizeof(myList) / sizeof(myList[0]);

	printf("%d\n", binarySearch(myList, 3,len));
	printf("%d\n", binarySearch(myList,-1,len));
	return 0;

}

int binarySearch(int list[], int item,int len)
{
	int low =0;
	int high = len;
	while(low <= high)
	{
		int mid = floor((low+high)/2);
		int guess = list[mid];

		if (guess == item){
			return mid;
		}

		else if (guess > item){
			high = mid -1;
		}
		else{
			low = mid+1;
		}

	}
	return -1; //if number is not found
}



