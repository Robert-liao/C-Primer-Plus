#include<stdio.h>
#define ROWSIZE 3
#define COLUMNSIZE 5
void copy(int RowSize,int ColumnSize,double target[RowSize][ColumnSize],double source[3][5]);
void display(int RowSize,int ColumnSize,double target[RowSize][ColumnSize]);
int main()
{
    double source[ROWSIZE][COLUMNSIZE]={
        {1.1,2.2,3.3,4.4,5.5},
        {6.6,7.7,8.8,9.9,10.1},
        {11.1,12.2,13.3,14.4,15.5},
    },Target[ROWSIZE][COLUMNSIZE];
    copy(ROWSIZE,COLUMNSIZE,Target,source);
    printf("Target Array is :\n");
    display(ROWSIZE,COLUMNSIZE,Target);
    putchar('\n');
    printf("source Array is :\n");
    display(ROWSIZE,COLUMNSIZE,source);
    return 0;
}
void copy(int RowSize,int ColumnSize,double target[RowSize][ColumnSize],double source[][COLUMNSIZE])
{
    for (size_t i = 0; i < RowSize; i++)
    {
        for (size_t j = 0; j < ColumnSize; j++)
        {
         target[i][j]=source[i][j];     
        }     
    }
}
void display(int RowSize,int ColumnSize,double target[RowSize][ColumnSize])
{
    for (size_t i = 0; i < RowSize; i++)
    {
       
       for (size_t j = 0; j < ColumnSize; j++)
       {
           printf("%.1lf ",target[i][j]);
       }
       putchar('\n');
    }
    
}