#include <stdio.h>
#include <conio.h>
void main()
{
    int r, p;
    float a;
    clrscr();
    printf("\nEnter the money in points ::");
    scanf("%f", &a);
    r = a;
    printf("\nTotal Rupees:%d\n", r);
    p = (a - r) * 100;
    printf("\nTotal Paisa:%d\n", p);
    getch();
}