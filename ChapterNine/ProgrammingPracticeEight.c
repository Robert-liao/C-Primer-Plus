#include <stdio.h>
double power(double n, int p);
int main()
{
    double x, xpow;
    int exp;
    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised.Enter q to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}
double power(double n, int p)
{
    double pow = 1;
    if (n == 0)
    {
        if (p == 0)
        {
            printf("The power of 0 is undefined, and it is estimated to return 0.\n");
            return 1;
        }
        return 0;
    }
    else if (p == 0)
    {

        return 1;
    }
    else if (p > 0)
    {
        for (int i = 1; i <= p; i++)
        {
            pow *= n;
        }
    }
    else   //计算负幂
    {
        pow =1.0/power(n, -p);
    }
    return pow;
}