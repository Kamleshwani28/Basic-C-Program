#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    for (i = 15; i >= 1; i--)
    {
        sectcolor(i);
        circle(200, 200, 10 * i);
        delay(5000);
    }
    getch();
}