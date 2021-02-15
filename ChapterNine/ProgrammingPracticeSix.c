/******************************************
*File name:ProgrammingPracticeSix.c
*Description:C primer plus 第九章课后编程6题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：compare
*函数功能：把三个形参变量中最小值放入第一个变量，中间值放入
*         第二个变量，最大值放入第3个变量。
*输入参数：三个double变量的地址
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
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