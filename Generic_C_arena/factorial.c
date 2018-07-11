#include <stdio.h>


int fact (int n);


int main ()
{
	int x, i;
	printf("enter the number to compute its factorial..!\n");
	scanf("%d",&x);
	i = fact (x);
	printf("The factorial of %d is %d",x,i);
	return 0;
	

}


int fact(int n)
{
	if(n == 1)
		return 1;
	else
		return (n * fact(n-1));
}
