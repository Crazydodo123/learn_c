#include <stdio.h>

int main(void)
{
    // Print numbers between 0 and 9, inclusive

    // Using a while statement
    int i = 0;
    while (i < 10) {
        printf("i is %d\n", i);
        i++;
    }

    printf("\n");

    // Do the same thing with a for-loop
    for (i = 0; i < 10; i++) {
        printf("i is %d\n", i);
    }


    // The comma operator can be used to do multiple things in each clause of the for loop
    printf("\n");
    for (int i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }


    // An empty for will run forever
    printf("\n");
    for (;;) {
        printf("I will print this again and again and again\n");
        printf("for all eternity until th eheat-death of the universe.\n");
        
        printf("Or until you hit CTRL-C\n");
    }
}