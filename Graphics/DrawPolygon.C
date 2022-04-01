#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    int p = 4;
    int cord[8] = {200, 50, 100, 200, 300, 200, 200, 50};
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    drawpoly(p, cord);

    getch();
}