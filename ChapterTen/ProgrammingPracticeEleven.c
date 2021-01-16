#include <stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 5
void display(int target[][COLUMNSIZE], int row);
void twice(int target[][COLUMNSIZE], int row);
int main()
{
    int source[ROWSIZE][COLUMNSIZE]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    printf("The original value of the array is:\n");
    display(source,ROWSIZE);
    putchar('\n');
    printf("After the value of the array is doubled, it is:\n");
    twice(source,ROWSIZE);
    display(source,ROWSIZE);
    return 0;
}
void display(int target[][COLUMNSIZE], int row)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < COLUMNSIZE; j++)
        {
            printf("%d ", target[i][j]);
        }
    }
}
void twice(int target[][COLUMNSIZE], int row)
{
    for (size_t i = 0; i < row; i++)
    {
       for (size_t j = 0; j <COLUMNSIZE; j++)
       {
           target[i][j]*=2;
       }       
    }
}