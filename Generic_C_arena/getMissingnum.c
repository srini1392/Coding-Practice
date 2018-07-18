#include <stdio.h>

/* Time complexity of o(n)*/
int getMissingNum(int a[],int n){

	int total, i;
	total = (n+1)*(n+2)/2;
	for (i=0;i<n;i++)
		total -= a[i];
	return total;
}

int getMissingNum_xor(int a[],int n){

	int i;
	int x1 = a[0];
	int x2 = 1;
	for (i=1;i<n;i++)
		x1 = x1 ^ a[i];	
	
	for (i=2;i <= n+1;i++)
		x2 = x2 ^ i;
	return x1 ^ x2;
}

int main(){
	
	int a[]={1,2,3,4,5,6,7,9,10,11,12};
	int miss = getMissingNum_xor(a,11);
	printf("%d",miss);
	
	
	
}