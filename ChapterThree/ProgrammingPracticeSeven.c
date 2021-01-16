#include<stdio.h>
int main()
{
    double heigh;
    printf("Please enter your height/inch:");
    scanf("%lf",&heigh);
    printf("Your height in %lf cm",heigh*2.54);
    return 0;
}