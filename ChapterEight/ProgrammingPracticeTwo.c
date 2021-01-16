#include <stdio.h>
int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < ' ') //判断字符是否为非打印字符         
        {
            if (ch == '\n')
            {
                printf("wrap=");
                putchar('\\');
                putchar('n');
                printf("\n");
            }
            else if (ch == '\t')
            {
                printf("Tabs=");
                putchar('\\');
                putchar('t');
                printf("\t");
            }
            else
            {
                printf("%c=%d\t", ch, ch);
            }
        }
        else
        {
            printf("%c=%d\t", ch, ch);
        }
        count++;
        if (count % 10 == 0)
            printf("\n");
    }

    return 0;
}