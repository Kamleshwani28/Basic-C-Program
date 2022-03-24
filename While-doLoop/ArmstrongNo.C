#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s, add = 0, t;
    clrscr();
    printf("\nEnter any Number ::");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        s = n % 10;
        add = add + (s * s * s);
        n = n / 10;
    }
    if (add == t)
    {
        printf("\nNumber is Armstrong");
    }
    else
    {
        printf("\nNumber is Not Armstrong");
    }
    getch();
}
