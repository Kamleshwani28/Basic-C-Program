#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    clrscr();
    printf("\nEnter the value of A ::");
    scanf("%d", &a);
    printf("\nEnter the value of B ::");
    scanf("%d", &b);
    printf("\nBefore Swapping");
    printf("\n\nA::%d\nB::%d", a, b);
    a = b + a;
    b = a - b;
    a = a - b;
    printf("\n\nAfter Swapping");
    printf("\n\nA::%d\nB::%d", a, b);
    getch();
}