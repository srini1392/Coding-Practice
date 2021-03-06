#include <stdio.h>
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1

int endianess();

int main()
{
	int value;
	value = endianess();
	if (1 == value)
		printf("The system is little endian\n");
	else
		printf("THe system is big endian\n");
	return 0;


}


int endianess()
{
	//use an integer word with 1 as value, check its address when its stored
	//if starting address holds 1, its little endian, else its big endian
	short int word = 0x0001;
	char *byte = (char*) &word;
	return (byte[0] ? LITTLE_ENDIAN:BIG_ENDIAN);

}

