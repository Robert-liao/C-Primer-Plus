/**********************************************
*File name:     ProgrammingPracticeTwo.c
*Description:   C primer plus 第八章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
/*
*函数的实现：在遇到EOF之前，把输入作为字符流读取。
*           程序会打印每个输入字符及其相应的ASCII
*           码十进制。换行表示为\n,制表符表示为\t。
*/
int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < ' ') //判断字符是否为非打印字符         
        {
            if (ch == '\n')
            {
                printf("wrap=");
                putchar('\\');
                putchar('n');
                printf("\n");
            }
            else if (ch == '\t')
            {
                printf("Tabs=");
                putchar('\\');
                putchar('t');
                printf("\t");
            }
            else
            {
                printf("%c=%d\t", ch, ch);
            }
        }
        else
        {
            printf("%c=%d\t", ch, ch);
        }
        count++;
        if (count % 10 == 0)
            printf("\n");
    }

    return 0;
}