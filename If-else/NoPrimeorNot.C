#include <stdio.h>
#include <conio.h>
void main()
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
        for (i = 2; i <= n - 1; i++)
        {
            if (n % 2 == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("\nNumber is Prime");
    }
    else
    {
        printf("\nNumber is Not Prime");
    }
    getch();
}
