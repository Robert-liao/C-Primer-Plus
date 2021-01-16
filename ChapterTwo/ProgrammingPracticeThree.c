#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age);
    printf("Your age is %d,Total %d days", age, age * 365);
    return 0;
}