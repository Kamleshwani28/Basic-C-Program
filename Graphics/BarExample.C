// Bar Example

#include <graphics.h>
#include <conio.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BIG");
    cleardevice();
    bar(100, 150, 250, 200);
    getch();
}