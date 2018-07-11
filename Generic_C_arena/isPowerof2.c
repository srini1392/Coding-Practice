#include <stdio.h>
#include <math.h>
#include <stdlib.h>

_Bool isPower(int);
_Bool is_Power(int);

int main(){
	
	int num;
	printf("enter the number to find if its power of 2: \n");
	scanf("%d",&num);
	isPower(num)? printf("yes \n"): printf("no\n");
}



_Bool is_Power (int num){
	
	return (ceil(log2(num)) == floor(log2(num)));

}


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



