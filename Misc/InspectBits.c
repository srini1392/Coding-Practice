#include <stdio.h>
#include <stdlib.h>

// to find if consecutive bits are set
int inspect_bits(unsigned int number) {
    int cur, prev = 0;
    while (number > 0) {
        cur = number & (-number);
        if (prev * 2 == cur) {
            return 1;
        }
        number -= cur;
        prev = cur;
    }
    return 0;
}

int main(){

    int num = 6;
    printf("%d", inspect_bits(num));


}
