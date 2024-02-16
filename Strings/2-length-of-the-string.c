/*Write a program in C to find the length of a string without using library functions*/
#include <stdio.h>
#include <string.h>
char length(char[]);
void main()
{
    char array[100];
    int i;
    printf("Input the string : ");
    fgets(array, sizeof(array), stdin);
    printf("Length of the string is : %d", length(array));
}
char length(char array[])
{
    int i,count=0;
    for(i=0;array[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
/*output:
Input the string : vasudevan
Length of the string is : 10
*/