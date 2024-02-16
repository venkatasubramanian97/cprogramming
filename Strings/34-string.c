/*Write a C program to convert vowels into uppercase characters in a string*/
#include <stdio.h>
char vowel(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("The original string :\n");
    printf("%s",string);
    vowel(string);
}
char vowel(char string[])
{
    int i, str;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            str = string[i];
            string[i] = str - 32;
        }
    }
    string[i] = '\0';
    printf("After converting vowels into upper case the sentehce become :\n");
    printf("%s", string);
}
/*output:
Input the string : w3resource
The original string :
w3resource
After converting vowels into upper case the sentehce become :
w3rEsOUrcE
*/