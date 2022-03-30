#include <stdio.h>
#include <conio.h>
void main()
{
    char s1[100], s2[10];
    int len1 = 0, len2 = 0, i, j;
    clrscr();
    printf("\nEnter first string :");
    fflush(stdin);
    gets(s1);
    printf("\nEnter second string :");
    fflush(stdin);
    gets(s2);
    while (s1[len1] != '\0')
    {
        len1++;
    }
    while (s2[len2] != '\0')
    {
        len2++;
    }
    for (j = 0, i = len1; j <= len2; i++, j++)
    {
        s1[i] = s2[j];
    }
    puts(s1);
    getch();
}