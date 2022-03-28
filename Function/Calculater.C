#include <stdio.h>
#include <conio.h>
void add();
void sub();
void multi();
void divi();
void main()
{
    clrscr();
    add();
    sub();
    multi();
    divi();
    getch();
}
void add()
{
    int a, b, c = 0,i;
    printf("\nEnter Two N0:::");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("\nAddtion=%d\n", c);
    for(i=0;i<18;i++)
    {
            printf("_",i);    
    }
}
void sub()
{
    int a, b, c = 0,i;
    printf("\n\nEnter Two No:::");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("\nSubtraction=%d\n", c);
    for(i=0;i<18;i++)
    {
            printf("_",i);    
    }
}
void multi()
{
    int a, b, c = 0,i;
    printf("\n\nEnter Two No:::");
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("\nMultiplicion=%d\n", c);
    for(i=0;i<18;i++)
    {
            printf("_",i);    
    }
}
void divi()
{
    int a, b, c = 0;
    printf("\n\nEnter Two No:::");
    scanf("%d%d", &a, &b);
    c = a / b;
    printf("\nDivision=%d\n", c);
}
