/******************************************
*File name:ProgrammingPracticeTwowo.c
*Description:C primer plus 第十章课后编程2题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
/***************************************************************
*函数名：copy_arr
*函数功能：使用数组表示法将source数组中的number个元素拷贝至target数组中
*输入参数：两个double类型的数组和待拷贝的元素的个数
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
void copy_arr(double tareget[], double source[], int number);
/***************************************************************
*函数名：copy_ptr
*函数功能：使用指针表示法将source数组中的number个元素拷贝至target数组中
*输入参数：两个double类型的数组地址和待拷贝的元素的个数
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
void copy_ptr(double *tareget,double *source,int number);
/***************************************************************
*函数名：copy_ptrs
*函数功能：使用指针表示法将source数组中的内容拷贝至target数组中
*输入参数：两个double类型的数组地址以及source数组最后一个元素的地址
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
void copy_ptrs(double *target,double *source,double *numble);
int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    for (size_t i = 0; i <5; i++)
    {
        printf("%g\t",target1[i]);
        printf("%g\t",target2[i]);
        printf("%g\t",target3[i]);
    }
    
    return 0;
}
void copy_arr(double tareget[], double source[], int number)
{
    for (size_t i = 0; i < number; i++)
    {
        tareget[i]=source[i];
    }
}
void copy_ptr(double *tareget,double *source,int number)
{
      for (size_t i = 0; i < number; i++)
      {
          *(tareget++)=*(source++);
      }      
}
void copy_ptrs(double *target,double *source,double *numble)
{
    for(;source<numble;)
    {
        *(target++)=*(source++);
    }
}