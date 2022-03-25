#include <stdio.h>
#include <conio.h>
void main()
{
    int len = 0;
    char s[10];
    clrscr();
    printf("\nEnter a Word or Number ::");
    gets(s);
    while (s[len] != '\0')
    {
        len++;
    }
    printf("\nString Length:%d", len);
    getch();
}