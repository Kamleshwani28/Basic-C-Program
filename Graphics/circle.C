#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    setcolor(BLUE);
    circle(200, 200, 100);

    getch();
}