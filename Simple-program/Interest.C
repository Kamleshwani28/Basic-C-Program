// Find simple interest
#include <stdio.h>
#include <conio.h>
void main()
{
    float i, p, r, n;
    clrscr();
    printf("\nEnter the value p :");
    scanf("%f", &p);
    printf("\nEnter the value r :");
    scanf("%f", &r);
    printf("\nEnter the value n :");
    scanf("%f", &n);
    i = (p * r * n) / 100;
    printf("\nToatl Interest ::%.2f", i);
    getch();
}