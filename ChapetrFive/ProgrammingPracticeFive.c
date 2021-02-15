/**********************************************
*File name:    ProgrammingPracticeFive.c
*Description:   C primer plus 第五章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
//函数的功能：输入天数，然后累加工资（第1天1块，第2天2快，第3天3快）
int main(void)
{
    int count=0,sum=0,day;
    printf("Please enter day:");
    scanf("%d",&day);
    while (count++<day)
    {
        /* code */
        sum+=count;
    }
    printf("sum=%d\n",sum);
    return 0;
}