#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

int main(void)
{
    struct car a, b;

    b = a;  // Copy the struct
}