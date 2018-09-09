#include <stdio.h>


char lower_upper(char); //function prototype

//conversion from lower case to upper case, by using ascii value of the letters
char lower_upper(char c1){
    char c2;
    c2 = (c1>='a' && c1 <='z') ? ('A' +c1 -'a'):c1;
    return (c2);
}

//driver program
int main()
{
    char lower, upper;
    printf("please enter a lowercase haracter: ");
    scanf("%c", &lower);
    upper = lower_upper(lower);
    printf("\n the Uppercase wquivalent is %c\n\n",upper);

}


