#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a[10][10], j, i;
    clrscr();
    printf("\nEnter Number :::");
    scanf("%d", &n);
    printf("\nEnter %d*%d matrix ::\n ", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
    }
    for (i = 0; i < 20; i++)
    {
        printf("_", i);
    }
    printf("\n\nOriginal matrix =\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 20; i++)
    {
        printf("_", i);
    }
    printf("\n\nTraspose matrix =\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }
    getch();
}