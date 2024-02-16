/*Write a program in C to find the maximum number of characters in a string*/
#include <stdio.h>
#include <string.h>
char maximum(char[]);
void main()
{
    char array[50];
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("Appears number of time : %d", maximum(array));
}
char maximum(char array[])
{
    int i, j, k, maximum = 0, frequencey, count, str[100], s = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        /*for (k = 0; k < s; k++)
        {
            if (str[k] == array[i])
            {
                continue;
            }
        }*/
        count = 0;
        for (j = 0; array[j] != '\0'; j++)
        {
            if (array[i] == array[j])
            {
                str[s] = array[i];
                s++;
                count++;
            }
        }
        if (maximum < count)
        {
            frequencey = array[i];
            maximum = count;
        }
    }
    printf("The highest frequency of character '%c'\n", frequencey);
    return maximum;
}
/*output:
Input the string : Welcome to w3resource.com
The highest frequency of character 'e'
Appears number of time : 4
*/