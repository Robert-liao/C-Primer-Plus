/**********************************************
*File name:    ProgrammingPracticeSix.c
*Description:   C primer plus 第五章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
#include<math.h>
//和编程第5题一样，只是改成了求平方和。
int main(void)
{
    int count=0,sum=0,day;
    printf("Please enter day:");
    scanf("%d",&day);
    while (count++<day)
    {
        /* code */
        sum+=count*count;
    }
    printf("sum=%d\n",sum);
    return 0;
}