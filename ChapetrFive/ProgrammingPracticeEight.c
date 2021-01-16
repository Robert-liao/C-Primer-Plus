#include<stdio.h>
int main()
{
    printf("This program computes moduli.\nEnter an integer to serve as the second operand:");
    int Second,First,Three;
    scanf("%d",&Second);
    printf("Now enter the first operand:");
    scanf("%d",&First);
    printf("%d %% %d is %d",First,Second,First%Second);
    while (1)
    {      
        printf("\nEnter next number for first operand(<=0 to quit):");
        scanf("%d",&Three);
        if(Three<=0)
        {
            printf("done");
            break;
        }
        printf("%d %% %d is %d",Three,Second,Three%Second);

    }
    
    return 0;
}