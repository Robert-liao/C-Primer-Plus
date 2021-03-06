/******************************************
*File name:ProgrammingPracticeSeven.c
*Description:C primer plus 第十章课后编程7题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：copy_arr
*函数功能：将source数组中的number个元素拷贝至tareget数组中
*输入参数：无
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
*******************************************************/
void copy_arr(double tareget[], double source[], int number);
int main()
{
        double rain[5][12] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.2, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},
    };
    double target[5][12];
    for (size_t i = 0; i < 5; i++)
    {
        copy_arr(target[i], rain[i], 12);
    }
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 12; j++)
        {
            printf("%.1lf ", target[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
void copy_arr(double tareget[], double source[], int number)
{
    for (size_t i = 0; i < number; i++)
    {
        tareget[i] = source[i];
    }
}