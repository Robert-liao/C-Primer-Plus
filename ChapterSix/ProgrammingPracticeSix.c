/**********************************************
*File name:     ProgrammingPracticeSix.c
*Description:   C primer plus 第六章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
//函数功能：程序打印一个表格，输入上下限。每一行打印一个整数，该数的平方和改善的立方。
int main()
{
    int UpperLimit, LowerLimit;
    printf("Please enter the number of LowerLimit in the table:");
    scanf("%d", &LowerLimit);
    printf("Please enter the number of UpperLimit in the table:");
    scanf("%d", &UpperLimit);
    for (int i = LowerLimit; i <= UpperLimit; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}