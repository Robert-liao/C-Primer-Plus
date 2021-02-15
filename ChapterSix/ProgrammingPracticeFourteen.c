/**********************************************
*File name:     ProgrammingPracticeFourteen.c
*Description:   C primer plus 第六章课后编程14题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-2-15
*********************************************/
#include <stdio.h>
/*************************************************
*函数的功能：创建两个double类型的数组，使用循环提示用户
*           为第一个数组输入8个值，第二个数组元素为第一
*           个对应元素的累计之和。最后输出两个数组内容。
***************************************************/
int main()
{
    double first[8], second[8];
    static double sum = 0;
    printf("Please enter data for the first array:");
    for (int i = 0; i < 8; i++)
    {
        /* code */
        scanf("%lf", &first[i]);
        sum += first[i];
        second[i] = sum;
    }
    for (int i = 0; i < 8; i++)
    {
        /* code */
        printf("%lf\t", first[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        /* code */
        printf("%lf\t", second[i]);
    }
    return 0;
}