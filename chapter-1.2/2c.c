#include<stdio.h>
#include<math.h>

int main()
{
    double x, res;

    scanf("%lf", &x);

    res = asin(x/2);

    printf("%.2lf", res);

    return 0;
}