#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], b[5], c[5], i;
    printf("\nEnter First array ::");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("\nEnter Second array ::");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nArrays before swapping ::-");
    printf("\n\nFirst array =");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nSecond array =");
    for (i = 0; i < 5; i++)
    {
        printf("%d", b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    printf("\n\nArrays after swapping ::-");
    printf("\n\nFirst array =");
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    printf("\nSecond array =");
    for (i = 0; i < 5; i++)
    {
        printf("%d", b[i]);
    }
}