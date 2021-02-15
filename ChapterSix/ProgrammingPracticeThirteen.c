/**********************************************
*File name:     ProgrammingPracticeThirteen.c
*Description:   C primer plus 第六章课后编程13题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <math.h>
//函数的功能：使用for循环给数组的内容设置为2的前8次幂，使用do while循环显示数组的内容。
int main()
{
    int number[8];
    for (int i = 0; i < 8; i++)
    {
        /* code */
        number[i] = exp2(i+1);
    }
    int TemporaryVariables = 0;
    do
    {
        /* code */
        printf("%d ", number[TemporaryVariables++]);
    } while (TemporaryVariables < 8);

    return 0;
}