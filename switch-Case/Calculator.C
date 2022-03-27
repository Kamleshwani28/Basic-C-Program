#include <stdio.h>
#include <conio.h>
void main()
{
    char op, ch;
    int a, b, c = 0;
    float d;
    clrscr();
    printf("\n+ Addition");
    printf("\n- Subtraction");
    printf("\n* Multipiction");
    printf("\n/ Divition");
    printf("\n\nEnter Your Choice ::");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("\nEnter Two No ::", op);
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("\nTotal Addition =%d", c);
        break;
    case '-':
        printf("\nEnter Two No ::");
        scanf("%d%d", &a, &b);
        c = a - b;
        printf("\nTotal Subtraction =%d", c);
        break;
    case '*':
        printf("\nEnter Two No ::");
        scanf("%d%d", &a, &b);
        c = a * b;
        printf("\nTotal Multipiction =%d", c);
        break;
    case '/':
        printf("\nEnter Two No ::");
        scanf("%d%d", &a, &b);
        d = a / b;
        printf("\nTotal Divition =%.4f", d);
        break;
    }
    getch();
}