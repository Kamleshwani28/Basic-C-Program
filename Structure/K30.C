#include<stdio.h>
#include<conio.h>
struct Data
{
	char name[20];
	int rollno,fees;
	int m.h.e;
	int tm,pf;
};
struct Data S;
void getData();
void shwoData();
void main()
{
	clrscr();
	getData();
	showData();
	getch();
}
void getData()
{
	printf("\nEnter The Name:::");
	scanf("%s",&S.name);
	printf("\nEnter The Roll No:::");
	scanf("%d",&S.rollno);
	printf("\nEnter Fees:::");

}