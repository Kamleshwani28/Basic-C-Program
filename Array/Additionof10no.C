#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,sum=0;
	clrscr();
	printf("Enter the 10 numbers ::");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("\nAddition=%d",sum);
	getch();
}