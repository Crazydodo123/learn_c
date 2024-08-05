#include <stdio.h>

int main(void)
{
    int i = 10;

    if (i > 10) {
        printf("Yes, i is greater than 10.\n");
        printf("And this will also print if i is greater htan 10.\n\n");
    }

    if (i <= 10) printf("i is less than or equal to 10.\n\n");

    // This can be simplified to:
    i = 99;

    if (i == 10)
        printf("i is 10!\n");
    else {
        printf("i is decidedly not 10.\n");
        printf("Which irritates me a little, frankly.\n\n");
    }

    // 'else if' blocks can also be added
    if (i == 10)
        printf("is is 10!\n");
    
    else if (i == 20)
        printf("i is 20!\n");
    
    else if (i == 99) {
        printf("i is 99! My favorite\n");
        printf("I can't tell you how happy I am.\n");
        printf("Really.\n");
    }

    else
        printf("i is some crazy number I've never heard of.\n");
}