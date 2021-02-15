/**********************************************
*File name:     ProgrammingPracticeSix.c
*Description:   C primer plus 第八章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
/****************************************************
* 函 数 名：gte_first
* 函数功能：返回读取的第1个非空白字符。
* 输入参数：无
* 输出参数：读取的第1个非空白字符。
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：无
* 修改说明：无
*****************************************************/
void gte_first();
int main()
{
    gte_first();
    return 0;
}
void gte_first()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
        {
            printf("%c\n", ch);
            break;
        }
    }
}