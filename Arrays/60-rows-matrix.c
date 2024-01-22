/*Write a program in C to find the row with the maximum number of 1s*/
#include <stdio.h>
int main()
{
    int row, columns;
    printf("Input the row and columns of the array : ");
    scanf("%d%d", &row, &columns);
    int array[row][columns], i, j, sum , count = 0, maximum =-1;
    printf("Input the element of the matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given 2D array is :\n");
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
        sum=0;
        for (j = 0; j < columns; j++)
        {
            if (1 == array[i][j])
            {
                sum++;
                if (count < sum)
                {
                     count=sum;
                    maximum = i;
                }
            }
        }
    }
    printf("The index of row with maximum 1s is : %d", maximum);
    return 0;
}
/*output:
Input the row and columns of the array : 5 5
Input the element of the matrix :
element - [0],[0] : 0
element - [0],[1] : 1
element - [0],[2] : 0
element - [0],[3] : 1
element - [0],[4] : 1
element - [1],[0] : 1
element - [1],[1] : 1
element - [1],[2] : 1
element - [1],[3] : 1
element - [1],[4] : 1
element - [2],[0] : 1
element - [2],[1] : 0
element - [2],[2] : 0
element - [2],[3] : 1
element - [2],[4] : 0
element - [3],[0] : 0
element - [3],[1] : 0
element - [3],[2] : 0
element - [3],[3] : 0
element - [3],[4] : 0
element - [4],[0] : 1
element - [4],[1] : 0
element - [4],[2] : 0
element - [4],[3] : 0
element - [4],[4] : 1
The given 2D array is :
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The index of row with maximum 1s is : 1
*/