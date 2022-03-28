#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	circle(130,130,80);
	rectangle(210,210,50,50);
	line(50,130,210,130);
	line(130,50,130,210);

	getch();
}
