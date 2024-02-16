/*Write a program in C to convert a string to lowercase*/
#include <stdio.h>
char lower(char[]);
void main()
{
    char string[50];
    printf("Input the string in UPPERCASE : ");
    fgets(string, sizeof(string), stdin);
    lower(string);
}
char lower(char string[])
{
    int i, str;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            str = string[i];
            string[i] = str + 32;
        }
    }
    string[i] = '\0';
    printf("Here is the above string in lowercase :\n");
    printf("%s", string);
}
/*output:
Input the string in UPPERCASE : THE QUICK BROWNE FOX JUMPS OVER THE LAZY DOG
Here is the above string in lowercase :
the quick browne fox jumps over the lazy dog*/