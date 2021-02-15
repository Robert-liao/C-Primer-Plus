/**********************************************
*File name:    ProgrammingPracticeOne.c
*Description:   C primer plus 第五章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#define MINUTE 60
//函数的功能：把分钟表示的时间转换成小时和分钟表示。
int main()
{
    int time, minute, hour;
    while (1)
    {
        printf("Please enter the time in minutes:");
        scanf("%d", &time);
        if (time <= 0)
        {
            /* code */
            printf("The time you entered is illegal, the program has exited");
            break;
        }

        printf("The time you entered is %d hour and %d minute\n", time / MINUTE, time % MINUTE);
    }

    return 0;
}