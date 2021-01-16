#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void quit();
void add();
void subtract();
void multiply();
void divide();
int main()
{
    char Input;
    while (1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add\t\t\ts. subtract\nm. multiply\t\td. divide\nq. quit\n");
        scanf("%c", &Input);
        switch (Input)
        {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;
        case 'q':
            quit();
            break;
        default:
            printf("The content entered does not meet the requirements, please re-enter\n");
            break;
        }
        while (getchar() != '\n')
        {
            continue;
        }
    }

    return 0;
}
void add()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    printf("%g+%g=%g\n", FirstNumber, SecondNumbe, FirstNumber + SecondNumbe);
}
void subtract()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    printf("%.3g-%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber - SecondNumbe);
}
void multiply()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }

    printf("%.3g*%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber * SecondNumbe);
}
void divide()
{
    float FirstNumber, SecondNumbe;
    int TemporaryVaries;
    printf("Enter first number:");
    TemporaryVaries = scanf("%f", &FirstNumber);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &FirstNumber);
    }
    printf("Enter second number:");
    TemporaryVaries = scanf("%f", &SecondNumbe);
    while (TemporaryVaries == 0)
    {
        while (getchar() != '\n')
        {
            continue;
        }
        printf("one is not an number.\n");
        printf("Please enter a number,such as 2.5,-1.78E8.or 3:");
        TemporaryVaries = scanf("%f", &SecondNumbe);
    }
    while (SecondNumbe == 0)
    {
        printf("Enter a number other than 0:");
        scanf("%f", &SecondNumbe);
    }
    printf("%.3g/%.3g=%.3g\n", FirstNumber, SecondNumbe, FirstNumber / SecondNumbe);
}
void quit()
{
    printf("Bye.\n");
    exit(0);
}