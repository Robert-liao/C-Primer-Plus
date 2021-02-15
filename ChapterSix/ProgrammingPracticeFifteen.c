/**********************************************
*File name:     ProgrammingPracticeFifteen.c
*Description:   C primer plus 第六章课后编程15题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
#include<string.h>
/*****************************************************
*函数的实现：程序读取一行输入，然后把输入的内容倒序打印出来。
******************************************************/
int main()
{
    char string[255];
    printf("Please enter a line of English:");
    gets(string);
    for(int i=strlen(string);i>0;i--)
    {
        printf("%c",string[i-1]);
    }
    printf("\n");
    return 0;
}