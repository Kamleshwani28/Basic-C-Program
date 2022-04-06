// Read an array and find out max . Array as argument

#include <stdio.h>
int max(int[], int);
void main()
{
    int a[5], m, i;
    printf("\nEnter 5 integers :");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    m = max(a, 5);
    printf("\n Maxminum is %d", m);
}
int max(int a[], int n)
{
    int m = -32768, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > m)
            m = a[i];
    }
    return (m);
}
