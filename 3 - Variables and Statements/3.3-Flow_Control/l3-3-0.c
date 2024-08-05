#include <stdio.h>

int main(void)
{
    int x = 10;

    // Single statement ifs
    if (x == 10) printf("x is 10\n");
    if (x == 10)
        printf("x is 10\n\n");

    // Block statement ifs
    if (x == 10) {
        printf("x is 10\n");
        printf("And also this happens when x is 10\n\n");
    }


    // It's common to use braces even when they aren't necessary
    if (x == 10) {
        printf("x is 10\n\n");
    }

    // To prevent code like this from happening
    if (x == 10)
        printf("This happens if x is 10\n");
        printf("This happens ALWAYS\n");        // Surprise!! Unconditional!
}