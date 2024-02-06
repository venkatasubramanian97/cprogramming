/*Write a program in C to find the sum of the lower triangular elements of a matrix*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the matrix : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, sum=0;
    printf("Input elements in the matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given array is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("The element being summed of the lower triangle matrix are : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i>j)
            {
                printf("%d ",array[i][j]);
                sum=sum+array[i][j];
            }
        }
    }
    printf("\nThe sum of the lower triangle matrix element are : %d",sum);
}
/*output:
Input the row and columns of the matrix : 3 3
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
The given array is :
1 2 3
4 5 6
7 8 9 
The element being summed of the lower triangle matrix are : 4 7 8
The sum of the lower triangle matrix element are : 19
*/