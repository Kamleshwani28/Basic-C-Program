#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void main()
{
	int a,b,i;
	clrscr();
	for(i=0;i<=3;i++)
	{
	printf("\nEnter The Two No:");
	scanf("%d%d",&a,&b);

	add(a,b);
	sub(a,b);
	}
	getch();
}
void add(int a,int b)
{
	printf("\nAddtion=%d",a+b);

}
void sub(int a,int b)
{
	printf("\nSubtraction=%d",a-b);
}
