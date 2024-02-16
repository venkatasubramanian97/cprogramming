/*Write a program in C to combine two strings manually*/
#include <stdio.h>
#include <string.h>
char combine(char[], char[]);
void main()
{
    char string[50], str[50];
    printf("Input the first string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the second string : ");
    fgets(str, sizeof(str), stdin);
    combine(string, str);
}
char combine(char string[], char str[])
{
    int i, s = 0;
    char strcom[100];
    for (i = 0;string[i]!='\n'; i++)
    {
        strcom[s] = string[i];
        s++;
    }
    strcom[s]=' ';
    s++;
    for (i = 0;str[i]!='\n'; i++)
    {
        strcom[s] = str[i];
        s++;
    }
    strcom[s] = '\0';
    printf("After concatenation the string is : \n");
    printf("%s", strcom);
}
/*output:
Input the first string : The test string one
Input the second string : The test string two
After concatenation the string is : 
The test string one The test string two
*/