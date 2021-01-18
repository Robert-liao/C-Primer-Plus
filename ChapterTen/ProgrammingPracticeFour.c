/******************************************
*File name:ProgrammingPracticeFour.c
*Description:C primer plus 第十章课后编程4题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include<stdio.h>
/******************************************
*函数名：max
*函数功能：寻找形参数组中的最大值下标
*输入参数：int类型的数组以及数组的大小
*输出参数：无
*返回值：数组中最大值的下标(int类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
********************************************/
double max(double source[],int ArraySize);
int main()
{
      double source[10]={3.23,23.234,34.1,234.2,5454.234,423412.324,324.23,34.1,5,2};
      printf("MaxSubscript is %g",max(source,10));
}
double max(double source[],int ArraySize)
{
    double max=source[0],Subscript=0;
    for (size_t i = 1; i <ArraySize; i++)
    {
          if (max<source[i])
          {
              max=source[i];
              Subscript=i;
          }
    }
    return Subscript;
}