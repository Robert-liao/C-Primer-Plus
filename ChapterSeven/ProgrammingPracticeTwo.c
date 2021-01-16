#include <stdio.h>
int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        if(ch=='\n')continue;
        printf("%c-%d\t", ch, ch);
        count++;
        if (count == 8)
        {
            printf("\n");
        }
    }
    return 0;
}