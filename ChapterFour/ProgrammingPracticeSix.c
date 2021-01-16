#include<stdio.h>
#include<string.h>
int main()
{
    char FirstName[10],LasetName[10];
    int FirstNameCount,LasetNameCount;
    printf("Please enter first name:");
    scanf("%s",FirstName);
    printf("Please enter last name:");
    scanf("%s",LasetName);
    printf("%s %s\n",FirstName,LasetName);
    FirstNameCount=strlen(FirstName);
    LasetNameCount=strlen(LasetName);
    printf("%*d,%*d\n",FirstNameCount,FirstNameCount,LasetNameCount,LasetNameCount);
    printf("%s %s\n",FirstName,LasetName);
    printf("%-*d,%-*d",FirstNameCount,FirstNameCount,LasetNameCount,LasetNameCount);
    return 0;
}