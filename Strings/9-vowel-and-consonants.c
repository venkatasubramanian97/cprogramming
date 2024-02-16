/*Write a program in C to count the total number of vowels or consonants in a string*/
#include <stdio.h>
#include <string.h>
char vowel(char[]);
char consonant(char[]);
void main()
{
    char array[50];
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("Total number of vowel in the string is : %d", vowel(array));
    printf("\nTotal number of consonant in the string is :%d", consonant(array));
}
char vowel(char array[])
{
    int i, vowel = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
        {
            vowel++;
        }
        else if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
        {
            vowel++;
        }
    }
    return vowel;
}
char consonant(char array[])
{
    int i, count = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z' || array[i] >= 'A' && array[i] <= 'Z')
        {
            if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
            {
                continue;
            }
            else if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
            {
                continue;
            }
            else
            {
                count++;
            }
        }
    }
    return count;
}
/*output:
Input the string : Welcome to w3resource.com
Total number of vowel in the string is : 9    
Total number of consonant in the string is :12
*/