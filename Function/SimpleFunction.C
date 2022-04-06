// Simple program of function

#include <stdio.h>
#include <conio.h>
void printline();
void main()
{
    clrscr();
    printline();
    printf("\n It is The Programming \n");
    printline();
    getch();
}
void printline(void)
{
    int i;
    for (i = 1; i < 23; i++)
    {
        printf("-");
    }
}
