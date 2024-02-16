/*Write a C program to sort a string array in ascending order*/
#include <stdio.h>
char ascii(char[]);
int ascending(int[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    ascii(string);
}
char ascii(char string[])
{
    int i, str[100], s = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z' || string[i] >= '0' && string[i] <= '9')
        {
            str[s] = string[i];
            s++;
        }
    }
    str[s] = '\0';
    ascending(str);
}
int ascending(int str[])
{
    int i, j;
    char temp;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    str[i] = '\0';
    printf("After sorting the string appears like :\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}
/*output:
Input the string : w3resource
After sorting the string appears like :
3ceeorrsuw
*/