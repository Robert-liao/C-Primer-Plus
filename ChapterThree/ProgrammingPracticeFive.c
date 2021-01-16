#include <stdio.h>
#include <math.h>
int main()
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age);
    printf("Your age corresponds %.2lf to seconds", age * (3.156 * pow(10, 7)));
    return 0;
}