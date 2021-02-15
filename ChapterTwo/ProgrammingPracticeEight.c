/**********************************************
*File name:    ProgrammingPracticeEight.c
*Description:   C primer plus 第2章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
void ont_three();
void two();
int main()
{
    printf("starting now:\n");
    ont_three();
    printf("done!\n");
    return 0;
}
void ont_three()
{
    printf("one\n");
    two();
    printf("three\n");
}
void two()
{
    printf("two\n");
}