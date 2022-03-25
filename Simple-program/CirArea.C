#include <stdio.h>
#include <conio.h>
void main()
{
    int r;
    float area = 0;
    clrscr();
    printf("\n enter radius of circle=");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("\n area of circle =%f", area);
    getch();
}
