#include <stdio.h>

int main(void)
{
    int row, col;
    
    int a[2][5] = {         // Initialize a 2D array
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, a[row][col]);
        }
    }
    printf("\n");

    // Make a 3x3 identity matrix
    int b[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", b[row][col]);
        }
        printf("\n");
    }
}