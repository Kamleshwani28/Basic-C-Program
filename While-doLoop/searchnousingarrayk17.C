/* search a number in array */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,x,flag=-1;
	clrscr();
	printf("\nEnter the any 5 NO=");
	for (i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe 5 No Are :");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter No To Serch=");
	scanf("\n%d",&x);

	for(i=0;i<=4;i++)
	{
		if (a[i]==x)
		{
			flag=i;
			break;
		}
	}
	if (flag==-1)
	{
		printf("\nNo Not Available");
	}
	else
	{
		printf("\nNo is Available At:a[%d]",flag);
	}


	getch();
}