/*Write a program in C to read a file and remove the spaces between two words of its content*/
#include <stdio.h>
char lower(char[]);
void main()
{
    char string[50];
    printf("The content of the file is : ");
    fgets(string, sizeof(string), stdin);
    lower(string);
}
char lower(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z'||string[i] >= 'a' && string[i] <= 'z')
        {
            continue;
        }
        else
        {
            for(j=i;string[j]!='\0';j++)
            {
                string[j]=string[j+1];
            }
        }
    }
    string[i] = '\0';
    printf("After removing the spaces the content is :\n\n");
    printf("%s", string);
}
/*output:
The content of the file is : The quick brown fox jumps over the lazy dog
After removing the spaces the content is :

Thequickbrownfoxjumpsoverthelazydog
*/