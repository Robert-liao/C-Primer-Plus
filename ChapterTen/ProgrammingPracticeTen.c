/******************************************
*File name:ProgrammingPracticeTen.c
*Description:C primer plus 第十章课后编程10题
*Version:1.0
*Author:Robert
*Create time:2021-1-18
********************************************/
#include <stdio.h>
/*****************************************************
*函数名：sum
*函数功能：将source1数组和source2数组中的内容相加存储到
*         target数组中
*输入参数：三个int类型的一维数组以及一维数组的大小
*输出参数：无
*返回值：无
*Author:Robert
*Create time:2021-1-18
*其他说明：无
*修改说明无：
*******************************************************/
void sum(int source1[], int source2[], int target[], int arraysize);
#define ARRAYSIZE 5
int main()
{
    int SourceOne[ARRAYSIZE] = {2, 4, 5, 8, 10},
        SourceTwo[ARRAYSIZE] = {1, 0, 4, 6, 10},
        Sum[ARRAYSIZE];
    sum(SourceOne, SourceTwo, Sum, ARRAYSIZE);
    printf("Sum Array is:\n");
    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        printf("%d ", Sum[i]);
    }

    return 0;
}
void sum(int source1[], int source2[], int target[], int arraysize)
{
    for (size_t i = 0; i < arraysize; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}