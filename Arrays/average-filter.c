/*average filter matrix*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the array : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, m, n, a, b, c, d;
    float sum, value, array1[row][columns];
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
            a = i - 1;
            b = i + 1;
            if (a < 0)
            {
                a = 0;
            }
            if (b > row - 1)
            {
                b = row - 1;
            }
            c = j - 1;
            d = j + 1;
            if (c < 0)
            {
                c = 0;
            }
            if (d > columns - 1)
            {
                d = columns - 1;
            }
            sum = 0;
            for (m = a; m <= b; m++)
            {
                for (n = c; n <= d; n++)
                {
                    sum += array[m][n];
                }
            }
            value = sum / 9;
            array1[i][j] = value;
        }
    }
    printf("Average filter matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%f ", array1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row and columns of the array : 3 3
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
The given matrix form is : 
1       2       3
4       5       6
7       8       9
Average filter matrix :    
1.333333 2.333333 1.777778 
3.000000 5.000000 3.666667 
2.666667 4.333333 3.111111 
*/