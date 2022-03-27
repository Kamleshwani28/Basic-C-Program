#include<stdio.h>
#include<conio.h>
void add();
void main()
{
       clrscr();
       add();
       getch();     
}
void add()
{
       int a,b,c=0;
       printf("\nEnter Two N0:::");
       scanf("%d %d",&a,&b);
       c=a+b;
       printf("\nAddtion=%d\n",c);           
}