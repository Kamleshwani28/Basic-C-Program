/*Check Number is Palindeome or Not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,d=100,sum=0,t=0;
	clrscr();
	printf("\nEnter No:");
	scanf("%d",&n);
	t=n;
	while (n>0)
	{
		r=n%10;
		sum=sum+(r*d);
		d=d/10;
		n=n/10;
	}
	if (t==sum)
	{
		printf("\nNo is Palindrome");
	}
	else
	{
		printf("\nNo id Not Palindeome");
	}

	getch();
}