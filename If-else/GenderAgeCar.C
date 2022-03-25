#include <stdio.h>
#include <conio.h>
void main()
{
    char gender, ch;
    int age;
    printf("\n Enter a Gender(M/F)::");
    scanf("%c", &gender);
    printf("\n Enter a Age::");
    scanf("%d", &age);
    if (gender == 'm')
    {
        if (age > 18)
        {
            printf("\n Male Driver can Allowed");
        }
        else
        {
            printf("\n Male Driver can Not Allowed");
        }
    }
    else
    {
        if (age > 22)
        {
            printf("\n Female driver Can Allowed");
        }
        else
        {
            printf("\n FEmale Driver Cna Not Allowed");
        }
    }
    getch();
}
