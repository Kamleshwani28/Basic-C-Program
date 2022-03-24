#include <stdio.h>
#include <conio.h>
void main()
{
    int n,rev=0,s;
    clrscr();
    printf("\nEnter any Number ::");
    scanf("%d", &n);
    while (n > 0)
    {
        s= n%10;
        rev=rev*10+s;
        n= n/10;
    }
    printf("\nReverse Number =%d",rev);
    getch();
}
