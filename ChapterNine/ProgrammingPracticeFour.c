/******************************************
*File name:ProgrammingPracticeFour.c
*Description:C primer plus 第九章课后编程4题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include<stdio.h>
/*****************************************************
*函数名：HarmonicMean
*函数功能：计算两形参的调和平均数
*输入参数：两个double类型的变量
*输出参数：无
*返回值：两形参的调和平均数(double类型)
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
double HarmonicMean(double x,double y);
int main()
{
    double one ,two;
    printf("Please enter two floating point numbers:");
    scanf("%lf,%lf",&one,&two);
    printf("Harmonic mean=%lf\n",HarmonicMean(one,two));
    return 0;
}
/******************************************************
*函数的实现：先得到两数的倒数，然后计算两个倒数的平均值，最后
*           取计算结果的倒数
********************************************************/
double HarmonicMean(double x,double y)
{
        return 1/((1/x+1/y)/2);
  
}