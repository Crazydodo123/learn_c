#include <stdio.h>

void foo();
void foo(void);     // Not the same!
// Leaving `void` out of the function prototype indicates no additional information
// about the parameters to the function

int main(void)
{
    foo();
}

void foo()  // Should really have a `void` in there
{
    printf("Hello, world!\n");
}