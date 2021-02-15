/**********************************************
*File name:     ProgrammingPracticeSeven.c
*Description:   C primer plus 第八章课后编程7题。
*               内容与第7章的第8题基本一样，只是
*               用字符代替了数字标记菜单的选项。
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
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
double BasicWage(float hour, char InputValues);
double NoBasicWge(float hour, char InputValues);
double TAXES(double wage);
void Display(char InputValue);
int main()
{
    char InputValue;
    float hours, WageSum, Taxes, NetIncome;
    while (1)
    {
        printf("**********************************************************************\n");
        printf("Enter the litter corresponding to the desired pay rate or action:\n");
        printf("A)$8.75/hr\tB)$9.33/hr\nC)$10.00/hr\tD)$11.20/hr\nQ)quit\n");
        printf("**********************************************************************\n");
        scanf("%c", &InputValue);
        switch (InputValue)
        {
        case 'A':
            Display(InputValue);
            break;
        case 'B':
            Display(InputValue);
            break;
        case 'C':
            Display(InputValue);
            break;
        case 'D':
            Display(InputValue);
            break;
        case 'Q':
            exit(0);
            break;
        default:
            printf("The input option is incorrect, please re-enter\n");
            break;
        }
    }
    return 0;
}
void Display(char InputValue)
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
double BasicWage(float hour, char InputValues)
{
    switch (InputValues)
    {
    case 'A':
        return hour * GRADEONE;
        break;
    case 'B':
        return hour * GRADETWO;
        break;
    case 'C':
        return hour * GRADETHREE;
        break;
    case 'D':
        return hour * GRADEFOUR;
        break;
    }
}
double NoBasicWge(float hour, char InputValues)
{
    float TemporaryVariables, sumBasicWge, OverWageSum;
    switch (InputValues)
    {
    case 'A':
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADEONE;
        OverWageSum = TemporaryVariables * GRADEONE;
        return sumBasicWge + OverWageSum;
        break;
    case 'B':
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADETWO;
        OverWageSum = TemporaryVariables * GRADETWO;
        return sumBasicWge + OverWageSum;
        break;
    case 'C':
        TemporaryVariables = (hour - 40) * 1.5;
        sumBasicWge = 40 * GRADETHREE;
        OverWageSum = TemporaryVariables * GRADETHREE;
        return sumBasicWge + OverWageSum;
        break;
    case 'D':
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