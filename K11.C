#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=1;
	clrscr();
	for (a=1;a<=5;a++)
	{
		b=b*a;
		printf("\nThe Factorial of %d is :%d",a,b);
	}
	getch();
}