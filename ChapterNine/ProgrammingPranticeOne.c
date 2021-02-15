/******************************************
*File name:ProgrammingPracticeOne.c
*Description:C primer plus 第九章课后编程1题
*Version:1.0
*Author:Robert
*Create time:2021-1-25
********************************************/
#include<stdio.h>
/*****************************************************
*函数名：min
*函数功能：返回两个double类型的最小值
*输入参数：两个double类型变量
*输出参数：无
*返回值：两值的最小值(double类型)
*Author:Robert
*Create time:2021-1-25
*其他说明：
*修改说明无：
*******************************************************/
double min(double x,double y);
int main()
{
    double one ,two;
    printf("Please enter two numbers:\n");
    scanf("%lf,%lf",&one,&two);
    printf("firstNumbert=%lf,secondNumber=%lf,min=%lf",one,two,min(one,two));
    return 0;
}
double min(double x,double y)
{
    return x<y?x:y;
}