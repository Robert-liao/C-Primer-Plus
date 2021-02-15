/**********************************************
*File name:    ProgrammingPracticeFive.c
*Description:   C primer plus 第2章课后编程5题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
void br();
void in();
int main()
{
    br();
    printf(",");
    in();
    printf("\nIndia,China,\n");
    printf("Brazil,Russia\n");
    return 0;
}
void br()
{
    printf("Brazil,Russia");
}
void in()
{
    printf("India,China");
}