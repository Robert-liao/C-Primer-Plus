/**********************************************
*File name:     ProgrammingPracticeFive.c
*Description:   C primer plus 第八章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
/********************************************************************
*函数的实现：使用二分查找的策略来进行猜数。程序定义边界为0~100，目标数为50。
*          用户开始输入数据进行猜数，直到最后猜中，程序会输出猜数的次数。
********************************************************************/
int main()
{
    int ProgramGuess = 50, TargetValues, LeftBoundary = 0, RightBoundary = 100, count = 0;
    printf("Please enter the target number(%d~%d):",LeftBoundary,RightBoundary);
    scanf("%d", &TargetValues);
    while (1)
    {
        if (ProgramGuess == TargetValues)
        {
            count++;
            printf("Congratulations, guessed it,Used %d times, the program has exited\n", count);
            break;
        }
        else if (ProgramGuess < TargetValues)
        {
            count++;
            printf("Sorry, %d is guess so small\n", ProgramGuess);
            LeftBoundary = ProgramGuess+1;
            ProgramGuess = (LeftBoundary + RightBoundary) / 2;
        }
        else
        {
            count++;
            printf("Sorry, %d is guess big\n", ProgramGuess);
            RightBoundary=ProgramGuess-1;
            ProgramGuess = (LeftBoundary + RightBoundary) / 2;
        }
    }

    return 0;
}