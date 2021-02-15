/**********************************************
*File name:    ProgrammingPracticeNine.c
*Description:   C primer plus 第五章课后编程9题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/*************************************************************************
* 函 数 名：Temperatures
* 函数功能：利用华氏温度(形参)计算摄氏温度和开式温度，并以小数点后两位的精度显示
* 输入参数：华氏温度(double类型)
* 输出参数：3中不同温度值
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-15
* 其他说明：摄氏温度=5.0/9.0*（华氏温度-32.0）；开式温度=摄氏温度+273.16
* 修改说明：无
**************************************************************************/
void Temperatures(double temperatures);
int main()
{
    double TemPeraTure;
    printf("Please enter a temperature in Fahrenheit:");
    while (1)
    {
        /* code */
        if (scanf("%lf", &TemPeraTure) != 1)
        {
            /* code */
            break;
        }
        Temperatures(TemPeraTure);
        printf("Please enter a temperature in Fahrenheit:");
    }
    return 0;
}
void Temperatures(double temperatures)
{
    double Celsius;
    double KelvinTemperature;
    const double Five = 5.0, Nine = 9.0, ThirtyTwo = 32.0, Twohundred = 273.16;
    Celsius = 5.0 / 9.0 * (temperatures - 32.0);
    KelvinTemperature = Celsius + Twohundred;
    printf("temperatures is %.2lf\n", temperatures);
    printf("Celsius is %.2lf\n", Celsius);
    printf("KelvinTemperature is %.2lf\n", KelvinTemperature);
}