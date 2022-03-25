#include<stdio.h>
#include<conio.h>
void main()
{
       int i;
       clrscr();
       printf("\nEven Number 1 to 25 ::");
       for (i=1;i<=24;i++)
       {
        if (i%2==0)
        {
              printf("\n%d",i);
        }     
       }
       getch();
            
}