#include <stdio.h>

/* Loop through all the bits of an integer. If a bit at ith position is set in the i/p no. then set the bit at (NO_OF_BITS – 1) – i in o/p. 
Where NO_OF_BITS is number of bits present in the given number.*/
unsigned int reverseBits(unsigned int num)
{
    unsigned int  NO_OF_BITS = sizeof(num) * 8;
    unsigned int reverse_num = 0;
    int i;
    for (i = 0; i < NO_OF_BITS; i++)
    {
        if((num & (1 << i)))
           reverse_num |= 1 << ((NO_OF_BITS - 1) - i);  
   }
    return reverse_num;
}


unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
     
    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift 
        // 'rev' by 1
        rev <<= 1;
         
        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;
         
        // bitwise right shift 
        // 'n' by 1
        n >>= 1;
             
    }
     
    // required number
    return rev;
}


int main()
{

    unsigned int x; 
	printf("enter the number to be reversed:");
	scanf("%d",&x);
    printf("%u", reverseBits(x));
    getchar();
}