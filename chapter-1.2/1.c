#include<stdio.h>

int main()
{
    int apple;
    double weight;

    scanf("%d%lf", &apple, &weight); //inputs average weight in gram

    weight = weight / 1000; //converting gram to killogram

    printf("%.2lf\n", weight*apple); //total weight

    return 0;
}