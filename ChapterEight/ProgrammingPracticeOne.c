#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    char FileName[20], ch;
    FILE *fp;
    printf("Please enter file name:");
    scanf("%s", FileName);
    fp = fopen(FileName, "r");
    if (fp == NULL)
    {
        printf("The file failed to open, the program has exited\n");
        exit(0);
    }
    printf("file content:");
    while ((ch = getc(fp))!= EOF)
    {
         putchar(ch);
        count++;
    }
    fclose(fp);
    printf("\n%d", count);
    return 0;  
}