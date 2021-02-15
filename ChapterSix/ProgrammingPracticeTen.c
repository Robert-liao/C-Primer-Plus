/**********************************************
*File name:     ProgrammingPracticeTen.c
*Description:   C primer plus 第六章课后编程10题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/****************************************************************
*函数的功能：输入上下限整数，程序计算从上限到下限范围内所有整数的平方和
*           并显示结果。程序一直循环，直到输入的上限整数等于或小于下限
*           整数为止。
*****************************************************************/
int main()
{
    int UpperLimit, LowerLimit;
    int sum = 0, count = 0;
    printf("Enter lower and upper integer limits:");
    while (1)
    {
        /* code */

        count = scanf("%d %d", &LowerLimit, &UpperLimit);
        if (count != 2 || UpperLimit == LowerLimit||UpperLimit<LowerLimit)
        {
            printf("Done");
            break;
        }
        for (int i = LowerLimit; i <= UpperLimit; i++)
        {
            /* code */
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d", LowerLimit * LowerLimit, UpperLimit * UpperLimit, sum);
        printf("\nEnter next set of limits:");
        sum = 0;
    }
}