/*pascal patterns*/
#include <stdio.h>
int pascal(int, int);
int factorial(int);
void main()
{
    int terms, i, j, k, result;
    printf("Input the number of terms : ");
    scanf("%d", &terms);
    for (i = 0; i < terms; i++)
    {
        for (j = i; j < terms - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            result = pascal(i, k);
            printf("%d ", result);
        }
        printf("\n");
    }
}
int pascal(int i, int k)
{
    int sub, row, columns, pascal;
    sub = i - k;
    row = factorial(i);
    columns = factorial(k);
    sub = factorial(sub);
    pascal = row / (columns * sub);
    return pascal;
}
int factorial(int s)
{
    int i, multi = 1;
    for (i = s; i >= 1; i--)
    {
        multi = multi * i;
    }
    return multi;
}
/*output:
Input the number of terms : 6
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 5 1*/