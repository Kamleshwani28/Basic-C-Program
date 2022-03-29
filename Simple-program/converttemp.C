#include <stdio.h>
#include <conio.h>
void main()
{
    float celsius, fahrenheit;
    clrscr();
    printf("\nEnter Temperature in Celsius : ");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit : %f ", fahrenheit);

    getch();
}