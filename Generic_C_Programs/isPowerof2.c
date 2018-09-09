#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//function prototype
_Bool isPower(int);
_Bool is_Power(int);

//driver program
int main(){
	
	int num;
	printf("enter the number to find if its power of 2: \n");
	scanf("%d",&num);
	isPower(num)? printf("yes \n"): printf("no\n");

	/*
	if((!x & (x-1)) && x)
	printf("is power of 2");
	else
	printf("is not power of 2");
	*/
}



//find the difference between the max and min value of log2 of the number to check if its power of 2
_Bool is_Power (int num){
	
	return (ceil(log2(num)) == floor(log2(num)));

}

//use the modulo operator of 2, on the number to infer if its power of 2
_Bool isPower (int num){

	if (num == 0)
	return 0;
	
	while (num != 1){

		if (num % 2 != 0)
			return 0;

		num = num /2;

	}
	return 1;


}





