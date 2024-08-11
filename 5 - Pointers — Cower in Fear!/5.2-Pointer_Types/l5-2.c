#include <stdio.h>

int main(void)
{
    int i;      // i's type is "int"
    int *p;     // p's type is "pointer to an int", or "int-pointer"
    // p points to garbage when unintialized

    p = &i;     // p is assigned the address of i -- p now "points to" i
}