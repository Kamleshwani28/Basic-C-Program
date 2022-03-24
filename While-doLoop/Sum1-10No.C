#include<stdio.h>
#include<conio.h>
void main()
{
       int i,sum=0;
       clrscr();
       i=1;
       while (i<=10)
       {
              printf("\n%d",i);
              sum=sum+i;
              i++;     
       }
       printf("\n\nAddition ::%d",sum);
       getch();     
}
