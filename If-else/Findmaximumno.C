#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, max;
    clrscr();
    printf("\nEnter two Numbers ::");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("\nMaximum Number is %d", max);
    getch();
}