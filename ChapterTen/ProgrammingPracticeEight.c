/******************************************
*File name:ProgrammingPracticeEight.c
*Description:C primer plus 第十章课后编程8题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include<stdio.h>
/******************************************************
*函数名：copy_ptr
*函数功能：将source数组中的number个元素拷贝到tareget数组中
*输入参数：两个double类型的数组与一个int类型的待拷贝元素个数
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明：无
********************************************************/
void copy_ptr(double *tareget,double *source,int number);
int main()
{
    double source[7]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    double target[3];
    copy_ptr(target,source+2,3);
    for (size_t i = 0; i < 3; i++)
    {
       printf("%.1lf ",target[i]);
    }
    return 0;
}
void copy_ptr(double *tareget,double *source,int number)
{
      for (size_t i = 0; i < number; i++)
      {
          *(tareget++)=*(source++);
      }      
}