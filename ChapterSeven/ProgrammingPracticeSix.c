/**********************************************
*File name:     ProgrammingPracticeSix.c
*Description:   C primer plus 第七章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/****************************************************
*函数的实现：程序读取输入，遇到#停止，然后报告ei出现的次数。
*******************************************************/
int main()
{
    char ch, lastAlphabet=' ', CurrenAlphabet=' ';
    int count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((ch = getchar()) != '#')
    {
        CurrenAlphabet = ch;       
        if (lastAlphabet == 'e'&&CurrenAlphabet=='i')
        {
          count++;
        }
        lastAlphabet=CurrenAlphabet;
        CurrenAlphabet=' ';
    }
    printf("%d\n",count);
    return 0;
}