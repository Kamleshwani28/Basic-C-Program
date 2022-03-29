#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    clrscr();
    printf("\nEnter the value of A ::");
    scanf("%d", &a);
    printf("\nEnter the value of B ::");
    scanf("%d", &b);
    printf("\nBefore swapping\n");
    printf("\nA ::%d\nB ::%d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\n\nAfter swapping\n");
    printf("\nA ::%d\nB ::%d", a, b);
    getch();
}