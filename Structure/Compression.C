#include <stdio.h>
#include <conio.h>
struct Compression
{
    int a, b;
    int c, d;
};
struct Compression S;
void setCompression();
void getCompression();
void main()
{
    clrscr();
    setCompression();
    getCompression();
    getch();
}
void setCompression()
{
    printf("\nEnter Value of A :");
    scanf("%d", &S.a);
    printf("\nEnter Value of B :");
    scanf("%d", &S.b);
    if (S.a > S.b)
    {
        printf("\nA is Big");
    }
    else
    {
        printf("\nB is Big");
    }
}
void getCompression()
{
    printf("\n\nEnter Value of C :");
    scanf("%d", &S.c);
    printf("\nEnter Value of D :");
    scanf("%d", &S.d);
    if (S.c > S.d)
    {
        printf("\nC is Big");
    }
    else
    {
        printf("\nD is Big");
    }
}