#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define true 1
#define false 0

_Bool isPrime (int);
int main()
{
	int num;
	printf("Enter the number to check if its prime or not :");
	scanf("%d",&num);

	isPrime(num) ? printf("the number is prime"): printf("the number is not prime");
	//printf("the result is %d", isPrime(num));
	//printf("not prime");




return 0;
}

_Bool isPrime(int num){
	int i;
	if (num<=1)
		return false;
	for (i =2;i<num;i++){
		if (num % i == 0)
			return false;
	}
	return true;

}

