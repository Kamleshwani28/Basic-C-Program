#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm, i;
    clrscr();
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    for (i = 1; i <= 5; i++)
    {
        circle(200, 200 * i);
    }
    getch();
}