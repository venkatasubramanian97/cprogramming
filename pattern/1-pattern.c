/*Write a C program to print the following patterns using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

/*output:
Input the number of rows : 5
11111
11111
11111
11111
11111

D:\c-program>.\output
Input the number of rows : 3
111
111
111*/