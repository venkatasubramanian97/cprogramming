/*Write a program in C to print a matrix in spiral form*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the array : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, init = 0, count = 0, line;
    line = row;
    printf("Input the element of the matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given matrix form is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("The spiral form of above matrix is :\n");
start:
    if (count < line)
    {
        for (i = init; i < row; i++)
        {
            for (j = init; j <= columns - 1; j++)
            {
                if (i == init && j <= columns - 1 || i > init && j == columns - 1)
                {
                    printf("%d ", array[i][j]);
                }
            }
        }
        count++;
    }
    if (count < line)
    {
        for (i = row - 1; i > init; i--)
        {
            for (j = columns - 2; j >= init; j--)
            {
                if (i == row - 1 && j >= init || i < row - 1 && j == init)
                {
                    printf("%d ", array[i][j]);
                }
            }
        }
        count++;
    }
    if (line > count)
    {
        row--;
        columns--;
        init++;
        goto start;
    }
    return 0;
}
/*output:
Input the row and columns of the array : 5 3
Input the element of the matrix :
element - [0],[0] : 1    
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
element - [3],[0] : 10
element - [3],[1] : 11
element - [3],[2] : 12
element - [4],[0] : 13
element - [4],[1] : 14
element - [4],[2] : 15
The given matrix form is :
1       2       3
4       5       6
7       8       9
10      11      12
13      14      15
The spiral form of above matrix is :
1 2 3 6 9 12 15 14 13 10 7 4 5 8 11
*/