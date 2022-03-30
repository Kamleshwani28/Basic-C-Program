#include <stdio.h>
#include <conio.h>
void main()
{
    int m[10], ins, i, n, pos;
    clrscr();
    printf("\nHow many elements ? :");
    scanf("%d", &n);
    printf("\nEnter %d elements :: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d", &m[i]);
    }
    printf("\nEnter number to be inserted ::");
    scanf("\n%d", &ins);
    printf("\nEnter position:");
    scanf("\n%d", &pos);
    for (i = n; i > pos; i--)
    {
        m[i] = m[i - 1];
    }
    m[pos] = ins;
    n++;
    printf("\nArray after insertion\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\n", m[i]);
    }
    getch();
}