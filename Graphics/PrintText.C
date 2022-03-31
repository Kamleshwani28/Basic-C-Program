#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    outtextxy(100, 100, "Graphics programming");

    getch();
}