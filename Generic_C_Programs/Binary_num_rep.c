#include <stdio.h>
void bin(unsigned n)
{
    /* step 1 */
    //The logic is actually to push the contents on to the stack, and continue with operation, later pop from stack
    if (n > 1)
        bin(n/2);
 
    /* step 2 */
    printf("%d", n % 2);
}

/*Main driver function to find the binary representation of an integer*/
int main(void)
{
    bin(7);
    printf("\n");
    bin(4);
}