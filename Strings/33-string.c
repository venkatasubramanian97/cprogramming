/*Write a C program to count each character in a given string*/
#include <stdio.h>
char character(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    gets(string);
    character(string);
}
char character(char string[])
{
    int i, j, k, count, s = 0,v=0,number[100];
    char str[100],letter[100];
    for (i = 0; string[i] != '\0'; i++)
    {
        for (k = 0; k < s; k++)
        {
            if (str[k] == string[i])
            {
                i++;
            }
        }
        count = 1;
        for (j = i+1; string[j] != '\0'; j++)
        {
            if (string[i] == string[j])
            {
                str[s] = string[j];
                s++;
                count++;
            }
        }
        letter[v]=string[i];
        number[v]=count;
        v++;
    }
    letter[v]='\0';
    number[v]='\0';
    printf("The count of each character in the string '%s' is\n",string);
    for(i=0;letter[i]!='\0';i++)
    {
        printf("%c\t%d\n",letter[i],number[i]);
    }
}
/*output:
Input the string : w3resource
The count of each character in the string 'w3resource' is
w       1
3       1
r       2
e       2
s       1
o       1
u       1
c       1
*/