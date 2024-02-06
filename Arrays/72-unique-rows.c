/*Write a program in C to return only the unique rows from a given binary matrix*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the matrix : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, k, count, unique[row], s = 0;
    printf("Input elements in the binary matrix :\n");
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
    for (i = 0; i < row - 1; i++)
    {
        for (j = i + 1; j < row; j++)
        {
            count = 0;
            for (k = 0; k < columns; k++)
            {
                if (array[i][k] == array[j][k])
                {
                    count++;
                }
            }
            if (count == columns)
            {
                unique[s] = j;
                s++;
            }
        }
    }
    printf("The unique rows of the given array are :\n");
    for (i = 0; i < row; i++)
    {
        for (k = 0; k < s; k++)
        {
            if (i == unique[k])
            {
                i++;
                continue;
            }
        }
        if (i > row - 1)
        {
            break;
        }
        for (j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row and columns of the matrix : 4 5
Input elements in the binary matrix :
element - [0],[0] : 0
element - [0],[1] : 1
element - [0],[2] : 0
element - [0],[3] : 0
element - [0],[4] : 1
element - [1],[0] : 1
element - [1],[1] : 0
element - [1],[2] : 1
element - [1],[3] : 1
element - [1],[4] : 0
element - [2],[0] : 0
element - [2],[1] : 1
element - [2],[2] : 0
element - [2],[3] : 0
element - [2],[4] : 1
element - [3],[0] : 1
element - [3],[1] : 0
element - [3],[2] : 1
element - [3],[3] : 0
element - [3],[4] : 0
The given array is :
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The unique rows of the given array are :
0 1 0 0 1
1 0 1 1 0
1 0 1 0 0
*/