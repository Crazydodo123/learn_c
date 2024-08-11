#include <stdio.h>

int main(void)
{
    int a1;
    int b1;

    // same thing as:
    int a2, b2;

    int a3;
    int *p3;

    // same thing as:
    int a4, *p4;


    // however,
    int *p1, q1;      // p is a pointer to an int; q is just an int.
    int* p2, q2;      // functionally identical to the line above


    // in the following line, a, d, f, i are pointers
    int *a, b, c, *d, e, *f, g, h, *i;
}