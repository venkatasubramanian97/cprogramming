/*Write a C program to find the length of the longest substring of a given string without repeating characters*/
#include <stdio.h>
char character(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    scanf("%s",&string);
    character(string);
}
char character(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = i + 1; string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                break;
            }
        }
        if (string[i] == string[j])
        {
            break;
        }
    }
    printf("Length of the longest substring without repeating character : %d", j);
}
/*output:
Input the string : abcddefffd
Length of the longest substring without repeating character : 4
*/