/**********************************************
*File name:     ProgrammingPracticeEight.c
*Description:   C primer plus 第八章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/****************************************************
* 函 数 名：quit
* 函数功能：退出程序
* 输入参数：无
* 输出参数：无
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：无
* 修改说明：无
*****************************************************/
void quit();
/****************************************************
* 函 数 名：add
* 函数功能：提供加法运算
* 输入参数：无
* 输出参数：加法运算的结果
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：该函数会提示输入所要进行运算的两个数
* 修改说明：无
*****************************************************/
void add();
/****************************************************
* 函 数 名：subtract
* 函数功能：提供减法运算
* 输入参数：无
* 输出参数：减法运算的结果
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：该函数会提示输入所要进行运算的两个数
* 修改说明：无
*****************************************************/
void subtract();
/****************************************************
* 函 数 名：multiply
* 函数功能：提供乘法运算
* 输入参数：无
* 输出参数：乘法运算的结果
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：该函数会提示输入所要进行运算的两个数
* 修改说明：无
*****************************************************/
void multiply();
/****************************************************
* 函 数 名：divide
* 函数功能：提供除法运算
* 输入参数：无
* 输出参数：除法运算的结果
* 返 回 值: 无
* Author ： Robert
* Create Time: 2021-2-7
* 其他说明：该函数会提示输入所要进行运算的两个数
* 修改说明：无
*****************************************************/
void divide();
int main()
{
    char Input;
    while (1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add\t\t\ts. subtract\nm. multiply\t\td. divide\nq. quit\n");
        scanf("%c", &Input);
        switch (Input)
        {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;
        case 'q':
            quit();
            break;
        default:
            printf("The content entered does not meet the requirements, please re-enter\n");
            break;
        }
        while (getchar() != '\n')
        {
            continue;
        }
    }

    return 0;
}
/****************************************************
*函数实现：根据提示输入两个float类型的数据，如果数据不合法，
*         会提示重新输入。
*****************************************************/
void add()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    printf("%g+%g=%g\n", FirstNumber, SecondNumbe, FirstNumber + SecondNumbe);
}
void subtract()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    printf("%.3g-%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber - SecondNumbe);
}
void multiply()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }

    printf("%.3g*%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber * SecondNumbe);
}
/****************************************************
*函数实现：根据提示输入两个float类型的数据，如果数据不合法，
*         会提示重新输入。同时如果除数为0的话，会提示重新
*         输入一个新值。
*****************************************************/
void divide()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    while (SecondNumbe == 0)
    {
        printf("Enter a number other than 0:");
        scanf("%f", &SecondNumbe);
    }
    printf("%.3g/%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber / SecondNumbe);
}
void quit()
{
    printf("Bye.\n");
    exit(0);
}