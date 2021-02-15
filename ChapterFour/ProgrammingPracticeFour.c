/**********************************************
*File name:    ProgrammingPracticeFour.c
*Description:   C primer plus 第四章课后编程4题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
/*****************************************************
*函数的功能：输入身高(单位：英寸)和姓名，然后以如下格式显示：
*           Dabney,you are 5.234 feet tall
******************************************************/
int main()
{
    float height;
    char name[10];
    printf("Please enter your height/inches and name:\n");
    scanf("%s",name);
    scanf("%f",&height);
    printf("%s,you are %.3f feet tall\n",name,height);
}