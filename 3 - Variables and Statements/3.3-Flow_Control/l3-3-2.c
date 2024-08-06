#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }

    printf("All done!\n\n");

    while (1) {
        printf("1 is always true, so this repeats forever.\n");
    }
}