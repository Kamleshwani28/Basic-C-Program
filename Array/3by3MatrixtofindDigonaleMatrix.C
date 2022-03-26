#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], r, c, flag = 1;
    clrscr();
    printf("\nEnter 3 By 3 Matrix :::");
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("The 3 By 3 Matrix is :::\n");
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            printf("\t%d", a[r][c]);
        }
        printf("\n");
    }
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            if (r == c && a[r][c] != 0)
                ;
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("\nMatrix is Not Diagonal ");
    }
    else
    {
        printf("\nMatrix is Diagonal");
    }
    getch();
}