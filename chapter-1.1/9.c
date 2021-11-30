#include<stdio.h> 

int main()
{
    int apple; // number of apple/s
    float weight; // weight of apple in average (grams)
    
    scanf("%d%f", &apple, &weight); 

    weight = weight / 1000; // converted weight from grams to kilogram

    printf("%.2f\n", weight*apple);

    return 0;
}