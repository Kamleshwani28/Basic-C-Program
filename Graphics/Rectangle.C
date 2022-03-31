#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    setcolor(RED);
    rectangle(100, 100, 250, 250);

    getch();
}