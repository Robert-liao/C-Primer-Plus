/**********************************************
*File name:    ProgrammingPracticeSix.c
*Description:   C primer plus 第3章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
#include<math.h>
//函数的功能：输入水的夸脱数，并显示水分子的数量。1夸脱=950克，1个水分子的质量约为3.0*10的-23次方克
int main()
{ 
    int Quart,Gram;
    printf("Please enter the number of quarts of water:\n");
    scanf("%d",&Quart);
    Gram=Quart*950;
    printf("The number of water molecules is:%.2lf\n",Gram/(3.0*pow(10,-23)));
    return 0;
}                                        