#include <stdio.h>
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