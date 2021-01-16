#include <stdio.h>
#include <string.h>
#define SIZE 256
void RevisionString(char *source);
int main()
{
    char source[SIZE];
    printf("Please enter a string:");
    while (fgets(source, SIZE, stdin)) //换行结束
    {
        RevisionString(source);
        printf("%s", source);
        printf("Please re-enter a string:");
    }

    return 0;
}
void RevisionString(char *source) //处理字符串中的空格。
{
    int temporary = 0;
    for (size_t i = 0; i < strlen(source); i++)
    {
        if (source[i] == ' ')
            continue;
        source[temporary++] = source[i];
    }
    source[temporary] = '\0';
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the address is not NULL,
            *find = '\0';        // place a null character there
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}