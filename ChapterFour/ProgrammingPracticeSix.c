/**********************************************
*File name:    ProgrammingPracticeSix.c
*Description:   C primer plus 第四章课后编程6题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include<stdio.h>
#include<string.h>
/*************************************************************
*函数的功能：先输入名，在输入姓。在一行打印输入的名和行。下一行
*           分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐。
*           然后，再打印相同的信息，但字母个数要与相应名和姓的开头对齐。
****************************************************************/
int main()
{
    char FirstName[10],LasetName[10];
    int FirstNameCount,LasetNameCount;
    printf("Please enter first name:");
    scanf("%s",FirstName);
    printf("Please enter last name:");
    scanf("%s",LasetName);
    printf("%s %s\n",FirstName,LasetName);
    FirstNameCount=strlen(FirstName);
    LasetNameCount=strlen(LasetName);
    printf("%*d,%*d\n",FirstNameCount,FirstNameCount,LasetNameCount,LasetNameCount);
    printf("%s %s\n",FirstName,LasetName);
    printf("%-*d,%-*d",FirstNameCount,FirstNameCount,LasetNameCount,LasetNameCount);
    return 0;
}