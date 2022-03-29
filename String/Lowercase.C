#include <stdio.h>
#include <conio.h>
void main()
{
    char s1[20], s2[20];
    int i = 0;
    clrscr();
    printf("Enter a string ::");
    gets(s1);
    while (s1[i] != '\0')
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s2[i] = s1[i] + 32;
        }
        else
        {
            s2[i] = s1[i];
        }
        i++;
    }
    s2[i] = '\0';
    printf("\n Lower Case string ::%s", s2);
    getch();
}