/**********************************************
*File name:    ProgrammingPracticeOne.c
*Description:   C primer plus 第3章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
int main(void)
{
    printf("%d\n",1000000000*100);//整数上溢出。
    printf("%f",3.4E38*100.0);//浮点数上溢出
    printf("\n%f",2.0/1000000000);//浮点数下溢出
    return 0;
}