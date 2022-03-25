#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,small=0;
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
	small=a[0];
	for(i=1;i<=4;i++)
	{
		if (a[i]<small)
		{
			small=a[i];
		}
	}
	printf("\nSmall No=%d",small);

	getch();
}