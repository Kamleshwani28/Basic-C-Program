#include <stdio.h>
#include <conio.h>
void age();
void main()
{
    int i;
    clrscr();
    for (i = 0; i <= 10; i++)
    {
        age();
    }
    getch();
}
void age()
{
    int age;
    printf("\n Enter Your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\n Your can drive The Car\n");
    }
    else
    {
        printf("\n You can't dtive The car\n");
    }
}
