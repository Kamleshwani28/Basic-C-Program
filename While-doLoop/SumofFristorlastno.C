#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s, sum = 0;
    clrscr();
    printf("\nEnter the Number::");
    scanf("%d", &n);
    sum = n % 10;

    while (n > 0)
    {
        s = n % 10;
        n = n / 10;
    }
    sum = sum + s;
    printf("\nSum of First or Last Number ::%d", sum);
    getch();
}