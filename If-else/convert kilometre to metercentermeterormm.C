#include <stdio.h>
#include <conio.h>
int main()
{
    float km, ans;
    int v;
    clrscr();
    printf("Enter distance in K.M  :: ");
    scanf("%f", &km);
    printf("\n1 for Meter \n2 for Centimeter \n3 for MM  ");
    printf("\nEnter your Choise:::");
    scanf("%d", &v);

    if (v == 1)
    {
        ans = km * 1000;
    }

    if (v == 2)
    {
        ans = km * 100000;
    }

    if (v == 3)
    {
        ans = km * 1000000;
    }
    printf("\nAnswer =%.2f", ans);
    getch();
}