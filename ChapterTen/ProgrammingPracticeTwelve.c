/******************************************
*File name:ProgrammingPracticeTwelve.c
*Description:C primer plus 第十章课后编程12题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
#define MONTHS 12
#define YEARS 5
/***************************************************************
*函数名：fun
*函数功能：计算每年的总降水量、年平均降水量和5年中每月的平均降水量
*输入参数：float类型的二维数组
*输出参数：年平均降水量和5年中每月的平均降水量
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
void fun(const float rain[][MONTHS]);
int main(void)
{
    const float rain[YEARS][MONTHS] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    fun(rain);
    printf("\n");
    return 0;
}
void fun(const float rain[][MONTHS])
{
    int year, month;
    float subtot, total;
    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    { // for each year, sum rainfall for each month
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot; // total for all years
    }
    printf("\nThe yearly average is %.1f inches.\n\n",
           total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
    for (month = 0; month < MONTHS; month++)
    { // for each month, sum rainfall over years
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot / YEARS);
    }
}