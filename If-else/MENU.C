#include <stdio.h>
#include <conio.h>
void main()
{
    int ono;
    clrscr();
    printf("\n***MENU***");
    printf("\n1 Icrecream");
    printf("\n2 Cone");
    printf("\n3 Pestries");
    printf("\n4 Exit");
    printf("\nEnter Your Choise::");
    scanf("%d", &ono);
    if (ono == 1)
    {
        printf("\nYour order is Icecream with price ::15/-");
    }
    else if (ono == 2)
    {
        printf("\nYour order is Cone with price ::34/-");
    }
    else if (ono == 3)
    {
        printf("\nYour order is pestries with price ::56/-\n");
    }
    printf("\nThanku for visiting");
    getch();
}
