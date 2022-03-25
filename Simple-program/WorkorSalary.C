#include<stdio.h>
#include<conio.h>
void main()
{
      int emply,wage,workingtime,dmonth;
      int twage,tworkingtime,tdmonth;
      float pfpersentage; 
      clrscr();
      printf("\nEnter Employee I'D::");
      scanf("%d",&emply);
      printf("\nEnter Wage Per Hours::");
      scanf("%d",&wage);
      printf("\nEnter Working Hours Per Day(4/8)::");
      scanf("%d",&workingtime);
      printf("\nEnter Day in Month::");
      scanf("%d",&dmonth);
      twage=wage*workingtime;
      printf("\n\nTotal Wage Per Hours=%d",twage);
      tdmonth=twage*dmonth;
      printf("\n\nTotal Wage Per Month=%d",tdmonth);
      printf("\n\nEnter the PF Persentage::");
      scanf("%f",&pfpersentage);
      pfpersentage=(pfpersentage*tdmonth)/100;
      twage=tdmonth-pfpersentage;
      printf("\nTotal PF Amount=%.2f",pfpersentage);
      printf("\n\nTotal Salary in Hand=%d",twage);
      getch();
}
