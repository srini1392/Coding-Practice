#include <stdio.h>
#include <math.h>


int squareroot(int); //function prototype


int main(){
	
	int n,sqroot;
	printf("Please enter the number to compute its square root\n ");
	scanf("%d", &n);
	sqroot = squareroot(n);
	printf("the Square root of the number:%d is %d",n,sqroot);
	return 0;

}
//square root logic
int squareroot(int n){
	
	if (0 == n | 1 == n)
		return n;
	int i=1,result =1;
	while(result <= n){
		i++;
		result =i*i;
		}
	return i-1;

}

