/*Write a program in C to compare two strings without using string library functions*/
#include <stdio.h>
#include <string.h>
char compare(char[], char[]);
void main()
{
    char array[50], arr[50];
    int s;
    printf("Input the 1string : ");
    gets(array);
    printf("Input the 2string : ");
    gets(arr);
    printf("string1 : %s",array);
    printf("\nstring2 : %s",arr);
    s = compare(array, arr);
    if (s != 0)
    {
        printf("\nstring are equal");
    }
    else
    {
        printf("\nstring are not equal");
    }
}
char compare(char array[], char arr[])
{
    int i, count = 0;
    for (i = 0; array[i]||arr[i] !='\0'; i++)
    {
        if (array[i] == arr[i])
        {
            count++;
        }
        else
        {
            return 0;
        }
    }
    return count;
}
/*output:
Input the 1string : aa bb cc
Input the 2string : aa bb cc
string1 : aa bb cc       
string2 : aa bb cc       
string are equal*/