#include <stdio.h>
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