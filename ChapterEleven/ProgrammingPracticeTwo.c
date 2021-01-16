#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ARRAYSIZE 256
void input(char *target);
int main()
{
    char source[ARRAYSIZE]={};
    printf("Please write content into the array (end of EOF):\n");
    input(source);
    printf("Array is :\n");
    for (size_t i = 0; i < strlen(source); i++)
    {
        if (source[i] == '\n') //换行
        {
            printf("source[%d]=", i);
            printf("wrap");
            putchar('\n');
        }
        else if (source[i] == '\t') //水平制表符
        {
            printf("source[%d]=", i);
            printf("Tabs");
            putchar('\n');
        }
        else if (source[i] == ' ') //空白
        {
            printf("source[%d]=", i);
            printf("Space");
            putchar('\n');
        }
        else //字符
        {
            printf("source[%d]=", i);
            printf("%c", source[i]);
            putchar('\n');
        }
    }
    return 0;
}
void input(char *target)
{
    char ch;
    for (size_t i = 0;; i++)
    {
        ch = getchar();
        if (isblank(ch) || ch == '\n')
        {
            break;
        }
        else
        {
            target[i] = ch;
        }
    }
}