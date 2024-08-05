#include <stdio.h>

int main(void)
{
    // A uncommonly-used way to separate expressions
    int x = 10, y = 20;         // First assign 10 to x, then 20 to y

    // The followling line has two expressions, while the previous only has one expression
    x = 10; y = 20;     // First assign 10 to x, then 20 to y


    // The value of the comma expression is the value of the rightmost expression
    x = (1, 2, 3);
    printf("x is %d\n\n", x);   // Prints 3, because 3 is the rightmost in the comma list

    // A common place for comma operators is in for loops
    for (int i = 0, j = 10; i < 100; i++, j++)
        printf("%d, %d\n", i, j);
}