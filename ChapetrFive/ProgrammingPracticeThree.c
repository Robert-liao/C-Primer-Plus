/**********************************************
*File name:    ProgrammingPracticeThree.c
*Description:   C primer plus 第五章课后编程3题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
#define WEEK 7
//函数的功能：用户输入一个天数，程序将其转换成周数和天数。
int main()
{
    int day;
    while (1)
    {
        printf("Please enter the number of days:");
        scanf("%d",&day);
        if(day<=0)
        {
            printf("The number of days you entered is illegal and the program has exited");
            break;
        }
        printf("%d day are %d weeks,%d days.\n",day,day/WEEK,day%WEEK);
    }  
    return 0;
}