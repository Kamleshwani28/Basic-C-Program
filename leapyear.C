#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    clrscr();
    printf("\nEter A Year:::");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("\n%d is a leap Year", year);
    }
    else if (year % 100 == 0)
    {
        printf("\n%d is a leap Year", year);
    }
    else if (year % 4 == 0)
    {
        printf("\n% is a leap Year", year);
    }
    else
    {
        printf("\n%d is a Not Leap Year", year);
    }
    getch();
}
