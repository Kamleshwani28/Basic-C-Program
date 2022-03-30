#include <stdio.h>
#include <conio.h>
struct Gender
{
    char gender, ch;
    int age;
};
struct Gender S;
void setGender();
void getGender();
void main()
{
    clrscr();
    setGender();
    getGender();
    getch();
}
void setGender()
{
    printf("\n Enter a Gender(M/F):");
    scanf("%c", &S.gender);
    printf("\n Enter a Age:");
    scanf("%d", &S.age);
}
void getGender()
{
    if (S.gender == 'm')
    {
        if (S.age > 18)
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
        if (S.age > 22)
        {
            printf("\n Female driver Can Allowed");
        }
        else
        {
            printf("\n Female Driver Cna Not Allowed");
        }
    }
}