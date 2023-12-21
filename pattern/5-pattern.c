/*Write a C program to print the following patterns using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a, b = 1;
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = i; j < a; j++)
        {
            printf("*");
        }
        // printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d", b++);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the number of rows : 4
***1
**23
*456
78910*/