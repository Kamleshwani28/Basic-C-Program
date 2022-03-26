/*Two By  Two Matrix*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], r, c;
    clrscr();
    printf("\nEnter The 2 by 2 matrix ::");
    for (r = 0; r <= 1; r++)
    {
        for (c = 0; c <= 1; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("\nThe  2 by 2 Martix is \n ::");
    for (r = 0; r <= 1; r++)
    {
        for (c = 0; c <= 1; c++)
        {
            printf("\t %d", a[r][c]);
        }
        printf("\n");
    }
    getch();
}