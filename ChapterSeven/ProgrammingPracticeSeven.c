/**********************************************
*File name:     ProgrammingPracticeSeven.c
*Description:   C primer plus 第七章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#define WAGE 10.00             //资本工资
#define LengthOfWork 40        //工作时长
#define Overtime 1.5           //超出的时间按1.5倍算
#define BeforeWage 300         //前300美元
#define AfterWage 150          //续150美元
#define BeforeRate 0.15        //前300美元的税率
#define AfterRate 0.2          //续150美元的税率
#define Rest 0.25              //余下的税率
/*********************************************************************
* 函 数 名：BasicWage
* 函数功能：求取工资的额度
* 输入参数：float类型的变量(工作的时长)
* 输出参数：无
* 返 回 值: 工资的额度
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数只适用于工作时长不超过40小时(即不存在加班现象)的情况
* 修改说明：无
********************************************************************/
double BasicWage(float hour);
/*********************************************************************
* 函 数 名：NoBasicWage
* 函数功能：求取工资的额度
* 输入参数：float类型的变量(工作的时长)
* 输出参数：无
* 返 回 值: 工资的额度
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：该函数适用于工作时长超过40小时(即存在加班现象)的情况
* 修改说明：无
********************************************************************/
double NoBasicWge(float hour); 
/****************************************************
* 函 数 名：TAXES
* 函数功能：求取税金
* 输入参数：double类型的变量(工资的总额)
* 输出参数：无
* 返 回 值: 税金的额度
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：无
* 修改说明：无
*****************************************************/
double TAXES(double wage);    
int main()
{
    float hours, WageSum, Taxes, NetIncome;
    printf("Please enter the number of hours worked in a week:");
    scanf("%f", &hours);
    if (hours <= 40)
    {
        WageSum = BasicWage(hours);
        Taxes = TAXES(WageSum);
        NetIncome = WageSum - Taxes;
        printf("WageSum=%lf,Taxes=%lf,NetIncome=%lf\n", WageSum, Taxes, NetIncome);
    }
    else
    {
        WageSum = NoBasicWge(hours);
        Taxes = TAXES(WageSum);
        NetIncome = WageSum - Taxes;
        printf("WageSum=%lf,Taxes=%lf,NetIncome=%lf\n", WageSum, Taxes, NetIncome);
    }
    return 0;
}
double BasicWage(float hour)
{
    return hour * WAGE;
}
double NoBasicWge(float hour)
{
    float TemporaryVariables, sumBasicWge, OverWageSum;
    TemporaryVariables = (hour - 40) * 1.5;
    sumBasicWge = 40 * WAGE;
    OverWageSum = TemporaryVariables * WAGE;
    return sumBasicWge + OverWageSum;
}
double TAXES(double wage)
{
    double Befor_300_Taxes, After_150_Taxes, RentTaxes;
    if (wage <= 300)
    {
        return wage * BeforeRate;
    }
    else
    {
        Befor_300_Taxes = 300 * BeforeRate;
        if (wage - 300 > 150)
        {
            After_150_Taxes = 150 * AfterRate;
            RentTaxes = (wage - 300 - 150) * Rest;
            return Befor_300_Taxes + After_150_Taxes + RentTaxes;
        }
        else
        {
            After_150_Taxes = (wage - 300) * AfterRate;
            return Befor_300_Taxes + After_150_Taxes;
        }
    }
}