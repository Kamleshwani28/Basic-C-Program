#include <stdio.h>
#include <conio.h>
void Matrix();
void main()
{
    clrscr();
    Matrix();
    getch();
}
void Matrix()
{
    int a[3][3];
    int r, c;
    clrscr();
    printf("\nEnter The 3 by 3 Matrix :::");
    for (r = 0; r <= 1; r++)
    {
        for (c = 0; c <= 1; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("\nThe 3 by 3 Matrix is :: ");
}
