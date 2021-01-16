#include<stdio.h>
double CUBE(double value);
int main()
{
    double number;
    printf("Please enter a number:");
    scanf("%lf",&number);
    printf("The cube of this number is %lf",CUBE(number));
    return 0;
}
double CUBE(double value)
{
   return value*value*value;
}