/**********************************************
*File name:    ProgrammingPracticeEight.c
*Description:   C primer plus 第3章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/********************************************************************
*函数的功能：1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
*           输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
**********************************************************************/
int main()
{
    double pitn, cup, ounce, spoon, TeaSpoon;
    printf("Please enter the number of cups:");
    scanf("%lf", &cup);
    printf("%lf cups equal %lf pint,%lf ounce,%lf spoon,%lf,TeaSpoon", cup, cup / 2, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);
    return 0;
}