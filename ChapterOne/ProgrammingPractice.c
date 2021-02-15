/**********************************************
*File name:    ProgrammingPractice.c
*Description:   C primer plus 第1章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//函数的功能：把英寸单位转化为厘米单位。
int main()
{
    double Inch = 0;
    char FlagBit[3];

    while (1)
    {
        /* code */
        printf("Please enter an inch unit:\n");
        while (1)
        {
            scanf("%lf", &Inch);
            if (Inch < 0)
            {

                printf("The input data is illegal,please enter again\n");
            }
            else
            {
                break;
            }
        }
        printf("The inches are converted to %lf centimeter\n", 2.54 * Inch);
        printf("Would you like to continue the conversion?YES or NO\n");
        scanf("%s", FlagBit);
        if (strcmp(FlagBit, "YES") == 0)
        {
            ;
        }
        else
        {
            break;
        }
    }
    return 0;
}