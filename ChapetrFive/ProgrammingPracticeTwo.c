/**********************************************
*File name:    ProgrammingPracticeTwo.c
*Description:   C primer plus 第五章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
//函数的功能：输入一个整数，程序打印从该数到比该数大10的所有整数。
int main()
{
    int number;
    printf("Please you enter integer:");
    scanf("%d", &number);
    for (int i = 1; i < 12; i++)
    {
        /* code */
        printf("%d ", number++);
    }

    return 0;
}