#include <stdio.h>
#include <conio.h>
void Prime();
void main()
{
    clrscr();
    Prime();
    getch();
}
void Prime()
{
    int n, i, flag = 1;
    clrscr();
    printf("\nEnter The No:");
    scanf("%d", &n);
    if (n == 1)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i <= n - i; i++)
        {
            if (n % 2 == 1)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("\nNo is Prime");
    }
    else
    {
        printf("\nNo is Not Prime");
    }
}
