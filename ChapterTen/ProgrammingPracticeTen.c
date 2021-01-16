#include <stdio.h>
void sum(int source1[], int source2[], int target[], int arraysize);
#define ARRAYSIZE 5
int main()
{
    int SourceOne[ARRAYSIZE] = {2, 4, 5, 8, 10},
        SourceTwo[ARRAYSIZE] = {1, 0, 4, 6, 10},
        Sum[ARRAYSIZE];
    sum(SourceOne, SourceTwo, Sum, ARRAYSIZE);
    printf("Sum Array is:\n");
    for (size_t i = 0; i < ARRAYSIZE; i++)
    {
        printf("%d ", Sum[i]);
    }

    return 0;
}
void sum(int source1[], int source2[], int target[], int arraysize)
{
    for (size_t i = 0; i < arraysize; i++)
    {
        target[i] = source1[i] + source2[i];
    }
}