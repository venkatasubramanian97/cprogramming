/*Write a program in C to search for an element in a row wise and column wise sorted matrix*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the array : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, search;
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
    printf("The given value for searching is : ");
    scanf("%d", &search);
    printf("The element found at the position in the matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (array[i][j] == search)
            {
                printf("%d,%d\t", i, j);
            }
        }
    }
    return 0;
}
/*output:
Input the row and columns of the array : 4 4
Input the element of the matrix :
element - [0],[0] : 15
element - [0],[1] : 23
element - [0],[2] : 31
element - [0],[3] : 39
element - [1],[0] : 18
element - [1],[1] : 26
element - [1],[2] : 36
element - [1],[3] : 43
element - [2],[0] : 25
element - [2],[1] : 28
element - [2],[2] : 37
element - [2],[3] : 48
element - [3],[0] : 30
element - [3],[1] : 34
element - [3],[2] : 39
element - [3],[3] : 50
The given matrix form is :
15      23      31      39
18      26      36      43
25      28      37      48
30      34      39      50
The given value for searching is : 39
The element found at the position in the matrix is :
0,3     3,2
*/