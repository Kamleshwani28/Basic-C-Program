#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,c=0,d,e;
      float f;
      clrscr();
      printf("\nEnter Frist Number::");
      scanf("%d",&a);
      printf("\nEnter Second Number::");
      scanf("%d",&b);
      c=a+b;
      d=a-b;
      e=a*b;
      f=a/b;
      printf("\nTotal Addition=%d\n",c);
      printf("\nTotal Subtraction=%d\n",d);
      printf("\nTotal Multipiction=%d\n",e);
      printf("\nTotal Divition=%.2f",f);
      getch();
}
