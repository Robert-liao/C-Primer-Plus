#include <stdio.h>
int main()
{
    int RabnudNumberFriends = 5, TemporaryVariables = 0;
    for (int week = 1;; week++)
    {
        TemporaryVariables = RabnudNumberFriends - week;
        RabnudNumberFriends = TemporaryVariables * 2;
        printf("week=%d\tNumberFriends=%d\n", week, RabnudNumberFriends);
        if (RabnudNumberFriends > 150)
        {
            break;
        }
    }
    return 0;
}