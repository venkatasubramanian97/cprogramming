/* Write a C program to display a pattern like a right angle triangle with a number.(to use for loop)*/
#include <stdio.h>
int main()
{
    int i, j;
    printf("The pattern like :\n");
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*output:
The pattern like :
1
12
123
1234*/