#include<stdio.h>

int main()
{
    int x, res; //change type to double if you want to calculate fractions
    scanf("%d", &x); //x can only be integers

    res = x*x - 5*x + 12;

    printf("%d\n", res);
    return 0;
}