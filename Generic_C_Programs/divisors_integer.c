#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;


	printf ("Enter the number to find its divisors ");
	scanf("%d",&n);
	printf("\n Divisors of %d are :",n);
	//for n/2 times, if num%i is zero, then i is the divisor
	for(i=1;i<n/2;++i)
		if(n%i==0)
			printf("%d ",i);

}