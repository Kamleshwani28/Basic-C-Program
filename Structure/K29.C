#include<stdio.h>
#include<conio.h>
struct Data
{
	int op;
	int a,b,c;
};
struct Data S;
void showData();
void getData();
void main()
{
	clrscr();
	showData();
	getData();
	getch();
}
void showData()
{
	 printf("\n*****CULCULETR******");
	 printf("\n+ Addtion");
	 printf("\n- Subtrction");
	 printf("\n* Multiplition");
	 printf("\n/ Divition");
	 printf("\nEnter No:::=%s");
	 scanf("%s",&S.op);


}
void getData()
{
	switch(S.op)
	{
	 case '+':
		printf("\nEnter Two No:::");
		scanf("%d%d",&S.a,&S.b);
		S.c=S.a+S.b;
		printf("\nTotal Addtion=%d",S.c);
		break;
	 case '-':
		printf("\nEnter Two No:::");
		scanf("%d%d",&S.a,&S.b);
		S.c=S.a-S.b;
		printf("\nTotal Subtrction=%d",S.c);
		break;
	 case '*':
		printf("\nEnter Two No:::");
		scanf("%d%d",&S.a,&S.b);
		S.c=S.a*S.b;
		printf("\nTotal Multipition=%d",S.c);
		break;
	 case '/':
		printf("\nEnter Two No:::");
		scanf("%d%d",&S.a,&S.b);
		S.c=S.a/S.b;
		printf("\nTotal Divition=%d",S.c);



	}
}
