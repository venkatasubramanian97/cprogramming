/*Write a program in C to find the frequency of characters*/
#include <stdio.h>
char substring(char[], char);
void main()
{
    char string[100], str;
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the character to find frequency : ");
    scanf("%c",&str);
    substring(string, str);
}
char substring(char string[], char str)
{
    int i, count=0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if(string[i]==str)
        {
            count++;
        }
    }
    string[i]='\0';
    printf("The frequency of the '%c' is : %d",str,count);
}
/*output:
Input the string : This is a test string
Input the character to find frequency : i
The frequency of the 'i' is : 3
*/