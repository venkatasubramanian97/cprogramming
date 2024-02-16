/*Write a program in C to print individual characters of a string in reverse order*/
#include <stdio.h>
#include <string.h>
char length(char[]);
void main()
{
    char array[100];
    int i,r;
    printf("Input the string : ");
    scanf("%s", &array);
    printf("The characters of the string in reverse are :\n");
    r=length(array);
    for (i = r-1; i>=0; i--)
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
The characters of the string in reverse are :
 n a v e d u s a v
 */