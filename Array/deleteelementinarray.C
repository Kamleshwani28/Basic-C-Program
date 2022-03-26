#include <stdio.h>
#include <conio.h>
void main()
{
    int m[10], del, i, j, n;
    clrscr();
    printf("\nHow many elements ? ::");
    scanf("%d", &n);
    printf("\nEnter %d elements ::", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    printf("\nEnter number for delete ::");
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
        if (m[i] == del)
            break;
    }
    for (j = i; j < n; j++)
    {
        m[j] = m[j + 1];
    }
    n--;
    printf("\nAfter deletion =");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", m[i]);
    }
    getch();
}