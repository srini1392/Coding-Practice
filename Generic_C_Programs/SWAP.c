#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	int a,b,temp;
	printf("Enter the value of a & b:");
	scanf("%d %d",&a,&b);
	
	printf("The value of a & b before swapping is %d %d:",a,b);


	/**************************************************************/
	/* SWAP logic using third variable *
	
	temp = a;
	a = b;
	b = temp;

	**************************************************************/

	/* swap logic without temp variable using arithmetic operations

	a = a+b;
	b = a-b;
	a = a-b;

	*************************************************************/

	/* SWAP logic without third variable using XOR 

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	************************************************************/

	/* SWAP logic using pointers 

	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
	
	************************************************************/




	printf("value of a is %d\n",a);
	printf("value of b is %d",b);

}



