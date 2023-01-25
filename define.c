#include <stdio.h>

// #define PIZZACOST = 15;
const char NEWLINE = '\n';

int main(){

    float costoPizzas = 0;
    float pizzaCost = 5;
    float numberOfSlices = 3;
    costoPizzas = pizzaCost * numberOfSlices;
    printf("total bill: %f", costoPizzas);
}