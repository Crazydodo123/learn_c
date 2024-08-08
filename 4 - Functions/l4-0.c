#include <stdio.h>

int plus_one(int n)
{
    return n + 1;
}

void hello(void) {
    printf("Hello, world!\n");
}

int main(void)
{
    int i = 10, j;

    j = plus_one(i);    // The "call"

    printf("i + 1 is %d\n", j);
    hello();            // Prints "Hello, world!"
}