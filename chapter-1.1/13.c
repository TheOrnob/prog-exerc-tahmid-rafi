#include<stdio.h>

int main()
{
    int num, sum;
    scanf("%d", &num);

    sum = num % 10; //assigns last digit of num to sum. if num = 123, then sum becomes 3
    num = num / 10; //vanishes the last digit of num: 123 >> 12
    sum = sum + (num % 10); //assign sum+last digit of new num, in this case 2
    num = num / 10; // vanishes the last digit of new number 12 >> 1
    sum = num + sum; //add 1 and sum 
    printf("%d\n", sum); //prints sum

    return 0;
}