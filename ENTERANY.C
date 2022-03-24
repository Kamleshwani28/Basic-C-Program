#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("\nEnter 5 NO=");
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe 5 No Are :");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}