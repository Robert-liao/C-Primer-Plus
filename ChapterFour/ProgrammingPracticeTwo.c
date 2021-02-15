/**********************************************
*File name:    ProgrammingPracticeTwo.c
*Description:   C primer plus 第四章课后编程2题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <string.h>
/*************************************************
*函数的功能：输入名字，并执行一下操作：
*           A.打印名，包括双引号。
*           B.在宽度为20的字段右端打印名字，包括双引号。
*           C.在宽度为20的字段左端打印名字，包括双引号。
*           D.在比姓名宽度宽3的字段中打印名字。
***************************************************/
int main()
{
    char Nmae[10];
    printf("please enter your name:");
    scanf("%s", Nmae);
    int count = strlen(Nmae) + 3;
    printf("Your name is \"%s\"\n", Nmae);
    printf("Your name is \"%20s\"\n", Nmae);
    printf("Your name is \"%-20s\"\n", Nmae);
    printf("Your name is %*s\n", count,Nmae);
    return 0;
}