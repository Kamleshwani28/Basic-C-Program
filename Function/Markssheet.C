#include <stdio.h>
#include <conio.h>
void marks();
void main()
{
    clrscr();
    marks();
    getch();
}
void marks()
{
    int english, marathi, hindi, physics, chemistry,m;
    float p;
    printf("\n Marks of English::");
    scanf("%d", &english);
    printf("\n Marks of Marathi::");
    scanf("%d", &marathi);
    printf("\n Marks of Hindi::");
    scanf("%d", &hindi);
    printf("\n Marks of Physics::");
    scanf("%d", &physics);
    printf("\n Marks of Chemistry::");
    scanf("%d", &chemistry);
    m = (english + marathi + hindi + physics + chemistry);
    printf("\n\n Total Marks Often By=%d/500", m);
    p = m / 5;
    printf("\n Total Persentage=%.2f", p);
}