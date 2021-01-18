/******************************************
*File name:ProgrammingPracticeNine.c
*Description:C primer plus 第十章课后编程9题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include<stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 5
/*************************************************************
*函数名：copy
*函数功能：采用变长数组的方式，将source数组的内容拷贝至target数组中
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*         和一个double类型的二维数组
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
**************************************************************/
void copy(int RowSize,int ColumnSize,double target[RowSize][ColumnSize],double source[3][5]);
/*************************************************************
*函数名：display
*函数功能：显示变长数组的内容
*输入参数：二维数组的行数和列数以及用前面行数和列数做维度的二维数组
*输出参数：数组的内容
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
**************************************************************/
void display(int RowSize,int ColumnSize,double target[RowSize][ColumnSize]);
int main()
{
    double source[ROWSIZE][COLUMNSIZE]={
        {1.1,2.2,3.3,4.4,5.5},
        {6.6,7.7,8.8,9.9,10.1},
        {11.1,12.2,13.3,14.4,15.5},
    },Target[ROWSIZE][COLUMNSIZE];
    copy(ROWSIZE,COLUMNSIZE,Target,source);
    printf("Target Array is :\n");
    display(ROWSIZE,COLUMNSIZE,Target);
    putchar('\n');
    printf("source Array is :\n");
    display(ROWSIZE,COLUMNSIZE,source);
    return 0;
}
void copy(int RowSize,int ColumnSize,double target[RowSize][ColumnSize],double source[][COLUMNSIZE])
{
    for (size_t i = 0; i < RowSize; i++)
    {
        for (size_t j = 0; j < ColumnSize; j++)
        {
         target[i][j]=source[i][j];     
        }     
    }
}
void display(int RowSize,int ColumnSize,double target[RowSize][ColumnSize])
{
    for (size_t i = 0; i < RowSize; i++)
    {
       
       for (size_t j = 0; j < ColumnSize; j++)
       {
           printf("%.1lf ",target[i][j]);
       }
       putchar('\n');
    }
    
}