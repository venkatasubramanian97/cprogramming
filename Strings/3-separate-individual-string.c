/*Write a program in C to separate individual characters from a string*/
#include <stdio.h>
#include <string.h>
char length(char[]);
void main()
{
    char array[100];
    int i,r;
    printf("Input the string : ");
    scanf("%s", &array);
    printf("The characters of the string are :\n");
    r=length(array);
    for (i = 0; i<=r; i++)
    {
        printf("%c ", array[i]);
    }
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
The characters of the string are :
v a s u d e v a n
*/