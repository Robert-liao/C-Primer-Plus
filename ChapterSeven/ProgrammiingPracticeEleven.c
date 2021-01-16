#include <stdio.h>
#include <stdlib.h>
#define SPHAGNUMSELL 2.05
#define BEETSELL 1.15
#define CARROTSELL 1.09
#define DISCOUNTWITHIN$100 0.05
#define LESSorEQUAL5POUNDS 6.5
#define FIVEANDTWENTYPOUNDS 14
#define EVERYOVERTWENTYPOUNDS 0.5
void Count(char Inputvalue);
int main()
{
    char InputAlphabet;
    while (1)
    {
        printf("*******************************************\n");
        printf("a)Sphagnum\tb)beet\nc)carrot\tq)quit\n");
        printf("*******************************************\n");
        printf("Please enter the corresponding letter:\n");
        scanf("%c", &InputAlphabet);
        switch (InputAlphabet)
        {
        case 'a':
            Count(InputAlphabet);
            break;
        case 'b':
            Count(InputAlphabet);
            break;
        case 'c':
            Count(InputAlphabet);
            break;
        case 'q':
            Count(InputAlphabet);
            exit(0);
            break;
        }
        while (getchar() != '\n') //丢弃上面scanf语句残留下来的换行符，为下一次输入扫清障碍。
            continue;
    }
    return 0;
}
void Count(char Inputvalue)
{
    double ponuds, discout, FareAndPackaingFee;
    static double SunMoney = 0, weight = 0, DiscountSumMoney = 0;
    switch (Inputvalue)
    {
    case 'a':
        printf("Please enter the number of pounds ordered:");
        scanf("%lf", &ponuds);
        weight += ponuds;
        SunMoney += ponuds * SPHAGNUMSELL;
        DiscountSumMoney += SunMoney;
        break;
    case 'b':
        printf("Please enter the number of pounds ordered:");
        scanf("%lf", &ponuds);
        weight += ponuds;
        SunMoney += ponuds * BEETSELL;
        DiscountSumMoney += SunMoney;
        break;
    case 'c':
        printf("Please enter the number of pounds ordered:");
        scanf("%lf", &ponuds);
        weight += ponuds;
        SunMoney += ponuds * CARROTSELL;
        DiscountSumMoney += SunMoney;
        break;
    }
    if (Inputvalue == 'q')
    {
        if (SunMoney >= 100)
        {
            discout = SunMoney * DISCOUNTWITHIN$100;
            DiscountSumMoney = SunMoney - discout;
        }
        else
        {
            DiscountSumMoney = SunMoney;
        }

        if (weight <= 5)
        {
            FareAndPackaingFee = LESSorEQUAL5POUNDS;
        }
        else if (weight <= 20)
        {
            FareAndPackaingFee = FIVEANDTWENTYPOUNDS;
        }
        else
        {
            FareAndPackaingFee = FIVEANDTWENTYPOUNDS;
            FareAndPackaingFee += (weight - 20) * EVERYOVERTWENTYPOUNDS;
        }
        printf("weight=%lf\t\tDisCount=%lf\t\nFareANDpackingFree=%lf\tSUMMONEY=%lf\t\nDisCountSumMoney=%lf\tSunmoney=%lf\n",
               weight, discout, FareAndPackaingFee, SunMoney, DiscountSumMoney, DiscountSumMoney + FareAndPackaingFee);
    }
}