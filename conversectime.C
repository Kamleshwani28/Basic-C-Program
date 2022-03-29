#include <stdio.h>
#include <conio.h>
void main()
{
    int ts, h, m, s;
    printf("\nEnter total seconds :: ");
    scanf("%d", &ts);
    h = ts / 3600;
    ts = ts % 3600;
    m = ts / 60;
    s = ts % 60;
    printf("\nHours :: %d\n \nMinutes ::%d\n \nSeconds :: %d", h, m, s);
}