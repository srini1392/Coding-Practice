#include <stdio.h>

/* K_R method with O(log n)*/
unsigned int countsetbits (int n)
{
	unsigned int count =0;
	while (n)
	{
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
}