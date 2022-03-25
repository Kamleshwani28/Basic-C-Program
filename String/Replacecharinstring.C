#include <stdio.h>
#include <conio.h>
void main()
{
    int len = 0, i;
    char s[40], c, r;
    clrscr();
    printf("Enter original string ::");
    gets(s);
    while (s[len] != '\0')
        len++;
    fflush(stdin);
    printf("\nEnter character to replace:");
    scanf("%c", &c);
    fflush(stdin);
    printf("\nEnter new character ::");
    scanf("%c", &r);
    for (i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            s[i] = r;
        }
    }
    puts(s);
    getch();
}