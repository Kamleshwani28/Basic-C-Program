// Find months and remaining day from total days
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, r;
    clrscr();
    printf("\nEnter the Number :");
    scanf("%d", &a);
    b = a / 30;
    printf("\nMonth ::%d\n", b);
    r = a % 30;
    printf("\nRemaining Days ::%d", r);
    getch();
}