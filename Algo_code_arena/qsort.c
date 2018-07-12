#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void* a, const void* b){
	int A = *((int*)a); //dereference the void pointer by typecasting to intger data type
	int B = *((int*)b); 
	// return abs(A) - abs(B);
	return A - B;
	
}

int main()
{
	int i, A[] = {-31,22,-1,50,-6,4}; // => {-1,4,-6,22,-31,50}
	qsort(A,6,sizeof(int),compare); //syntax for qsort is ==> arguments ==> array, number of members of array, size of data type, compare function
	for(i=0;i<6;i++) printf("%d ",A[i]);
}