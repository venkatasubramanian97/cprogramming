/*Write a program in C to find the largest square sub-matrix with all 1s*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the matrix : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, k, l, length, width, multi, maximum, sub_matrix = 0, count;
    printf("Input elements in the binary matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given array in matrix form is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            multi = 2;
            length = 1 + i;
            width = 1 + j;
        start:
            if (length < row && width < columns)
            {
                count = 0;
                for (k = i; k <= length; k++)
                {
                    for (l = j; l <= width; l++)
                    {
                        if (array[k][l] == 1)
                        {
                            count++;
                        }
                    }
                }
                if (count == (multi * multi))
                {
                    maximum = multi;
                    if (sub_matrix < maximum)
                    {
                        sub_matrix = maximum;
                    }
                    length++;
                    width++;
                    multi++;
                    goto start;
                }
            }
        }
    }
    printf("The maximum size sub-matrix is :\n");
    for (i = 0; i < sub_matrix; i++)
    {
        for (j = 0; j < sub_matrix; j++)
        {
            printf("%d ", 1);
        }
        printf("\n");
    }
}
/*output:
Input the row and columns of the matrix : 6 5
Input elements in the binary matrix :
element - [0],[0] : 0
element - [0],[1] : 1
element - [0],[2] : 0
element - [0],[3] : 1
element - [0],[4] : 1
element - [1],[0] : 1
element - [1],[1] : 1
element - [1],[2] : 1
element - [1],[3] : 1
element - [1],[4] : 0
element - [2],[0] : 1
element - [2],[1] : 1
element - [2],[2] : 1
element - [2],[3] : 1
element - [2],[4] : 0
element - [3],[0] : 1
element - [3],[1] : 1
element - [3],[2] : 1
element - [3],[3] : 1
element - [3],[4] : 0
element - [4],[0] : 1
element - [4],[1] : 1
element - [4],[2] : 1
element - [4],[3] : 1
element - [4],[4] : 1
element - [5],[0] : 0
element - [5],[1] : 1
element - [5],[2] : 0
element - [5],[3] : 1
element - [5],[4] : 0
The given array in matrix form is :
0 1 0 1 1
1 1 1 1 0
1 1 1 1 0
1 1 1 1 0
1 1 1 1 1 
0 1 0 1 0
The maximum size sub-matrix is :
1 1 1 1
1 1 1 1
1 1 1 1 
1 1 1 1
*/