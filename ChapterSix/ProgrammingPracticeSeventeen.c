/**********************************************
*File name:     ProgrammingPracticeSeventeen.c
*Description:   C primer plus 第六章课后编程17题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
/*************************************************
*函数的功能：本金100万，年利率8%，每年的最后一天取走10万。
*           程序应报告多少年后会取完钱。
****************************************************/
#include <stdio.h>
int main()
{
    double ChuckieLuckyMoney = 1000000;
    for (int year = 1;; year++)
    {
        ChuckieLuckyMoney += ChuckieLuckyMoney * 0.08;
        ChuckieLuckyMoney -= 100000.0;
        if (ChuckieLuckyMoney <= 0)
        {
            printf("%d", year);
            break;
        }
    }
    return 0;
}