/*Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa*/
#include <stdio.h>
char changed(char[]);
void main()
{
    char string[50];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("The given sentence is : %s",string);
    changed(string);
}
char changed(char string[])
{
    int i, str;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            str = string[i];
            string[i] = str - 32;
        }
        else
        {
            if (string[i] >= 'A' && string[i] <= 'Z')
            {
                str = string[i];
                string[i] = str + 32;
            }
        }
    }
    string[i] = '\0';
    printf("After case changed the string is :\n");
    printf("%s", string);
}
/*output:
Input the string : This Is A Test String
The given sentence is : This Is A Test String
After case changed the string is :
tHIS iS a tEST sTRING
*/