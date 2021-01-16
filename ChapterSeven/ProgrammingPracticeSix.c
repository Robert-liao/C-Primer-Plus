#include <stdio.h>
int main()
{
    char ch, lastAlphabet=' ', CurrenAlphabet=' ';
    int count = 0;
    printf("Please enter a paragraph of English (end with #):\n");
    while ((ch = getchar()) != '#')
    {
        CurrenAlphabet = ch;       
        if (lastAlphabet == 'e'&&CurrenAlphabet=='i')
        {
          count++;
        }
        lastAlphabet=CurrenAlphabet;
        CurrenAlphabet=' ';
    }
    printf("%d\n",count);
    return 0;
}