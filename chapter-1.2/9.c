#include<stdio.h>

int main()
{
    int i = 10, age, sum = 0;
    double avg;

    while(i){
        i--;
        scanf("%d", &age);
        sum = sum + age;
    }
    avg = sum / 10;
    printf("%.2lf\n", avg);

    return 0;
}