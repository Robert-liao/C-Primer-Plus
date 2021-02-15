/**********************************************
*File name:     ProgrammingPracticeEight.c
*Description:   C primer plus 第六章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/***********************************************************
*函数的实现：输入两个浮点数，并打印两数之差除以两数乘积的结果，
*           同时用户输入非数字之前，程序会循环处理用户输入的每对值。
**************************************************************/
int main()
{
    float numberOne, numberTwo;
    int count;
    printf("Please enter two floating point numbers:");
    while (1)
    {
        /* code */
        count = scanf("%f,%f", &numberOne, &numberTwo);
        if (count != 2 || numberOne < 0 || numberTwo < 0)
        {
            printf("The input data is illegal or missing data, the program has exited");
            break;
        }
        printf("The difference between two numbers divided by the product of two numbers ends in:%f", (numberOne - numberTwo) / (numberOne * numberTwo));
        printf("\nPlease enter two floating point numbers again:");
    }
    return 0;
}