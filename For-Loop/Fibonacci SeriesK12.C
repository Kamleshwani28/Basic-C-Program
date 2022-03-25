#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c=0,i,l;
	clrscr();
	printf("\nEnter Level No:");
	scanf("%d",&l);
	printf("\n%d\n%d",a,b);
	for (i=1;i<=l;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	getch();
}