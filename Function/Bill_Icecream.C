#include <stdio.h>
#include <conio.h>
void BillData();
void main()
{
    clrscr();
    BillData();
    getch();
}
void BillData()
{
    int icecream, quantity, bill;
    float discount_percentage = 15;
    float discounted_bill;
    printf("\nEnter the Icecream Price ::");
    scanf("%d", &icecream);
    printf("\nEnter the Quantity :: ");
    scanf("%d", &quantity);

    bill = icecream * quantity;

    printf("\nTotal bill is = %d", bill);
    printf("\nDiscount Percentage is ::%.2f", discount_percentage);

    discount_percentage = (discount_percentage * bill) / 100;

    discounted_bill = (bill - discount_percentage);

    printf("\nDiscount Amount = %.2f\n", discount_percentage);
    printf("\nFinal Bill =~\n");
    printf("\nTotal Net Bill  is =%.2f", discounted_bill);

}