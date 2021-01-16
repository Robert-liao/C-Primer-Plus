#include <stdio.h>
#define WAGE 10.00             //资本工资
#define LengthOfWork 40        //工作时长
#define Overtime 1.5           //超出的时间按1.5倍算
#define BeforeWage 300         //前300美元
#define AfterWage 150          //续150美元
#define BeforeRate 0.15        //前300美元的税率
#define AfterRate 0.2          //续150美元的税率
#define Rest 0.25              //余下的税率
double BasicWage(float hour);  //算基础工资(也就是300以内的)
double NoBasicWge(float hour); //算300以后的工资
double TAXES(double wage);     //算税金
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