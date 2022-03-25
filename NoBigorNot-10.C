#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b;
      clrscr();
      printf("\nEnter A Number:");
      scanf("%d",&a);
      printf("\nEnter B Number:");
      scanf("%d",&b);
      if (a>b)
      {
             printf("\nA is Big");     
      }
      else if(a<=b) 
      {
             printf("\nBoth Are Big");     
      }
      else
      {
             printf("\nB is Big");     
      }
      getch();     
}