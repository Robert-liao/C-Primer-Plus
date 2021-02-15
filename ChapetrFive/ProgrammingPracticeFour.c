/**********************************************
*File name:    ProgrammingPracticeFour.c
*Description:   C primer plus 第五章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <math.h>
#define INCH 2.54
#define FEET 30.48
/******************************************************
*函数的功能：提示输入一个身高(单位:厘米)，并分别以厘米和英寸
*           显示该值，允许有小数部分。程序使用循环重复输入，
*           直到输入一个非正值。
********************************************************/
int main()
{
    float height;
    printf("Enter a height in centimeters:");
    while (1)
    {
        scanf("%f", &height);
        if (height <= 0)
        {
            printf("bye");
            break;
        }
        int feet = height / FEET;
        float inche = fmod(height, FEET) / INCH;
        printf("%.1f cm=%d feet,%.1f inches", height, feet, inche);
        printf("\nEnter a height in centimeters(<0 to quit):");
    }

    return 0;
}