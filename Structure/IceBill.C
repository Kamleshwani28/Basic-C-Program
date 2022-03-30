#include <stdio.h>
#include <conio.h>
struct Icecream
{
    int ice, quan, bill;
    float dis_per = 10;
    float dis_bill;
};
void setIcecream();
void getIcecream();
struct Icecream S;
void main()
{
    clrscr();
    setIcecream();
    getIcecream();
    getch();
}
void setIcecream()
{
    printf("\nEnter the Icecream Price :");
    scanf("%d", &S.ice);
    printf("\nEnter the Quantity : ");
    scanf("%d", &S.quan);
}
void getIcecream()
{
    S.bill = S.ice * S.quan;

    printf("\nTotal bill is : %d", S.bill);
    printf("\nDiscount Percentage is :%.2f", S.dis_per);

    S.dis_per = (S.dis_per * S.bill) / 100;

    S.dis_bill = (S.bill - S.dis_per);

    printf("\nDiscount Amount : %.2f\n", S.dis_per);
    printf("\nFinal Bill::-\n");
    printf("\nTotal Net Bill  is :%.2f", S.dis_bill);
}