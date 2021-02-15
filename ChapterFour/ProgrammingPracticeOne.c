/**********************************************
*File name:    ProgrammingPracticeOne.c
*Description:   C primer plus 第四章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
//函数功能：输入名和姓，然后以“名,姓”的格式打印出来。
int main()
{
    char FirstNmae[10],LastName[10];
    printf("Please enter first and last name:\n");
    printf("Please enter first name:");
    scanf("%s",FirstNmae);
    printf("Please enter last name:");
    scanf("%s",LastName);
    printf("first name is %s,last name is %s\n",FirstNmae,LastName);
    return 0;
}