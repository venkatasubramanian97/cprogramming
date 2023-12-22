/*Write a C program to print the following patterns using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = i; j < a; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the number of rows : 5
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
 */
