/*Write a program in C to print or display an upper triangular matrix*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of the square matrix : ");
    scanf("%d", &size);
    int array[size][size],lower[size][size], i, j;
    printf("Input element in the first matrix :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &array[i][j]);
            lower[i][j]=array[i][j];
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i < j)
            {
                lower[i][j]=0;
            }
        }
    }
    printf("The matrix is :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("setting zero in lower triangle matrix :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", lower[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the size of the square matrix : 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 3
element - [0],[2] : 5
element - [1],[0] : 7
element - [1],[1] : 9
element - [1],[2] : 7
element - [2],[0] : 5
element - [2],[1] : 3
element - [2],[2] : 2
The matrix is :
1 3 5
7 9 7
5 3 2
setting zero in lower triangle matrix :
1 0 0
7 9 0
5 3 2
*/