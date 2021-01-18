/**********************************************
*File name:     ProgrammingPracticeFive.c
*Description:   C primer plus 第十章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-18
************************************************/
#include<stdio.h>
/******************************************
*函数名：max
*函数功能：返回形参数组中的最大值和最小值的差值
*输入参数：int类型的数组以及数组的大小
*输出参数：无
*返回值：最大值和最小值的差值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
********************************************/
double max(double source[],int ArraySize);
int main()
{
      double source[10]={3.23,23.234,34.1,234.2,5454.234,423412.324,324.23,34.1,5,2};
      printf("MaxSubscript is %lf",max(source,10));
}
double max(double source[],int ArraySize)
{
    double max=source[0],min=source[0],Subscript=0;
    for (size_t i = 1; i <ArraySize; i++)
    {
          if (max<source[i])
          {
              max=source[i];
              Subscript=i;
          }
          if(min>source[i])
          {
              min=source[i];
          }
    }
    return max-min;
}