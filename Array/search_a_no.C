#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10] = {10, 32, 71, 83, 92, 52, 75, 89, 51, 90};
    int n, i, find;
    clrscr();
    printf("\nArray ::-10,32,71,83,92,52,75,89,51,90\n\n");
    printf("\nEnter the Number you want to search ::");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == a[i])
        {
            find = 1;
            break;
        }
    }
    if (find == 1)
    {
        printf("\nYES, Number is present in the array");
    }
    else
    {
        printf("\nNO, Number is Not present in the array");
    }
    getch();
}