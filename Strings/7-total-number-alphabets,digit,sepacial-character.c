/*Write a program in C to count the total number of alphabets, digits and special characters in a string*/
#include <stdio.h>
#include <string.h>
char alphabets(char[]);
char digits(char[]);
char special_char(char[]);
void main()
{
    char array[50];
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("Number of alphabets in the string is : %d", alphabets(array));
    printf("\nNumber of digits in the string is :%d", digits(array));
    printf("\nNmuber of special characters in the string is : %d", special_char(array));
}
char alphabets(char array[])
{
    int i, count = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z' || array[i] >= 'A' && array[i] <= 'Z')
        {
            count++;
        }
    }
    return count;
}
char digits(char array[])
{
    int i, count = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= '0' && array[i] <= '9')
        {
            count++;
        }
    }
    return count;
}
char special_char(char array[])
{
    int i, count = 1;
    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z' || array[i] >= 'A' && array[i] <= 'Z')
        {
            continue;
        }
        else if (array[i] >= '0' && array[i] <= '9' || array[i] == '\n')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}
/*output:
Input the string : Welcome to W3resource.com
Number of alphabets in the string is : 21
Number of digits in the string is :1
Nmuber of special characters in the string is : 4
*/