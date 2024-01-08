/*Write a program in C to accept two matrices and check whether they are equal*/
#include <stdio.h>
int main()
{
    int row, columns, block, box;
    printf("Input rows and columns of the 1st matrix : ");
    scanf("%d%d", &row, &columns);
start:
end:
    printf("Input block and box of the 2nd matrix : ");
    scanf("%d%d", &block, &box);
    if (block > row || box > columns)
    {
        printf("invalid row and columns size please enter the same size of the first matrix\n");
        goto start;
    }
    else if (block < row || box < columns)
    {
        printf("invalid row and columns size please enter the same size of the first matrix\n");
        goto end;
    }
    int array[row][columns], array1[block][box], m, n, c = 0;
    printf("Input element in the first matrix :\n");
    for (m = 0; m < row; m++)
    {
        for (n = 0; n < columns; n++)
        {
            printf("element - [%d],[%d] : ", m, n);
            scanf("%d", &array[m][n]);
        }
    }
    printf("Input element in the second matrix :\n");
    for (m = 0; m < block; m++)
    {
        for (n = 0; n < box; n++)
        {
            printf("element - [%d],[%d] : ", m, n);
            scanf("%d", &array1[m][n]);
        }
    }
    for (m = 0; m < row; m++)
    {
        for (n = 0; n < columns; n++)
        {
            if (array[m][n] != array1[m][n])
            {
                c++;
                break;
            }
        }
    }
    printf("The first matrix is :\n");
    for (m = 0; m < row; m++)
    {
        for (n = 0; n < columns; n++)
        {
            printf("%d ", array[m][n]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
    for (m = 0; m < block; m++)
    {
        for (n = 0; n < box; n++)
        {
            printf("%d ", array1[m][n]);
        }
        printf("\n");
    }
    printf("The matrices can be compared :\n");
    if (c == 0)
    {
        printf("Two matrices are equal");
    }
    else
    {
        printf("Two matrices are not equal");
    }
    return 0;
}
/*output:
Input rows and columns of the 1st matrix : 2 2
Input block and box of the 2nd matrix : 2 3
invalid matrix
Input block and box of the 2nd matrix : 2 2
Input element in the first matrix :
element - [0],[0] : 1   
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input element in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
The first matrix is :
1 2
3 4
The second matrix is :        
1 2
3 4
The matrices can be compared :
Two matrices are equal        
*/