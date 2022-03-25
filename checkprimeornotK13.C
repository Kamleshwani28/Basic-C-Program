#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=1;
	clrscr();
	printf("\nEnter the No:");
	scanf("%d",&n);
	if(n==1)
	{
		flag=1;
	}
	else
	{
		for (i=2;i<n;i++)
		{
			if(n%2==0)
			{
				flag=0;
				break;
			}
		}
	}
	if (flag==1)
	{
		printf("\nNo is prime");
	}
	else
	{
		printf("\nNo is Not prime");
	}
	getch();


}