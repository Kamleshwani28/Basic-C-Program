#include<stdio.h>
#include<conio.h>
struct Student
{
	int rollno;
	char name[20];
	int fees;
};
struct Student S[3];
int i;
void getStud();
void showStud();
void main()
{
	clrscr();
	getStud();
	showStud();
	getch();
}
void getStud()
{
	for (i=0;i<=2;i++)
	{
		printf("\nEnter the Roll No=");
		scanf("%d",&S[i].rollno);
		printf("\nEnter the Name =");
		scanf("%s",S[i].name);
		printf("\nEnter the Fees=");
		scanf("%d",&S[i].fees);
	}
}
void showStud()
{

	printf("\nRoll No \t Name \t Fees");
	for (i=0;i<=2;i++)
	{
		printf("\n%d \t %s \t %d",S[i].rollno,S[i].name,S[i].fees);
	}
}
