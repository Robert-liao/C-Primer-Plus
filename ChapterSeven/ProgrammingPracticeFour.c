#include <stdio.h>
int main()
{
    char alphabet, count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((alphabet = getchar()) != '#')
    {
        if (alphabet == '.')
        {
            alphabet = '!';
            count++;
        }
        else if (alphabet == '!')
        {
            putchar(alphabet);
            count++;
        }
        putchar(alphabet);
    }
    printf("\nMade %d replacements", count);
    return 0;
}