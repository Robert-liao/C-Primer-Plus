#include <stdio.h>
void gte_first();
int main()
{
    gte_first();
    return 0;
}
void gte_first()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
        {
            printf("%c\n", ch);
            break;
        }
    }
}