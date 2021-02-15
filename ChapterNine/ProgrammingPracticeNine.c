/******************************************
*File name:ProgrammingPracticeNine.c
*Description:C primer plus 第九章课后编程9题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：power
*函数功能：计算n的p次幂
*输入参数：一个double类型和一个int类型
*输出参数：无
*返回值：n的p次幂(double类型)
*Author:Robert
*Create time:2021-1-25
*其他说明：函数在处理0的任何次幂都为0，任何数的0次幂都为1
*         同时函数报告0的0次幂未定义，会将该值处理为1
*修改说明无：
*******************************************************/
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