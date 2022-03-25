#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    clrscr();
    printf("\nEnter Any Number ::");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("\nNumber is Even.");
    }
    else
    {
        printf("\nNumber is Odd.");
    }
    getch();
}