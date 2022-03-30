#include <stdio.h>
void main()
{
    int upper = 0, lower = 0, i = 0;
    char ch[50];
    printf("\nEnter a String :");
    gets(ch);
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            lower++;
        i++;
    }
    printf("\nUppercase Letters are : %d", upper);
    printf("\n\nLowercase Letters are : %d", lower);
}