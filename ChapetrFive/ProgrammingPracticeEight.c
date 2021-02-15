/**********************************************
*File name:    ProgrammingPracticeEight.c
*Description:   C primer plus 第五章课后编程8题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/*******************************************************
*函数的功能：用户输入的第1个整数作为求模运算的第二个运算对象，
*           该数在运算过程中保持不变。用户后输入的数是第一个
*           运算对象。当输入一个非正值是，程序结束。
********************************************************/
int main()
{
    printf("This program computes moduli.\nEnter an integer to serve as the second operand:");
    int Second,First,Three;
    scanf("%d",&Second);
    printf("Now enter the first operand:");
    scanf("%d",&First);
    printf("%d %% %d is %d",First,Second,First%Second);
    while (1)
    {      
        printf("\nEnter next number for first operand(<=0 to quit):");
        scanf("%d",&Three);
        if(Three<=0)
        {
            printf("done");
            break;
        }
        printf("%d %% %d is %d",Three,Second,Three%Second);

    }
    
    return 0;
}