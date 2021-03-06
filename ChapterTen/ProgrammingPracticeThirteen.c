/******************************************
*File name:ProgrammingPracticeThirteen.c
*Description:C primer plus 第十章课后编程13题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
#define ROW 3
#define CLOUMNSIZE 5 //二维数组的大小
/************************************************************
*函数名：input
*函数功能：向形参数组填入数据
*输入参数：double类型的二维数组
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
void input(double target1[][CLOUMNSIZE]);
/***************************************************************
*函数名：output
*函数功能：输出数组的内容
*输入参数：double类型的二维数组
*输出参数：数组的内容
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
void output(double target1[][CLOUMNSIZE]);
/***********************************************************
*函数名：AveragePerGroup
*函数功能：求取二维数组中每组数据的平均值
*输入参数：double类型的二维数组
*输出参数：每组数组的平均值
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
*************************************************************/
void AveragePerGroup(double target1[][CLOUMNSIZE]);
/*************************************************************
*函数名：average
*函数功能：求取二维数组的平均值
*输入参数：double类型的二维数组
*输出参数：无
*返回值：数组的平均值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
double average(double target1[][CLOUMNSIZE]);
/***************************************************************
*函数名：max
*函数功能：求取二维数组的最大值
*输入参数：double类型的二维数组
*输出参数：无
*返回值：数组中的最大值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
double max(double target1[][CLOUMNSIZE]);
/*************************************************
*函数名：PerAverage
*函数功能：计算数组的平均值
*输入参数：double类型的一维数组
*输出参数：无
*返回值：数组的平均值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************/
double PerAverage(double target[]);
int main()
{
    double TargetOne[ROW][CLOUMNSIZE];
    input(TargetOne);    //输入
    putchar('\n');
    output(TargetOne);   //输出
    putchar('\n');
    AveragePerGroup(TargetOne); //求每组的平均数
    putchar('\n');
    printf("Array average is %.1lf", average(TargetOne));//求所有数据的平均值
    putchar('\n');
    putchar('\n');
    printf("Array max is %.1lf", max(TargetOne)); //求最大值
    return 0;
}
void input(double target1[][CLOUMNSIZE]) //把用户输入的数据存储在二维数组中
{
    printf("Please enter 3 groups of numbers, each group contains 5 double type numbers:\n");
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < CLOUMNSIZE; j++)
        {
            scanf("%lf", &target1[i][j]);
        }
    }
}
void output(double target1[][CLOUMNSIZE]) //打印结果，输出数组的内容
{
    printf("Array is :\n");
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < CLOUMNSIZE; j++)
        {
            printf("%.1lf ", target1[i][j]);
        }
        putchar('\n');
    }
}
void AveragePerGroup(double target1[][CLOUMNSIZE]) //计算每组(5个)数据的平均值
{
    double Average[CLOUMNSIZE], Temporary = 0;
    for (size_t i = 0; i < ROW; i++)
    {
        Average[i] = PerAverage(target1[i]);
    }
    printf("average per group is :\n");
    for (size_t i = 0; i < ROW; i++)
    {
        printf("%lf ", Average[i]);
    }
    putchar('\n');
}
double PerAverage(double target[]) //计算一维数组的平均值，为上个函数提前布局
{
    double SUM = 0;
    for (size_t i = 0; i < CLOUMNSIZE; i++)
    {
        SUM += target[i];
    }
    return SUM / CLOUMNSIZE;
}
double average(double target1[][CLOUMNSIZE]) //计算所有数据的平均值，并将结果返回到主函数中然后显示出来
{
    double average = 0;
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < CLOUMNSIZE; j++)
        {
            average += target1[i][j];
        }
    }
    return average / (ROW * CLOUMNSIZE);
}
double max(double target1[][CLOUMNSIZE]) //计算所有数据中的最大值，并将结果返回到主函数中然后显示出来
{
    double max = target1[0][0];
    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < CLOUMNSIZE; j++)
        {
            if (max < target1[i][j])
            {
                max = target1[i][j];
            }
        }
    }
    return max;
}