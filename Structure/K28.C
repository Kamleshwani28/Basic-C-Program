#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int p=4;
	int cord[8]={200,50,100,200,300,200,200,50};
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

	drawpoly(p,cord);
	ellipse(200,200,0,360,100,50);

	arc(300,300,180,360,100);


	outtextxy(50,50,"Kamlesh Wani");



	getch();
}
