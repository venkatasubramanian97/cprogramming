/*Write a program in C to copy one string to another string*/
#include <stdio.h>
#include <string.h>
char copy(char[], char[]);
void main()
{
    char array[50], arr[50];
    int c;
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("The first string is : %s",array);
    c = copy(array, arr);
    printf("Total number of words in the string : %d", c);
}
char copy(char array[], char arr[])
{
    int i, count = 0;
    for (i = 0; array[i] != '\0'; i++)
    {
        count++;
        arr[i] = array[i];
    }
    arr[i]='\0';
    printf("The second string is : %s",arr);
    return count;
}
/*output:
Input the string : This is a string to be copied.
The first string is : This is a string to be copied. 
The second string is : This is a string to be copied.
Total number of words in the string : 31
*/