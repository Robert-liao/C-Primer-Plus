/**********************************************
*File name:     ProgrammingPracticeSeven.c
*Description:   C primer plus 第十一章课后编程7题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-6
*********************************************/
#include <stdio.h>
#include <string.h>
#define ARRAYSIEZE 256 
/****************************************************
* 函 数 名：mystrncpy
* 函数功能：将source中的n个字符拷贝至target中，截断source，
*          或者有必要的话在末尾添加空字符。若source长度是
*          n或多于n，目标字符串不能以空字符结尾。函数返回target。
* 输入参数：两个指向字符串的指针(char *)和一个整型的截断的长度(int)
* 输出参数：无
* 返 回 值: target字符串的地址
* Author ： Robert
* Create Time: 2021-1-6
* 其他说明：无
* 修改说明：无
*****************************************************/
char *mystrncpy(char *target, char *source, int n);
int main()
{
    char s2[ARRAYSIEZE]={}, s1[ARRAYSIEZE]={};
    int n;
    printf("Please enter s1 string:");
    scanf("%s",s1);
    printf("Please enter s2 string:");
    scanf("%s",s2);
    printf("Please enter the number of characters to copy:");
    scanf("%d",&n);
    char *ss = NULL;
    ss = mystrncpy(s1, s2, n);
    printf("%s", ss);
    return 0;
}
/**************************************************
*函数实现：定义一个临时地址指向target的开始地址，之后
*target通过循环将地址移到最后一位。然后开始将source的
*n个字符赋值给target，再判断source长度是否等于n，依次
*决定是否添加末尾空字符。最后返回指向target开始地址的
*那个临时地址
***************************************************/
char *mystrncpy(char *target, char *source, int n)
{
    char *Target = NULL;
    Target = target;
    while (*target != '\0')
    {
        target++;
        continue;
    }
    for (size_t i = 0; i < n; i++)
    {
        *target = source[i];
        target++;
    }
    if (strlen(source) < n)
    {
        *target = '\0';
    }
    return Target;
}