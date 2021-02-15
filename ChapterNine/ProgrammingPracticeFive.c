/******************************************
*File name:ProgrammingPracticeFive.c
*Description:C primer plus 第九章课后编程5题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：larger_of
*函数功能：把两个形参替换为两个值中较大的值
*输入参数：两个double类型的指针
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
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
