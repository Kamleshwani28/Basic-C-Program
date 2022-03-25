#include<stdio.h>
#include<conio.h>
void main()
{
    int inch,feet, centimeter;
    float meter;
    clrscr();
    printf("\nEnter Lenght in Inch::");
    scanf("%d", &inch);
    feet=inch/12;
    printf("\nFeet=%d",feet);
    meter = inch*0.0254;
    printf("\nMeter=%.2f", meter);
    centimeter=inch*2.54;
    printf("\nCentimeter=%d",centimeter);
    getch();
}