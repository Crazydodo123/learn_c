#include <stdio.h>

int main(void)
{
    struct car {
        char *name;
        float price;
        int speed;
    };
    
    struct car saturn;  // Variable "saturn" of type "struct car"

    saturn.name = "Saturn SL/2";
    saturn.price = 15999.99;
    saturn.speed = 175;

    printf("Name:           %s\n", saturn.name);
    printf("Price (USD)     %f\n", saturn.price);
    printf("Top speed (km): %d km\n", saturn.speed);
}