#include<stdio.h>
#include<math.h>

int main()
{
    double x, e, result; 
    
    e = 2.71828; //value of e constant
    
    scanf("%lf", &x); //inputs x
    
    result = pow(e, (5*x-1)); //calculates e^(5x-1)

    printf("%.4lf\n", result);

    return 0;
}