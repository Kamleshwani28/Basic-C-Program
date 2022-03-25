#include <stdio.h>
#include <conio.h>
void main()
{
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("%d is a Positive Number ", number);
    }
    else
    {
        printf("%d is a Negative Number ", number);
    }
}