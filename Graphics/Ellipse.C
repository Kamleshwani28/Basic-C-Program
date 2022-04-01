#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    //ellipse(x,y,sart-angle,end-angle,radius-x,radius-y);
    ellipse(200, 200, 90, 270, 100, 50);

    getch();
}