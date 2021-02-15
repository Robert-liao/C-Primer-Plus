/**********************************************
*File name:     ProgrammingPracticeOne.c
*Description:   C primer plus 第六章课后编程1题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
#include <string.h>
/***********************************************************
*函数的功能：创建一个包含26个元素的数组，并在其中存储26个小写字母
*           然后打印输出。
************************************************************/
int main(void)
{
    char alphabet[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 
        'i', 'g', 'k', 'l', 'm', 'n', 'o', 'p', 
        'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 
        'y', 'z'};
    for (int i = 0; i < strlen(alphabet); i++)
    {
        printf("%c ", alphabet[i]);
    }
    printf("\n");
    return 0;
}