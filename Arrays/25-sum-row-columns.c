/*Write a program in C to find the sum of rows and columns of a matrix*/
#include <stdio.h>
int main()
{
    int row,columns;
    printf("Input the sum of the row and columns matrix : ");
    scanf("%d%d", &row,&columns);
    int array[row][columns], i, j, k, sum[row], sum1[columns];
    printf("Input element in the first matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        sum[i] = 0;
        for (j = 0; j < columns; j++)
        {
            sum[i] = sum[i] + array[i][j];
        }
    }
    for (i = 0; i < columns; i++)
    {
        sum1[i] = 0;
        for (j = 0; j < row; j++)
        {
            sum1[i] = sum1[i] + array[j][i];
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("The sum of row and columns of the matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("%d", sum[i]);
        printf("\n");
    }
    for (k = 0; k < columns; k++)
    {
        printf("%d ", sum1[k]);
    }
    return 0;
}
/*output:
Input the sum of the row and columns matrix : 2 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
The matrix is :
1 2 3 
4 5 6 
The sum of row and columns of the matrix is :
1  2  3  6
4  5  6  15
5 7 9 
*/