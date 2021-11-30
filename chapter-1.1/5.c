#include<stdio.h>

int main()
{
    float pen, price; //price could be fraction

    scanf("%f%f", &pen, &price); // takes input for pen and price

    printf("%.2f\n", pen*price); //prints total price

    return 0;
}