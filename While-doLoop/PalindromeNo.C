#include<stdio.h>
#include<conio.h>
void main()
{
       int n,r,d=100,sum=0,t=0;
       clrscr();
       printf("\nEnter any Number ::");
       scanf("%d",&n);
       t=n;
       while (n>0)
       {
              r=n%10;
              sum=sum+(r*d);
              d=d/10;
              n=n/10;            
       }
       if (t==sum)
       {
              printf("\nNumber is palindrome");     
       }
       else
       {      
              printf("\nNumber is Not Palindrome");
       }
       getch();     
}
