#include<stdio.h>

int main()
{
    int e, b, r; //e = egg I bought; b = broken in the way; r = remains

    scanf("%d%d", &e, &b); //inputs the egg and broken counts
    
    r = e - b; //calculates remains

    printf("%d\n", r); //prints remained egg count

    return 0;
}