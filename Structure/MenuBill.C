#include <stdio.h>
#include <conio.h>
struct Menu
{
    char ch;
    int ono, q, b;
};
struct Menu S;
void showMenu();
void getMenu();
void main()
{
    clrscr();
    showMenu();
    getMenu();
    getch();
}
void showMenu()
{
    printf("\n***MENU***");
    printf("\n1 IceCream");
    printf("\n2 Cone ");
    printf("\n3 Pestrices");
    printf("\n4 Exit");
    printf("\nEnter Your choise :");
    scanf("%d", &S.ono);
}
void getMenu()
{
    switch (S.ono)
    {
    case 1:
        printf("\nYour order is Icecream with price ::25/- ");
        printf("\nEnter Quntitiy of Icecream ::");
        scanf("%d", &S.q);
        S.b = 25 * S.q;
        printf("\nTotal IceCream Bill ::%d", S.b);
        break;
    case 2:
        printf("\nYour order is Cone with price ::35/- ");
        printf("\nEnter Quntitiy of Cone ::");
        scanf("%d", &S.q);
        S.b = 35 * S.q;
        printf("\nTotal Cone Bill ::%d", S.b);
        break;
    case 3:
        printf("\nYour order is Pestrices with Price ::45/-");
        printf("\nEnter Quntitiy ::");
        scanf("%d", &S.q);
        S.b = 45 * S.q;
        printf("\nTotal Pestrices Bill ::%d", S.b);
        break;
    case 4:
        printf("\n\nBye!Bye!");
        break;
    }
}