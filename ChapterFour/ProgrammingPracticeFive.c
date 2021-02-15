/**********************************************
*File name:    ProgrammingPracticeFive.c
*Description:   C primer plus 第四章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/**************************************************************
*函数的功能：输入以兆位每秒为单位的下载速度和以兆字节为单位的文件大小
*           程序应计算文件的下载时间。注：1字节等于8位。
***************************************************************/
int main()
{
    float Speed, FileSize;
    printf("Please enter download speed(Mb/S):");
    scanf("%f", &Speed);
    printf("\nPlease enter file size(MB):");
    scanf("%f", &FileSize);
    printf("\nAt %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds\n", Speed, FileSize, FileSize * 8 / Speed);
    return 0;
}