/*Write a program in C to check whether a character is a digit or not*/
#include <stdio.h>
void main()
{
    char string;
    printf("Input the character : ");
    scanf("%c", &string);
    if (string >= '0' && string <= '9')
    {
        printf("The entered character is a digit");
    }
    else
    {
        printf("The entered character is not a digit");
    }
}
/*output:
Input the character : 8
The entered character is a digit
*/