#include <stdio.h>
int main()
{
    char alphabet, count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((alphabet = getchar()) != '#')
    {

        switch (alphabet)
        {
        case '.':
            alphabet = '!';
            count++;
            break;
        case '!':
            putchar(alphabet);
            count++;
            break;
        }
        putchar(alphabet);
    }
    printf("\nMade %d replacements", count);
    return 0;
}