/*Write a C program to reverse all the vowels present in a given string. Return the newly created string*/
#include <stdio.h>
char vowel(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    gets(string);
    vowel(string);
}
char vowel(char string[])
{
    int i, s = 0;
    char str[100];
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            str[s] = string[i];
            s++;
        }
    }
    string[i] = '\0';
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            string[i] = str[--s];
        }
    }
    string[i] = '\0';
    printf("Check bracket in the said string is valid or not? :\n");
    printf("\"%s\"", string);
}
/*output:
Input the string : AEIou
Check bracket in the said string is valid or not? :
"uoIEA"
*/