/*Write a program in C to extract a substring from a given string*/
#include <stdio.h>
char substring(char[], char, char);
void main()
{
    char string[50];
    int position, length;
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the position to start extraction : ");
    scanf("%d", &position);
    printf("Input the length of substring : ");
    scanf("%d", &length);
    substring(string, position, length);
}
char substring(char string[], char position, char length)
{
    int i, s = 0,count=0;
    char subarray[50];
    for (i = position - 1;string[i]!='\0'; i++)
    {
        count++;
        subarray[s] = string[i];
        s++;
        if(count==length)
        {
            break;
        }
    }
    subarray[s]='\0';
    printf("The substring retrieve from the string is :\"%s\"",subarray);
}
/*output:
Input the string : This is test string
Input the position to start extraction : 9
Input the length of substring : 4
The substring retrieve from the string is :"test"
*/