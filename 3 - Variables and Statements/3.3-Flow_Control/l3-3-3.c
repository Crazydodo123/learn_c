#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Using a while statement
    int i = 10;

    // This is not executed because i is not less than 10:
    while (i < 10) {
        printf("while: i is %d\n", i);
        i++;
    }

    // Using a do-while statement
    i = 10;

    // This is executed once, because the loop condition is not checked until
    // after the body of the loop runs
    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);

    int r;

    do {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r != 37);

    printf("All done!\n");
}