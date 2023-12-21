/*Write a C program to print the following patterns using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the row value : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row value : 5
12345
12345
12345
12345
12345

D:\c-program>.\output
Input the row value : 3
123
123
123*/
