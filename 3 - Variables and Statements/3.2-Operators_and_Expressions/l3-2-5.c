#include <stdio.h>

int main(void)
{
    int a = 1, b = 0;

    a == b;     // True if a is equivalent to b
    a != b;     // True if a is not equivalent to b
    a < b;      // True if a is less than b
    a > b;      // True if a is greater than b
    a <= b;     // True if a is less than or equal to b
    a >= b;     // True if a is greater than or equal to b

    if (a <= 10)
        printf("Success!\n");
}