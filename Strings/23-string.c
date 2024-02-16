/*Write a program in C to check whether a character is a Hexadecimal Digit or not*/
#include <stdio.h>
void main()
{
    char string;
    printf("Input the character : ");
    scanf("%c", &string);
    if (string >= 'A' && string <= 'F' || string >= '0' && string <= '9')
    {
        printf("The entered character is a hexadecimal digit");
    }
    else
    {
        printf("The entered character is not a hexadecimal digit");
    }
}
/*output:
Input the character : 7
The entered character is a hexadecimal digit
*/
