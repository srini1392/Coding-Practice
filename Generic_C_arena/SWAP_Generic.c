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
    swap(&puppy, &kitty, sizeof(char *));
    printf("%s, %s\n", puppy, kitty);

    free(puppy);
    free(kitty);

    return 0;
}





































