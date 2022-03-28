#include<stdio.h>
#include<conio.h>
void a();
void s();
void m();
void d();
void main()
{

	clrscr();
	a();
	s();
	m();


	getch();
}
void a()
{
	int a,b,c=0;
	printf("\nEnter Two No:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\nAddtion=%d\n",c);
}
void s()
{
	int a,b,c=0,i;
	printf("\nEnter Two No:");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("Subtarction=%d\n",c);
}
void m()
{
	int a,b,c=0;
	printf("\nEnter Two No:");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("Mulitipiction=%d\n",c);

}