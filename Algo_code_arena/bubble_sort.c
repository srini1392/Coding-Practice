#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* generic bubble sort logic to sort in ascending order, 
	to test for descending, the comparison should be opposite for different ranking on Line12 i.e,
	A[j] < A[j+1] == descending order*/
/*
void bubble_sort(int A[],int n)
{

	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] =temp;
			}
		}
}
*/




/* to design a logic to rank the sorting based on if A>B return 1; A<B return -1*/
//descending order
int compare(int a, int b){
	if (a > b) return -1;
	else return 1;
}

//ascending order
int abscompare(int a, int b){
	if (abs(a) > abs(b)) return 1;
	else return -1;
}

void bubble_sort(int *A,int n, int (*compare)(int,int))
{

	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++){
			if(abscompare(A[j],A[j+1]) > 0){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] =temp;
			}
		}
}

int main() 
{
	int i;
	int A[] = {3,2,5,9,1,4};
	bubble_sort(A,6,abscompare);
	for(i =0;i<6;i++) printf("%d  ", A[i]);

}

















