/*median fillter*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the array : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], array1[row][columns], sorted[9], i, j, k, m, n, temp;
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
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            k = 0;
            for (m = i - 1; m <= i + 1; m++)
            {
                for (n = j - 1; n <= j + 1; n++)
                {
                    if (m == -1 || m == row || n == -1 || n == columns)
                    {
                        sorted[k] = 0;
                        k++;
                    }
                    else
                    {
                        sorted[k] = array[m][n];
                        k++;
                    }
                }
            }
            for (m = 0; m < 9 ; m++)
            {
                for (n = m + 1; n < 9; n++)
                {
                    if (sorted[m] > sorted[n])
                    {
                        temp = sorted[m];
                        sorted[m] = sorted[n];
                        sorted[n] = temp;
                    }
                }
            }
            array1[i][j] = sorted[4];
        }
    }
    printf("Median filter matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row and columns of the array : 3 3
Input the element of the matrix :
element - [0],[0] : 4 
element - [0],[1] : 6
element - [0],[2] : 8
element - [1],[0] : 1
element - [1],[1] : 3
element - [1],[2] : 5
element - [2],[0] : 7
element - [2],[1] : 2
element - [2],[2] : 9
The given matrix form is :
4       6       8
1       3       5
7       2       9
Median filter matrix :    
0       3       0
2       5       3
0       2       0
*/