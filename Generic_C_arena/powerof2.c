#include <stdio.h>

int main(){

int x = 9;
if((!x & (x-1)) && x)
	printf("is power of 2");
else
	printf("is not power of 2");

}
