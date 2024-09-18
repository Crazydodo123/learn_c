#include <stdio.h>

int main(void)
{
    char *s = "Hello, world!";
    char t[] = "Hello, again!";

    // s[0] = 'z';          BAD NEWS: tried to mutate a string literal!

    t[0] = 'z';

    printf("%s\n", t);      // "zello, again!"
}