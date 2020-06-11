#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//For strings
void isPalindrome (char str[]){

    //star from leftmost to rightmost corners of string
    int l = 0;
    int h = strlen(str) -1;

    //comapre characters while they are same
    while (h > l){
        
        if (str[l++] != str[h--]){
            printf("%s is not a Palindrome\n", str);
            return;
        }
    }
    printf("%s is a Palindrome\n", str);
}

//Palindrome for string
int is_palindrome(char *str)
{
    char *last = str + strlen(str) - 1;
    unsigned int half = strlen(str) / 2;

    do
    {
        char a, b;
        
        a = tolower(*str);
        b = tolower(*last);
        
        int test = (a == b);
        
        if (!test) return 0;
        
        printf("%c %c -- %u %u\n", *str, *last, half, test);
        printf("%c %c -- %u %u\n",    a,     b, half, test);
        
        str++; last--;
    }
    while (half--);
    
    return 1;
}






//for Integers
int Palindrome_num (int num){

    int n, reversedInteger = 0, remainder, originalInteger;
    originalInteger = num;

    while(num!=0)
    {
        remainder = num % 10;
        reversedInteger = reversedInteger*10 + remainder;
        num /= 10;
    }

    if (originalInteger == reversedInteger)
        printf("%d is a palindrome", originalInteger);
    else
        printf("%d is not a palindrome", reversedInteger);
    
}


int main(){
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    Palindrome_num(1001);

    char *str = "deleveled";
    printf("%d", is_palindrome(str));

    return 0;
}
