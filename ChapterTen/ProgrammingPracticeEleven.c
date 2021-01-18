/******************************************
*File name:ProgrammingPracticeEleven.c
*Description:C primer plus 第十章课后编程11题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 5
/******************************************
*函数名：display
*函数功能：显示形参数组的内容
*输入参数：int类型的二维数组以及二维数组的行数
*输出参数：数组的内容(int类型)
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
********************************************/
void display(int target[][COLUMNSIZE], int row);
/******************************************
*函数名：twice
*函数功能：将形参数组的值翻倍
*输入参数：int类型的二维数组以及二维数组的行数
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
********************************************/
void twice(int target[][COLUMNSIZE], int row);
int main()
{
    int source[ROWSIZE][COLUMNSIZE]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    printf("The original value of the array is:\n");
    display(source,ROWSIZE);
    putchar('\n');
    printf("After the value of the array is doubled, it is:\n");
    twice(source,ROWSIZE);
    display(source,ROWSIZE);
    return 0;
}
void display(int target[][COLUMNSIZE], int row)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < COLUMNSIZE; j++)
        {
            printf("%d ", target[i][j]);
        }
    }
}
void twice(int target[][COLUMNSIZE], int row)
{
    for (size_t i = 0; i < row; i++)
    {
       for (size_t j = 0; j <COLUMNSIZE; j++)
       {
           target[i][j]*=2;
       }       
    }
}