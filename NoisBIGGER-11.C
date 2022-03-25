#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b;
      printf("\n Enter the value of A:");
      scanf("%d",&a);
      printf("\n Enter the value of B:");
      scanf("%d",&b);
      if (a<b)
      {
            printf("\n A is a  Bigger than B");
       }
       else if(a<=b)
       {
              printf("\n A or B is Same");     
       }
       else
       {
             printf("\n B is Bigger than A");
        }
        getch ();
}