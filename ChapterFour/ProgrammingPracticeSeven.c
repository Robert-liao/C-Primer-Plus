/**********************************************
*File name:    ProgrammingPracticeSeven.c
*Description:   C primer plus 第四章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include<float.h>
int main()
{
    double variableOne=1.0/3.0;
    float  variableTwo=1.0/3.0;
    printf("%.6lf,%.6f",variableOne,variableTwo);
    printf("\n%.12lf,%.12f",variableOne,variableTwo);
    printf("\n%.16lf,%.16f",variableOne,variableTwo);
    printf("\n%d",FLT_DIG);
    printf("\n%d",DBL_DIG);
    return 0;
}