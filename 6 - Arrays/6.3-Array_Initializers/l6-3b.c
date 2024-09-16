#include <stdio.h>

int main(void)
{
    // this will cause the compiler to get cranky
    // int a[5] = {22, 37, 3490, 18, 95, 999}

    // however, this is the same as
    int a_1[5] = {22, 37, 3490};
    
    int a_2[5] = {22, 37, 3490, 0, 0};


    // this will create an array of length 100 filled with 0s
    int a_3[100] = {0};


    // we can also specify an index for the value
    int a_4[10] = {0, 11, 22, [5]=55, 66, 77};

    for (int i = 0; i < 10; i++) {
        printf("%d ", a_4[i]);
    }
    printf("\n");


    // it is also possible to put simple expressions as indices
    #define COUNT 5

    int a_5[COUNT] = {[COUNT-3]=3, 2, 1};

    for (int i = 0; i < 5; i++) {
        printf("%d ", a_5[i]);
    }
    printf("\n");


    // C is able to calculate the size of the array from the initializer
    int a_6[3] = {22, 37, 3490};

    // is the same as:
    
    int a_7[] = {22, 37, 3490};
}