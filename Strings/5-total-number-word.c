/*Write a program in C to count the total number of words in a string*/
#include <stdio.h>
#include <string.h>
char word(char[]);
void main()
{
    char array[50];
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("Total number of words in the string : %d", word(array));
}
char word(char array[])
{
    int i, count = 1;
    for (i = 0; array[i] !='\0'; i++)
    {
        if (array[i] ==' ')
        {
            count++;
        }
    }
    return count;
}
/*output:
Input the string : This is w3resource.com
Total number of words in the string : 3
*/