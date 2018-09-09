#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void swap (void *vp1, void *vp2, const size_t size) {
    char *buffer = (char *)malloc(sizeof(char)*size);
    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
    free(buffer);
}

int main()
{
    char *puppy = strdup("Wow");
    char *kitty = strdup("Mew");

    printf("%s, %s\n", puppy, kitty);
    swap1(&puppy, &kitty, sizeof(char *));
    printf("%s, %s\n", puppy, kitty);

    free(puppy);
    free(kitty);

    return 0;
}


void swap1(void *a, void *b, size_t width)
{
    void *temp = malloc(width);
    memcpy(temp, b, width);
    memcpy(b, a, width);
    memcpy(a, temp, width);
    free(temp);

}



































