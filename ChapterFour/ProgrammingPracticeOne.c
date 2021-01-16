#include<stdio.h>
int main()
{
    char FirstNmae[10],LastName[10];
    printf("Please enter first and last name:\n");
    printf("Please enter first name:");
    scanf("%s",FirstNmae);
    printf("Please enter last name:");
    scanf("%s",LastName);
    printf("first name is %s,last name is %s\n",FirstNmae,LastName);
    return 0;
}