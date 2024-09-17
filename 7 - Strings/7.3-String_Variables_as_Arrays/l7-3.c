#include <stdio.h>

int main(void)
{
    char s_1[14] = "Hello, world!";

    // or, if we were properly lazy and have the complier
    // figure the length for us:

    char s_2[] = "Hello, world!";

    for (int i = 0; i < 13; i++) {
        printf("%c\n", s_2[i]);       // The array syntax can still be used here
    }
}