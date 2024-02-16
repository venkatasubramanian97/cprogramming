/*Write a C program to find the longest palindromic substring from a given string*/
#include <stdio.h>
#include <string.h>
char character(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    scanf("%s", &string);
    printf("Original string :\n%s",string);
    character(string);
}
char character(char string[])
{
    int i, j, k, sub, s = 0, count = 0, length, str;
    char substr[50];
    length = strlen(string);
    for (i = length; i > 0; i--)
    {
        sub = length - i;
        for (j = 0; j <= sub; j++)
        {
            str = j;
            for (k = length; k >= j; k--)
            {
                if (string[str] == string[k])
                {
                    substr[s] = string[str];
                    str++;
                    s++;
                    count++;
                }
                else
                {
                    str = j;
                    s = 0;
                    count = 0;
                }
                substr[s] = '\0';
                if (count == i)
                {
                    break;
                }
            }
            if (count == i)
            {
                break;
            }
        }
        if (count == i)
        {
            break;
        }
    }
    printf("\nLongest palindromic substring from the said string?\n");
    printf("%s", substr);
}
/*output:
Input the string : abcdcsdfabbccb
Original string :
abcdcsdfabbccb
Longest palindromic substring from the said string?
bccb
*/