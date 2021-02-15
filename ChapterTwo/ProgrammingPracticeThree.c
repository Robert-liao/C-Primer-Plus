/**********************************************
*File name:    ProgrammingPracticeThree.c
*Description:   C primer plus 第2章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age:");
    scanf("%d", &age);
    printf("Your age is %d,Total %d days", age, age * 365);
    return 0;
}