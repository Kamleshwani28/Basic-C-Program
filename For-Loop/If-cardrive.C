#include<stdio.h>
#include<conio.h>
void main()
{
       int age;
       clrscr();
       printf("\nEnter Your Age:");
       scanf("%d",&age);
       if(age>=18)
       {
              printf("\nYou Can Drive a Car");     
       }
       else
       {
              printf("\nYou Can't Drive a Car");     
       }
       getch();     
}
