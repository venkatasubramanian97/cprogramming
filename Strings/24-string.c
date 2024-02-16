/*Write a program in C to check whether a letter is uppercase or not*/
#include <stdio.h>
void main()
{
    char string;
    printf("Input the character : ");
    scanf("%c", &string);
    if (string >= 'A' && string <= 'Z')
    {
        printf("The entered letter is an UPPERCASE letter");
    }
    else
    {
        printf("The entered letter is not an UPPERCASE letter");
    }
}
/*output:
Input the character : p
The entered letter is not an UPPERCASE letter
*/