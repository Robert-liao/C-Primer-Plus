#include <stdio.h>
#include <stdlib.h>
#define GRADEONE 8.75
#define GRADETWO 9.93
#define GRADETHREE 10.00
#define GRADEFOUR 11.20
#define LengthOfWork 40 //工作时长
#define Overtime 1.5    //超出的时间按1.5倍算
#define BeforeWage 300  //前300美元
#define AfterWage 150   //续150美元
#define BeforeRate 0.15 //前300美元的税率
#define AfterRate 0.2   //续150美元的税率
#define Rest 0.25
double BasicWage(float hour, int InputValues);
double NoBasicWge(float hour, int InputValues);
double TAXES(double wage);
void Display(int InputValue);
int main()
{
    int InputValue;
    float hours, WageSum, Taxes, NetIncome;
    while (1)
    {
        printf("**********************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1)$8.75/hr\t2)$9.33/hr\n3)$10.00/hr\t4)$11.20/hr\n5)quit\n");
        printf("**********************************************************************\n");
        scanf("%d", &InputValue);
        switch (InputValue)
        {
        case 1:
            Display(InputValue);
            break;
        case 2:
            Display(InputValue);
            break;
        case 3:
            Display(InputValue);
            break;
        case 4:
            Display(InputValue);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("The input option is incorrect, please re-enter\n");
            break;
        }
    }
    return 0;
}
void Display(int InputValue)
{
    float hours, WageSum, Taxes, NetIncome;
    printf("Please enter the number of hours worked:");
    scanf("%f", &hours);
    if (hours <= 40)
    {
        WageSum = BasicWage(hours, InputValue);
        Taxes = TAXES(WageSum);
        NetIncome = WageSum - Taxes;
        printf("WageSum=%lf,Taxes=%lf,NetIncome=%lf\n", WageSum, Taxes, NetIncome);
    }
    else
    {
        WageSum = NoBasicWge(hours, InputValue);
        Taxes = TAXES(WageSum);
        NetIncome = WageSum - Taxes;
        printf("WageSum=%lf,Taxes=%lf,NetIncome=%lf\n", WageSum, Taxes, NetIncome);
    }
    printf("Please re-enter options\n");
}
double BasicWage(float hour, int InputValues)
{
    switch (InputValues)
    {
    case 1:
        return hour * GRADEONE;
        break;
    case 2:
        return hour * GRADETWO;
        break;
    case 3:
        return hour * GRADETHREE;
        break;
    case 4:
        return hour * GRADEFOUR;
        break;
    }
}
double NoBasicWge(float hour, int InputValues)
{
    float TemporaryVariables, sumBasicWge, OverWageSum;
    switch (InputValues)
    {
    case 1:
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADEONE;
        OverWageSum = TemporaryVariables * GRADEONE;
        return sumBasicWge + OverWageSum;
        break;
    case 2:
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADETWO;
        OverWageSum = TemporaryVariables * GRADETWO;
        return sumBasicWge + OverWageSum;
        break;
    case 3:
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADETHREE;
        OverWageSum = TemporaryVariables * GRADETHREE;
        return sumBasicWge + OverWageSum;
        break;
    case 4:
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADEFOUR;
        OverWageSum = TemporaryVariables * GRADEFOUR;
        return sumBasicWge + OverWageSum;
        break;
    }
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