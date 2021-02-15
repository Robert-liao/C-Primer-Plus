/**********************************************
*File name:     ProgrammingPracticeEleven.c
*Description:   C primer plus 第七章课后编程11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <stdlib.h>
#define SPHAGNUMSELL 2.05             //洋藓的售价
#define BEETSELL 1.15                 //甜菜的售价
#define CARROTSELL 1.09               //胡萝卜的售价
#define DISCOUNTWITHIN$100 0.05       //100美元的订单的优惠
#define LESSorEQUAL5POUNDS 6.5        //少于或等于5磅的订单收取的运输费用
#define FIVEANDTWENTYPOUNDS 14        //5~20磅的订单收取的运输费用
#define EVERYOVERTWENTYPOUNDS 0.5     //超过20磅订单在14美元的基础上每续重1磅增加的费用
/****************************************************
* 函 数 名：Count
* 函数功能：计算售卖货物的总价，折扣，运输费用，同时显示所有
*          的购买信息
* 输入参数：购买的货物品种(char类型的变量)
* 输出参数：显示函数功能所述的所要显示的部分。
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：无
* 修改说明：无
*****************************************************/
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
        case 'a':  //洋藓
            Count(InputAlphabet);
            break;
        case 'b':  //甜菜
            Count(InputAlphabet);
            break;
        case 'c':  //胡萝卜
            Count(InputAlphabet);
            break;
        case 'q': //退出订购。
            Count(InputAlphabet);
            exit(0);
            break;
        }
        while (getchar() != '\n') //丢弃上面scanf语句残留下来的换行符，为下一次输入扫清障碍。
            continue;
    }
    return 0;
}
/***********************************************
*函数的实现：为达到真是模仿现实生活中买菜的情况，函数
*           会等待用户完成所有订单的选购然后再进行
*           结账的一系列处理。
************************************************/
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