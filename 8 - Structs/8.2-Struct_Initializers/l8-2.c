#include <stdio.h>

int main(void)
{
    struct car {
        char *name;
        float price;
        int speed;
    };
    
    // Now with an initializer! Same field order as in the struct declaration:
    struct car saturn = {"Saturn SL/2", 16000.99, 175};

    struct car saturn_2 = { .speed=175, .name="Saturn SL\2"};

    printf("Name:           %s\n", saturn.name);
    printf("Price (USD)     %f\n", saturn.price);
    printf("Top speed (km): %d km\n", saturn.speed);
}