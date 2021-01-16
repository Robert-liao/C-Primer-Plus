#include <stdio.h>
void compare(double *min, double *middle, double *max);
int main()
{
    double a, b, c;
    printf("Please enter three floating point numbers:");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    compare(&a, &b, &c);
    printf("a=%lf,b=%lf,c=%lf", a, b, c);
    return 0;
}
void compare(double *min, double *middle, double *max)
{
    double Temporary;
    if (*min > *middle)
    {
        Temporary = *min;
        *min = *middle;
        *middle = Temporary;
    }
    if (*min > *max)
    {
        Temporary = *min;
        *min = *max;
        *max = Temporary;
    }
    if (*middle > *max)
    {
        Temporary = *middle;
        *middle = *max;
        *max = Temporary;
    }
}