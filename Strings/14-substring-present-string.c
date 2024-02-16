/*Write a C program to check whether a substring is present in a string*/
#include <stdio.h>
#include<string.h>
char substring(char[],char[]);
void main()
{
    char string[50],str[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the str : ");
    scanf("%s",&str);
    substring(string,str);
}
char substring(char string[],char str[])
{
    int i,s=0,length,count=0;
    length=strlen(str);
    for (i = 0; string[i]!='\0'; i++)
    {
        if(string[i]==str[s])
        {
            count++;
            s++;
            if(length==count)
            {
                break;
            }
        }
        else
        {
        s=0;
        count=0;
        }
    }
    if(length==count)
    {
        printf("The substring is the string");
    }
    else
    {
        printf("The substring is not exists in the string");
    }

}
/*output:
Input the string : This is a test string
Input the str : This
The substring is the string
*/