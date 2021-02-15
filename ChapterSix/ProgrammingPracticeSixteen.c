/**********************************************
*File name:     ProgrammingPracticeSixteen.c
*Description:   C primer plus 第六章课后编程16题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/***********************************************************************
*函数的功能：A以10%的单利息投资了100美元(每年的投资获利相当于原始投资的10%),
*           B以5%的复合利息投资了100美元(利息是当前余额的5%，包含之前的利息)。
*           程序应报告多少年后B的投资额才会超过A。
************************************************************************/
int main()
{
    double SumMoneyDahpne = 100, SumMoneyDeirdre = 100;
    for (int year = 1;; year++)
    {
        SumMoneyDahpne += 100 * 0.1;
        SumMoneyDeirdre += SumMoneyDeirdre * 0.05;
        if (SumMoneyDahpne < SumMoneyDeirdre)
        {
            /* code */
            printf("%d %lf %lf", year, SumMoneyDahpne, SumMoneyDeirdre);
            break;
        }
    }
    return 0;
}