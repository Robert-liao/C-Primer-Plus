/******************************************
*File name:ProgrammingPracticeThree.c
*Description:C primer plus 第十章课后编程3题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include<stdio.h>
/***************************************************************
*函数名：max
*函数功能：求取一维数组的最大值
*输入参数：int类型的一维数组以及数组的大小
*输出参数：无
*返回值：数组中的最大值(int类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
int max(int source[],int ArraySize);
int main()
{
      int source[10]={3,23,34,234,555454,423412,324,34,5,234};
      printf("Max is %d",max(source,10));
}
int max(int source[],int ArraySize)
{
    int max=source[0];
    for (size_t i = 1; i <ArraySize; i++)
    {
          if (max<source[i])
          {
              max=source[i];
          }
    }
    return max;
}