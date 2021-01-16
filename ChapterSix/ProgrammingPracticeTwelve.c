#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count;
    double sumOne = 0, sumTwo = 0;
    printf("Please enter the number of items in the sequence:");
    int TemporaryVariables = scanf("%d", &count); //输入序列的项数
    if (TemporaryVariables != 1 || count <= 0)    //判断项数是否为合法数据
    {
        printf("Done");
        exit(0);
    }
    while (1)
    {
        for (size_t i = 1; i <= count; i++)
        {
            sumOne += 1.0 / i; //计算序列 1.0+1.0/2.0+1.0/3.0+1.0/4.0+……前count项的和
            if (i % 2 == 1)    //计算序列 1.0-1.0/2.0+1.0/3.0-1.0/4.0+……前count项的和
            {
                sumTwo += 1.0 / i;
            }
            else
            {
                sumTwo -= 1.0 / i;
            }
        }
        printf("%d %lf\n", count, sumOne);
        printf("%d %lf\n", count, sumTwo); //输出两个序列前count的项的和
        printf("Please re-enter the number of items in the sequence:");
        TemporaryVariables = scanf("%d", &count); //重新输入前n项和并再次计算。
        if (TemporaryVariables != 1 || count <= 0)
        {
            printf("Done");
            break;
        }
        sumOne = 0;
        sumTwo = 0;
    }
    return 0;
}