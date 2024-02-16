/*Write a program in C to find the largest and smallest words in a string*/
#include <stdio.h>
char larg(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    gets(string);
    larg(string);
}
char larg(char string[])
{
    int i, j, s = 0, count = 0, min = 100, max = 0, a = 0, b = 0;
    char str[100], smallest[10], largest[10];
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
            count++;
            str[s] = string[i];
            s++;
            str[s] = '\0';
        }
        else
        {
            if (min > count)
            {
                min = count;
                for (j = 0; str[j] != '\0'; j++)
                {
                    smallest[a] = str[j];
                    a++;
                }
                smallest[a] = '\0';
            }
            if (max < count)
            {
                max = count;
                for (j = 0; str[j] != '\0'; j++)
                {
                    largest[b] = str[j];
                    b++;
                }
                largest[b] = '\0';
            }
            count = 0;
            s = 0;
            a = 0;
            b = 0;
        }
    }
    printf("The largest word is '%s' and the smallest word is '%s' in the string :\n",largest,smallest);
    printf("'%s'",string);
}
/*output:
Input the string : It is a string with smallest and largest word
The largest word is 'smallest' and the smallest word is 'a' in the string :
'It is a string with smallest and largest word'
*/