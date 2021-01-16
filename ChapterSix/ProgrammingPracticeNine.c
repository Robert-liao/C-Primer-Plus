#include <stdio.h>
float functionOne(float a, float b);
int main()
{
    float numberOne, numberTwo;
    int count;
    printf("Please enter two floating point numbers:");
    while (1)
    {
        /* code */
        count = scanf("%f,%f", &numberOne, &numberTwo);
        if (count != 2 || numberOne < 0 || numberTwo < 0)
        {
            printf("The input data is illegal or missing data, the program has exited");
            break;
        }
        printf("The difference between two numbers divided by the product of two numbers ends in:%f", functionOne(numberOne, numberTwo));
        printf("\nPlease enter two floating point numbers again:");
    }

    return 0;
}
float functionOne(float a, float b)
{
    return (a - b) / (a * b);
}