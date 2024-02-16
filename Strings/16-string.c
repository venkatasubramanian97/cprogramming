/*Write a program in C to find the number of times a given word 'the' appears in the given string*/
#include <stdio.h>
#include <string.h>
char substring(char[], char[]);
void main()
{
    char string[100], str[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the str : ");
    scanf("%s",&str);
    substring(string, str);
}
char substring(char string[], char str[])
{
    int i, s = 0, length, count = 0, word = 0,low;
    length = strlen(str);
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            if (string[i] == str[s])
            {
                count++;
                s++;
                if (length == count)
                {
                    word++;
                }
            }
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            low = string[i];
            string[i] = low + 32;
            if (string[i] == str[s])
            {
                count++;
                s++;
                if (length == count)
                {
                    word++;
                }
            }
        }
        else
        {
            s = 0;
            count = 0;
        }
    }
    printf("The frequency of the word '%s' is : %d",str, word);
}
/*output:
Input the string : The string where the word the present more than once.
Input the str : the
The frequency of the word 'the' is : 3
*/