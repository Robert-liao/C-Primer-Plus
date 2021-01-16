/**********************************************
*File name:     ProgrammingPracticeEleve.c
*Description:   C primer plus 第十一章课后编程11题
*Version：      1.0
*Author：       Robert
*Create Time:   2021-1-13
*********************************************/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 256 //二维数组的列
#define ROW 10   //二维数组的行
/****************************************************
* 函 数 名：Print
* 函数功能：打印源字符串列表
* 输入参数：需要打印的字符串(一个char类型的二维数组)，
*          如char source[ROW][SIZE]
* 输出参数：字符串的内容
* 返 回 值: void 
* Author ： Robert
* Create Time: 2021-1-13
* 其他说明：无
* 修改说明：无
*****************************************************/
void Print(char source[ROW][SIZE]);
/***********************************************************
* 函 数 名：ASCIIsortPrint
* 函数功能：以ASCII编码中的顺序打印字符串
* 输入参数：需要打印的字符串(一个char类型的二维数组)，
*          如char source[ROW][SIZE]
* 输出参数：以ASCII编码中的顺序输出字符串的内容
* 返 回 值: void 
* Author： Robert
* Create Time: 2021-1-13
* 其他说明：为每个一维数组调用ASCIIsort函数，将内容按ASCII编码中排序然后输出。
*          同时注意，调用该函数后，实参数组的内容会被修改
* 修改说明：无
***********************************************************/
void ASCIIsortPrint(char souce[ROW][SIZE]);
/**********************************************************
* 函 数 名：ASCIIsort
* 函数功能：将字符串的内容以ASCII码的顺序排列，然后输出
* 输入参数：需要打印的字符串(一个char类型的二维数组)
* 输出参数：字符串的内容
* 返 回 值: void 
* Author：Robert
* Create Time: 2021-1-13
* 其他说明：无
* 修改说明：无
**********************************************************/
void ASCIIsort(char source[SIZE]);
/**********************************************************
* 函 数 名：IncreasePrint
* 函数功能：按长度递增顺序打印字符串
* 输入参数：需要打印的字符串(一个char类型的二维数组)，
*          如char source[ROW][SIZE]
* 输出参数：字符串的内容
* 返 回 值: void 
* Author：  Robert
* Create Time: 2021-1-13
* 其他说明：无
* 修改说明：无
**********************************************************/
void IncreasePrint(char souce[ROW][SIZE]);
/**********************************************************
* 函 数 名：PrintFirstWordlenght
* 函数功能：按字符串中第1个单词的长度打印字符串
* 输入参数：一个二维数组的字符串(一个char类型的二维数组)
* 输出参数：以第1个单词的长度输出字符串
* 返 回 值: 无
* Author：Robert
* Create Time: 2021-1-13
* 其他说明：无
* 修改说明：无
**********************************************************/
void PrintFirstWordlenght(char source[ROW][SIZE]);
/**********************************************************
* 函 数 名：SeekArrayMinSubscript
* 函数功能：寻找数组中最小值的下标
* 输入参数：一个字符串(int类型的数组)
* 输出参数：无
* 返 回 值: 字符串中最小值的下标
* Author：Robert
* Create Time: 2021-1-13
* 其他说明：无
* 修改说明：无
**********************************************************/
int SeekArrayMinSubscript(int source[ROW]);
int main()
{
    char input, String[ROW][SIZE], copy[ROW][SIZE], ch;
    int j = 0, k = 1;
    FILE *fp;
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("File open failed\n");
        exit(0);
    }
    for (size_t i = 0; i < ROW; i++) //输入10个字符串
    {
        fgets(String[i], SIZE, fp);
        strcpy(copy[i], String[i]);
    }
    while (1)
    {
        printf("\n******************************************************\n");
        printf("a is :Print source string list\n");                    //打印源字符串
        printf("b is :Print the string in the order in ASCII\n");      //以ASCII中的顺序打印字符串
        printf("c is :Print strings in increasing order of length\n"); //按长度递增顺序打印字符串
        printf("d is :Print the string according to the length of the first word in the string\n");
        //按字符串中的第1个单词的长度打印字符串
        printf("q is exit\n"); //程序退出
        printf("******************************************************\n");
        printf("Please enter the letters that match the options:");
        scanf("%c", &input);
        getchar();
        switch (input)
        {
        case 'a':
            Print(String);
            break;
        case 'b':
            ASCIIsortPrint(copy);
            break;
        case 'c':
            IncreasePrint(String);
            break;
        case 'd':
            PrintFirstWordlenght(String);
            break;
        case 'q':
            exit(0);
            break;
        default:
            printf("The input option is wrong, please re-enter\n");
            break;
        }
    }
    return 0;
}
/***********************************************
*函数的实现：通过一个循环和fputs函数将形参字符串输出
************************************************/
void Print(char source[ROW][SIZE])
{
    for (size_t i = 0; i < ROW; i++)
    {
        fputs(source[i], stdout);
    }
}
/***********************************************
*函数的实现：通过循环为每一个字符串调用ASCIIsort函数
************************************************/
void ASCIIsortPrint(char souce[ROW][SIZE])
{
    for (size_t i = 0; i < ROW; i++)
    {
        ASCIIsort(souce[i]);
    }
    putchar('\n');
}
/******************************************************************
*函数的实现：定义临时的变量(temporary)和一维数组(tem)。然后通过两个循环，
*以及最简单的交换方式寻找出形参一维数组中最小的值并赋值
*给临时的一维数组。依次循环直至两个循环全部结束，最后输出
*临时的一维数组内容。
*******************************************************************/
void ASCIIsort(char source[SIZE])
{
    char tem[SIZE] = {}, temporary;
    for (size_t i = 0; i < strlen(source); i++)
    {
        for (size_t j = i + 1; j < strlen(source); j++)
        {
            if (source[i] > source[j])
            {
                temporary = source[i];
                source[i] = source[j];
                source[j] = temporary;
            }
        }
        tem[i] = source[i];
    }
    printf("%s", tem);
}
/**************************************************************
*函数实现：定义一个数组(StringLength)同时将每个字符串的长度填进数组，
*然后通过循环为该数组调用SeekArrayMinSubscript函数求取数组中最小值的
*那个下标。将这个下标代入原形参数组中后输出即可，之后将StringLength数
*组中该下标的值赋值为int变量的最大值，以次达到下次取最小值下标时将该值
*排除在外的目的。
***************************************************************/
void IncreasePrint(char souce[ROW][SIZE])
{
    int StringLength[ROW];
    for (int i = 0; i < ROW; i++)
    {
        StringLength[i] = strlen(souce[i]) - 1;
    }
    for (int i = 0; i < ROW; i++)
    {
        int min;
        min = SeekArrayMinSubscript(StringLength);
        fputs(souce[min], stdout);
        StringLength[min] = INT_MAX;
    }
}
/*******************************************
*函数实现：通过循环比较求形参数组中最小值的下标。
*******************************************/
int SeekArrayMinSubscript(int source[ROW])
{
    int MinSubscript = 0;
    for (int i = 1; i < ROW; i++)
    {
        if (source[MinSubscript] > source[i])
        {
            MinSubscript = i;
        }
    }
    return MinSubscript;
}
/******************************************
*函数实现：找到第一个字符串中第一个单词的长度，
*然后将该长度作为printf函数的格式输出符的内容。
*******************************************/
void PrintFirstWordlenght(char source[ROW][SIZE])
{
    int lengt = 0;
    for (size_t i = 0; i < strlen(source[0]); i++)
    {
        if (source[0][i] == ' ')
        {
            break;
        }
        else
        {
            lengt++;
        }
    }
    for (size_t i = 0; i < ROW; i++)
    {
        printf("%.*s\n", lengt, source[i]);
    }
}