#include <stdio.h>
#include <conio.h>
struct Student
{
    int e, m, h, phy, chem;
    float pf;
    int ma;
};
struct Student S;
void setStudent();
void getStudent();
void main()
{
    clrscr();
    setStudent();
    getStudent();
    getch();
}
void setStudent()
{
    printf("\n Marks of English::");
    scanf("%d", &S.e);
    printf("\n Marks of Marathi::");
    scanf("%d", &S.m);
    printf("\n Marks of Hindi::");
    scanf("%d", &S.h);
    printf("\n Marks of Physics::");
    scanf("%d", &S.phy);
    printf("\n Marks of Chemistry::");
    scanf("%d", &S.chem);
}
void getStudent()
{
    S.ma = (S.e + S.m + S.h + S.phy + S.chem);
    printf("\n\nTotal Marks ::%d/500", S.ma);
    S.pf = S.ma / 5;
    printf("\n\nTotal Persentage ::%.2f", S.pf);
}