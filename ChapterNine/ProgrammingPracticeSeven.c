#include<stdio.h>
int JudgementLitter(char ch);
int main()
{
    printf("Please enter a string of characters(End of eof(Ctrl Z)):\n");
    char ch;
    while ((ch=getchar())!=EOF)
    {
        printf("%d\t",JudgementLitter(ch));
    }
    
    return 0;
}
int JudgementLitter(char ch)
{
   char alphabet[26]={
       'a','b','c','d','e','f','g','h','i','j','k','l','m',
       'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (size_t i = 0; i < 26; i++)
    {
        if(ch==alphabet[i]||ch==(alphabet[i]-32))
        {
            return i+1;
        }
    }
    return -1;
    
}