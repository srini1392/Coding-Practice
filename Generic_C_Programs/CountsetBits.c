#include <stdio.h>

/* K_R method with O(log n)*/
unsigned int countsetbits (int n)
{
	unsigned int count =0;
	while (n)
	{
		//perform and on itself with (n-1), loop exits based on number of set bits
		n = n&(n-1);
		count++;
	}
	return count;
}



int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("the set bits count is %d",countsetbits(num));
	if (countsetbits(num)>1)
		printf("\n not power of 2");
	else 
		printf("\n is power of 2");
		
}