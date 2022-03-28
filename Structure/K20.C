#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[10]="Apple";

	int i,l=0;
	clrscr();
       //	for (i=0;i<=5;i++)
	//{
	 //	printf("%c",name1[i]);
       //	}
	printf("\nEnter the name1:");
	scanf("%s",&name1);
	printf("\n%s",name1);

	l = strlen(name1);
	printf("\nLength=%d\n",l);
	printf("\nUppercase=%s\n",strupr(name1));
	printf("\nLowercase=%s\n",strlwr(name1));
	printf("\nReverse=%s\n",strrev(name1));

	getch();
}