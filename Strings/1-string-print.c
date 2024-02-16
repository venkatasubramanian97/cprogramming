/*Write a program in C to input a string and print it*/
#include <stdio.h>
#include <string.h>
void main()
{
    char array[100];
    printf("Input the string : ");
    gets(array);
    printf("The string you entered is : %s",array);
}
/*output:
input the string : Welcome ,W3resource
The string you entered is : Welcome ,W3resource
*/
