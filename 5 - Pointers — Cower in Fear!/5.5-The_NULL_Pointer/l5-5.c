#include <stdio.h>

int main(void)
{
    int *p = NULL;

    *p = 12;     // CRASH or SOMETHING PROBABLY BAD. BEST AVOIDED
}