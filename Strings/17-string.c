/*Write a program in C to remove characters from a string except alphabets*/
#include <stdio.h>
char alphabets(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    alphabets(string);
}
char alphabets(char string[])
{
    int i,j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z'||string[i] >= 'A' && string[i] <= 'Z')
        {
            continue;
        }
        else
        {
            for(j=i;string[j]!='\0';j++)
            {
                string[j]=string[j+1];
            }
        }
    }
    printf("After removing the output string : %s",string);
}
/*output:
Input the string : w3resource.com
After removing the output string : wresourcecom
*/