/**********************************************
*File name:     ProgrammingPracticeTen.c
*Description:   C primer plus 第七章课后编程10题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <stdlib.h>
/*******************************************************************
* 函 数 名：SINGLE(单身——17850美元按15%计，超出部分按28%计)
* 函数功能：根据输入的收入来求取税金
* 输入参数：无
* 输出参数：显示收入，税金以及净收入
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数只适用于工作时长不超过40小时(即不存在加班现象)的情况
* 修改说明：无
********************************************************************/
void SINGLE();
/*********************************************************************
* 函 数 名：HeadOfHousehold(户主——23900美元按15%计，超出部分按28%计)
* 函数功能：根据输入的收入来求取税金
* 输入参数：无
* 输出参数：显示收入，税金以及净收入
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数只适用于工作时长不超过40小时(即不存在加班现象)的情况
* 修改说明：无
********************************************************************/
void HeadOfHousehold();
/*********************************************************************
* 函 数 名：MarriedShare(已婚，共有——29750美元按15%计，超出部分按28%计)
* 函数功能：根据输入的收入来求取税金
* 输入参数：无
* 输出参数：显示收入，税金以及净收入
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数只适用于工作时长不超过40小时(即不存在加班现象)的情况
* 修改说明：无
********************************************************************/
void MarriedShare();
/*********************************************************************
* 函 数 名：MarriedDivorced(已婚，离异——14875美元按15%计，超出部分按28%计)
* 函数功能：根据输入的收入来求取税金
* 输入参数：无
* 输出参数：显示收入，税金以及净收入
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数只适用于工作时长不超过40小时(即不存在加班现象)的情况
* 修改说明：无
********************************************************************/
void MarriedDivorced();
int main()
{
    int InputCategoryValue;
    while (1)
    {
        printf("******************************************************************************\n");
        printf("Please enter the number corresponding to the given category:\n");
        printf("1)single\t\t2)Head of household\t\n3)Married, share\t4)Married, divorced\n5)quit\n");
        printf("******************************************************************************\n");
        scanf("%d", &InputCategoryValue);
        switch (InputCategoryValue)
        {
        case 1:
            SINGLE();
            break;
        case 2:
            HeadOfHousehold();
            break;
        case 3:
            MarriedShare();
            break;
        case 4:
            MarriedDivorced();
            break;
        case 5:
            printf("Program has exited\n");
            exit(0);
            break;
        default:
            printf("The input option is incorrect, please re-enter\n");
            break;
        }
    }
    return 0;
}
void SINGLE()
{
    double income;
    printf("Please enter income:");
    scanf("%lf", &income);
    if (income <= 17850)
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * income, income - 0.15 * income);
    }
    else
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * 17850 + 0.28 * (income - 17850),
               income - (0.15 * 17850 + 0.28 * (income - 17850)));
    }
}
void HeadOfHousehold()
{
    double income;
    printf("Please enter income:");
    scanf("%lf", &income);
    if (income <= 23900)
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * income, income - 0.15 * income);
    }
    else
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * 23900 + 0.28 * (income - 23900),
               income - (0.15 * 23900 + 0.28 * (income - 23900)));
    }
}
void MarriedShare()
{
    double income;
    printf("Please enter income:");
    scanf("%lf", &income);
    if (income <= 29750)
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * income, income - 0.15 * income);
    }
    else
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * 29750 + 0.28 * (income - 29750),
               income - (0.15 * 29750 + 0.28 * (income - 29750)));
    }
}
void MarriedDivorced()
{
    double income;
    printf("Please enter income:");
    scanf("%lf", &income);
    if (income <= 14875)
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * income, income - 0.15 * income);
    }
    else
    {
        printf("income=%lf,Taxes=%lf,After tax=%lf\n", income, 0.15 * 14875 + 0.28 * (income - 14875),
               income - (0.15 * 14875 + 0.28 * (income - 14875)));
    }
}