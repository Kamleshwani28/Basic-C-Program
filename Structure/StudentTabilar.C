// Example to Student tabilar Formate

#include <stdio.h>
#include <conio.h>
struct studentResult
{
    int no;
    char name[20];
    int sub[3];
    int total;
} stu[3];
void main()
{
    int i, j, k, l;
    clrscr();
    for (i = 0; i < 3; i++)
    {
        clrscr();
        printf("\nEnter The Data For Student[%d] :", i);
        printf("\n\nEnter Roll no :");
        scanf("%d", &stu[i].no);
        printf("\nEnter Name :");
        scanf("%s", &stu[i].name);
        printf("\nEnter Subject Marks :");
        for (j = 0; j < 3; j++)
        {
            printf("\nSubject[%d] :", j);
            scanf("%d", &stu[i].sub[j]);
        }
        for (k = 0; k < 3; k++)
        {
            stu[k].total = 0;
            for (l = 0; l < 3; l++)
            {
                stu[k].total = stu[k].total + stu[k].sub[i];
            }
        }
    }
    clrscr();
    printf("\n\n\n\t\tSTUDENT TABILAR FORMATE");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nRollno\t\tName\t\t\tTotal");
    for (i = 0; i < 3; i++)
    {
        printf("\n\n\n%d\t\t%s\t\t\t%d", stu[i].no, stu[i].name, stu[i].total);
    }
    getch();
}
