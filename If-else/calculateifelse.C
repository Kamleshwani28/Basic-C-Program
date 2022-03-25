#include <stdio.h>
#include <conio.h>
void main()
{
    char op;
    int a, b, result;
    clrscr();
    printf("\nEnter no of A ::");
    scanf("%d", &a);
    printf("\nEnter no of B ::");
    scanf("%d", &b);
    printf("\nOperator[+,-,*,/] ::");
    fflush(stdin);
    scanf("%c", &op);
    if (op == '+')
    {
        result = a + b;
        printf("\nAddition=%d", result);
    }
    else if (op == '-')
    {
        result = a - b;
        printf("\nSubtraction=%d", result);
    }
    else if (op == '*')
    {
        result = a * b;
        printf("\nMultipliction=%d", result);
    }
    else if (op == '/')
    {
        result = a / b;
        printf("\nDivition=%.2f", result);
    }
    else
    {
        printf("Invalid Choice");
    }
    getch();
}