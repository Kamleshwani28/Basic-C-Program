#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],tmp[10],i,j,temp;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("\nEnter value of %d Elements :",i+1);
		scanf("%d",&arr[i]);
		tmp[i]=arr[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n-------------------------------------------");
	printf("\n Original\tAccending\tDescending");
	printf("\n-------------------------------------------");
	for(i=0,j=9;i<10;i++,j--)
	{
		printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
	}
	printf("\n-------------------------------------------");
	getch();
}