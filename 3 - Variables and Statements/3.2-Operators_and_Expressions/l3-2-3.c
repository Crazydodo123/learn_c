#include <stdio.h>

int main(void)
{
    int i = 0;
    i++;        // Add one to i (post-increment)
    i--;        // Subtract one from i (post-increment)

    // This is equivalent to:
    i += 1;
    i -= 1;

    // A pre-increment/decrement variant
    ++i;
    --i;

    // For example:
    i = 10;
    int j = 5 + i++;
    printf("%d, %d\n", i, j);

    i = 10;
    j = 5 + ++i;
    printf("%d, %d\n", i, j);

    printf("\n");

    // Another example (for loop):
    for (i = 0; i < 10; i++)
        printf("i is %d\n", i);
}