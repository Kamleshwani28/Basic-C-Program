#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    int ono, q, b;
    clrscr();
    printf("\n***MENU***");
    printf("\n1 IceCream");
    printf("\n2 Cone ");
    printf("\n3 Pestrices");
    printf("\n4 Exit");
    printf("\nEnter Your choise :: ");
    scanf("%d",&ono);
    switch (ono)
    {
    case 1:
              printf("\nYour order is Icecream with price ::25/- ");
              printf("\nEnter Quntitiy of Icecream ::");
              scanf("%d",&q);
              b = 25 * q;
              printf("\nTotal Bill ::%d",b);
              break;
    case 2:
              printf("\nYour order is Cone with price ::35/- ");
              printf("\nEnter Quntitiy of Cone ::");
              scanf("%d",&q);
              b = 35 * q;
              printf("\nTotal Bill ::%d",b);
              break;
    case 3:
              printf("\nYour order is Pestrices with Price ::45/-");
              printf("\nEnter Quntitiy ::");
              scanf("%d",&q);
              b = 45 * q;
              printf("\nTotal Bill ::%d",b);
              break;
    case 4:
              printf("\n\nBye!Bye!");
              break;
    }
    getch();
}
