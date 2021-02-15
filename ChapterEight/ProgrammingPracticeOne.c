/**********************************************
*File name:     ProgrammingPracticeOne.c
*Description:   C primer plus 第八章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-7
*********************************************/
#include <stdio.h>
#include <stdlib.h>
/*******************************************
*函数的实现：统计在读到文件结尾之前读取的字符数。
*******************************************/
int main()
{
    int count = 0;
    char FileName[20], ch;
    FILE *fp;
    printf("Please enter file name:");
    scanf("%s", FileName);
    fp = fopen(FileName, "r");
    if (fp == NULL)
    {
        printf("The file failed to open, the program has exited\n");
        exit(0);
    }
    printf("file content:");
    while ((ch = getc(fp))!= EOF)
    {
         putchar(ch);
        count++;
    }
    fclose(fp);
    printf("\n%d", count);
    return 0;  
}