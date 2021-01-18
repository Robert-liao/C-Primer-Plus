/******************************************
*File name:ProgrammingPracticeFourteen.c
*Description:C primer plus 第十章课后编程14题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
#define ROW 3
#define CLO 5
/************************************************************
*函数名：input
*函数功能：采用变长数组的方式，向形参数组填入数据
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
void input(int row, int cloumnsize, double target[][cloumnsize]);
/***************************************************************
*函数名：output
*函数功能：采用变长数组的方式，输出数组的内容
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：数组的内容
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
void output(int row, int cloumnsize, double target[][cloumnsize]);
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
/***********************************************************
*函数名：AveragePerGroup
*函数功能：求取变长二维数组中每组数据的平均值
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：每组数组的平均值
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
*************************************************************/
void AveragePerGroup(int row, int cloumnsize, double target[][cloumnsize]);
/*************************************************************
*函数名：average
*函数功能：求取变长二维数组的平均值
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：无
*返回值：数组的平均值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
***************************************************************/
double average(int row, int cloumnsize, double target[][cloumnsize]);
/***************************************************************
*函数名：max
*函数功能：求取变长二维数组的最大值
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：无
*返回值：数组中的最大值(double类型)
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
****************************************************************/
double max(int row, int cloumnsize, double target[][cloumnsize]) ;
int main()
{
    int row = ROW, cloumnsize = CLO;
    double source[ROW][CLO];
    input(row, cloumnsize, source);
    output(row, cloumnsize, source);
    AveragePerGroup(row,cloumnsize,source);
    printf("Array average is %g\n", average(row,cloumnsize,source));//求所有数据的平均值
    printf("Array max is %g\n", max(row,cloumnsize,source)); //求最大值
    return 0;
}
/********************************************************************************
*函数的实现：通过循环往数组内填入数据。填充完毕后，再次通过循环跳过scanf语句残留的换行符。
**********************************************************************************/
void input(int row, int cloumnsize, double target[][cloumnsize])
{
    printf("Please enter %d groups of numbers, each group contains %d double type numbers:\n", row, cloumnsize);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cloumnsize; j++)
        {
            scanf("%lf", &target[i][j]);
        }
    }
    while (getchar() != '\n')
    {
        continue;
    }
}
void output(int row, int cloumnsize, double target[][cloumnsize])
{

    printf("Array is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cloumnsize; j++)
        {
            printf("%g ", target[i][j]);
        }
        putchar('\n');
    }
}
double PerAverage(double target[]) //计算一维数组的平均值
{
    double SUM = 0;
    for (size_t i = 0; i < CLO; i++)
    {
        SUM += target[i];
    }
    return SUM / CLO;
}
void AveragePerGroup(int row, int cloumnsize, double target[][cloumnsize]) //计算每组(5个)数据的平均值
{                                                                       //将上面求一维数组的平均值的函数调用三次即可
    double Average[cloumnsize], Temporary = 0;
    for (size_t i = 0; i < ROW; i++)
    {
        Average[i] = PerAverage(target[i]);
    }
    printf("average per group is :\n");
    for (size_t i = 0; i < ROW; i++)
    {
        printf("%g ", Average[i]);
    }
    putchar('\n');
}
double average(int row, int cloumnsize, double target[][cloumnsize]) //计算所有数据的平均值，并将结果返回到主函数中然后显示出来
{
    double average = 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cloumnsize; j++)
        {
            average += target[i][j];
        }
    }
    return average / (row * cloumnsize);
}
double max(int row, int cloumnsize, double target[][cloumnsize]) //计算所有数据中的最大值，并将结果返回到主函数中然后显示出来
{
    double max = target[0][0];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cloumnsize; j++)
        {
            if (max < target[i][j])
            {
                max = target[i][j];
            }
        }
    }
    return max;
}