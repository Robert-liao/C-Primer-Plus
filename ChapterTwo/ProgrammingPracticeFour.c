/**********************************************
*File name:    ProgrammingPracticeFour.c
*Description:   C primer plus 第2章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
void jolly();
void deny();
int main()
{
    jolly();
    deny();
    return 0;
}
void jolly()
{
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("For he's a jolly good fellow!\n");
    }
}
void deny()
{
    printf("Which nobody can deny!\n");
}