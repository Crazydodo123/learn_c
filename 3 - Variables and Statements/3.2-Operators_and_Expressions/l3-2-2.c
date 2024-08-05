#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    
    // If x > 10, add 17 to y. Otherwise add 37 to y.
    y += x > 10 ? 17 : 37;

    // The previous expression is equivalent to this non-expression:
    if (x > 10)
        y += 17;
    else
        y += 37;
    
    printf("the number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");
}