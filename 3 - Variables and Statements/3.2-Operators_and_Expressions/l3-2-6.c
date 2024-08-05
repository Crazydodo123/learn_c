#include <stdio.h>

int main(void)
{
    int x = 4, y = 25;

    // Do something if x is less than 10 and y is greater than 20
    if (x < 10 && y > 20)
        printf("Doing something!\n");  

    x = 15;
    if (!(x < 12))      // Parentheses are used since '!' has higher precedence than other Boolean operators
        printf("x is not less than 12\n");

    // Equivalent to:
    if (x >= 12)
        printf("x is not less than 12\n");
}