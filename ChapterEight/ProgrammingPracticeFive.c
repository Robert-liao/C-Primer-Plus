#include <stdio.h>
int main()
{
    int ProgramGuess = 50, TargetValues, LeftBoundary = 0, RightBoundary = 100, count = 0;
    printf("Please enter the target number(%d~%d):",LeftBoundary,RightBoundary);
    scanf("%d", &TargetValues);
    while (1)
    {
        if (ProgramGuess == TargetValues)
        {
            count++;
            printf("Congratulations, guessed it,Used %d times, the program has exited\n", count);
            break;
        }
        else if (ProgramGuess < TargetValues)
        {
            count++;
            printf("Sorry, %d is guess so small\n", ProgramGuess);
            LeftBoundary = ProgramGuess+1;
            ProgramGuess = (LeftBoundary + RightBoundary) / 2;
        }
        else
        {
            count++;
            printf("Sorry, %d is guess big\n", ProgramGuess);
            RightBoundary=ProgramGuess-1;
            ProgramGuess = (LeftBoundary + RightBoundary) / 2;
        }
    }

    return 0;
}