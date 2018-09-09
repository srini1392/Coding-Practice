#include <stdio.h>


/* *************************************************************************************
 * example 1
 *
int add(int a, int b){
	return a+b;
}

int main()
{
	int result;
	int (*ptr)(int, int); //function pointer declaration
	ptr = add; // function pointer pointing to the function add
	result = add(5,10);
	printf("the sum is %d\n",result);	
}

*/


/***************************************************************************************
 * example 2
 *
void printhello(char *name){
	printf("Hello %s",name);
}

int main(){
	void (*ptr)(char*);
	ptr = printhello;
	ptr("Srini");

}

*/



/* **************************************************************************************
 * Example 3
 *

void A (){
 	printf("hello..");
}

void B (void (*ptr)()){
	ptr();
}

int main(){
	void (*ptr)() = A;
	B(A);

}

*/

/****************************************************************************************/





