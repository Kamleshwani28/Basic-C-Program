#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    clrscr();
    printf("\nEnter Number :");
    scanf("%d", &n);
    i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= n);
    getch();
}