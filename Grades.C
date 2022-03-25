#include <stdio.h>
#include <conio.h>
void main()
{
    int marks;
    clrscr();
    printf("\nEnter marks to Know your Grade ::");
    scanf("%d", &marks);
    if (marks < 35)
    {
        printf("\nGrade 'F'");
    }
    else if (marks >= 35 && marks <= 40)
    {
        printf("\nGrade 'D'");
    }
    else if (marks >= 41 && marks <= 50)
    {
        printf("\nGrade 'C");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("\nGrade 'B'");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("\nGrade 'B+'");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("\nGrade 'A'");
    }
    else
    {
        printf("\nGrade 'A+'");
    }
    getch();
}
