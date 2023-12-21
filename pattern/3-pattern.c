/*Write a C program to print the following patterns using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the number of rows : 5
1
11
111
1111
11111

D:\c-program>.\output
Input the number of rows : 8
1
11
111
1111
11111
111111
1111111
11111111*/