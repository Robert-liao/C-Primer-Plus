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