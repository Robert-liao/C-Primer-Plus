/**********************************************
*File name:     ProgrammingPracticeThree.c
*Description:   C primer plus 第七章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/****************************************************************
*函数的实现：程序读取整数直到用户输入0结束，程序应报告输入偶数(不包括0)
*           的个数，这些偶数的平均值、输入的奇数个数以及奇数的平均值。
*****************************************************************/
int main()
{
    printf("Please enter a series of integers (0 ending):");
    int value, evenCount = 0, OddNumber = 0, evevSum = 0, OddNumberSum = 0;
    while (1)
    {
        scanf("%d", &value);
        if (value == 0)
            break;
        if (value % 2 == 0)
        {
            evenCount++;
            evevSum += value;
        }
        else
        {
            OddNumber++;
            OddNumberSum += value;
        }
    }
    printf("The even number is %d,sum=%d,average=%d\n", evenCount, evevSum, evevSum / evenCount);
    printf("The odd Number is %d,sum=%d,average=%d\n", OddNumber, OddNumberSum, OddNumberSum / OddNumber);
    return 0;
}