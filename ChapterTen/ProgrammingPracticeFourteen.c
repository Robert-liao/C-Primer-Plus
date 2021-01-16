#include <stdio.h>
#define ROW 3
#define CLO 3
void input(int row, int cloumnsize, double target[][cloumnsize]);
void output(int row, int cloumnsize, double target[][cloumnsize]);
double PerAverage(double target[]);
void AveragePerGroup(int row, int cloumnsize, double target[][cloumnsize]);
double average(int row, int cloumnsize, double target[][cloumnsize]);
double max(int row, int cloumnsize, double target[][cloumnsize]) ;
int main()
{
    int row = ROW, cloumnsize = CLO;
    double source[ROW][CLO];
    input(row, cloumnsize, source);
    output(row, cloumnsize, source);
    AveragePerGroup(row,cloumnsize,source);
    printf("Array average is %g\n", average(row,cloumnsize,source));//求所有数据的平均值
    printf("Array max is %g\n", max(row,cloumnsize,source)); //求最大值
    return 0;
}
void input(int row, int cloumnsize, double target[][cloumnsize])
{
    printf("Please enter %d groups of numbers, each group contains %d double type numbers:\n", row, cloumnsize);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cloumnsize; j++)
        {
            scanf("%lf", &target[i][j]);
        }
    }
    while (getchar() != '\n')
    {
        continue;
    }
}
void output(int row, int cloumnsize, double target[][cloumnsize])
{

    printf("Array is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cloumnsize; j++)
        {
            printf("%g ", target[i][j]);
        }
        putchar('\n');
    }
}
double PerAverage(double target[]) //计算一维数组的平均值
{
    double SUM = 0;
    for (size_t i = 0; i < CLO; i++)
    {
        SUM += target[i];
    }
    return SUM / CLO;
}
void AveragePerGroup(int row, int cloumnsize, double target[][cloumnsize]) //计算每组(5个)数据的平均值
{                                                                       //将上面求一维数组的平均值的函数调用三次即可
    double Average[cloumnsize], Temporary = 0;
    for (size_t i = 0; i < ROW; i++)
    {
        Average[i] = PerAverage(target[i]);
    }
    printf("average per group is :\n");
    for (size_t i = 0; i < ROW; i++)
    {
        printf("%g ", Average[i]);
    }
    putchar('\n');
}
double average(int row, int cloumnsize, double target[][cloumnsize]) //计算所有数据的平均值，并将结果返回到主函数中然后显示出来
{
    double average = 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cloumnsize; j++)
        {
            average += target[i][j];
        }
    }
    return average / (row * cloumnsize);
}
double max(int row, int cloumnsize, double target[][cloumnsize]) //计算所有数据中的最大值，并将结果返回到主函数中然后显示出来
{
    double max = target[0][0];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cloumnsize; j++)
        {
            if (max < target[i][j])
            {
                max = target[i][j];
            }
        }
    }
    return max;
}