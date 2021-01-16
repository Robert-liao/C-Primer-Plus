#include <stdio.h>
void larger_of(double *one, double *two);
int main()
{
    double a,b;
    printf("Please enter two floating point numbers:");
    scanf("%lf,%lf",&a,&b);
    printf("a=%lf,b=%lf\n",a,b);
    larger_of(&a,&b);
    printf("After calling the function is a=%lf,b=%lf",a,b);
    return 0;
}
void larger_of(double *one, double *two)
{
    if (*one < *two)
    {
        *one = *two;
    }
    else
    {
        *two=*one;
    }
}
