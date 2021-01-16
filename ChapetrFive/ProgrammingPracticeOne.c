#include <stdio.h>
#define MINUTE 60
int main()
{
    int time, minute, hour;
    while (1)
    {
        printf("Please enter the time in minutes:");
        scanf("%d", &time);
        if (time <= 0)
        {
            /* code */
            printf("The time you entered is illegal, the program has exited");
            break;
        }

        printf("The time you entered is %d hour and %d minute\n", time / MINUTE, time % MINUTE);
    }

    return 0;
}