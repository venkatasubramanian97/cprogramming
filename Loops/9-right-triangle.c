/*Write a program in C to display a pattern like a right angle triangle using an asterisk. (to use for loop)*/
#include <stdio.h>
int main()
{
    int i, j;
    printf("The pattern like :\n");
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*output:
The pattern like :
*
**
***
****
*/