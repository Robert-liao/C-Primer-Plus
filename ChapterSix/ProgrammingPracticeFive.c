#include <stdio.h>
int main()
{
    char alphabet;
    int row;
    printf("Please enter capital letters:");
    scanf("%c", &alphabet);       //输入大写字母
    row = alphabet - 'A' + 1;     //计算得出打印的行数
    for (int i = 0; i < row; i++) //外层循环控制打印多少行
    {
        for (int j = 0; j < row - (i + 1); j++)
            printf(" "); //打印空格
        for (int j = 0; j <= i; j++)
            printf("%c", 'A' + j); //打印升序的字母
        for (int j = i - 1; j >= 0; j--)
            printf("%c", 'A' + j); //打印降序的字母
        printf("\n");
    }

    return 0;
}