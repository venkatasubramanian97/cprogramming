/*Write a program in C to accept a matrix and determine whether it is a sparse matrix*/
#include<stdio.h>
int main()
{
    int row,columns;
    printf("Input the number of row and columns of the matrix : ");
    scanf("%d%d",&row,&columns);
    int array[row][columns],m,n,sparse=0;
    printf("Input element in the first matrix :\n");
    for(m=0;m<row;m++)
    {
        for(n=0;n<columns;n++)
        {
            printf("element - [%d],[%d] : ",m,n);
            scanf("%d",&array[m][n]);
        }
    }
    for(m=0;m<row;m++)
    {
        for(n=0;n<columns;n++)
        {
            if(array[m][n]==0)
            {
                sparse++;
            }
        }
    }
    if(sparse>(row*columns)/2)
    {
        printf("The given matrix is sparse matrix");
        printf("\nThere are %d number of zeros in the matrix",sparse);
    }
    else
    {
        printf("The given matrix is not sparse matrix");
        printf("\nThere are %d number of zeros in the matrix",sparse);
    }
    return 0;
}
/*outout:
Input the number of row and columns of the matrix : 3 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 4
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 0
element - [2],[0] : 7
element - [2],[1] : 0
element - [2],[2] : 0
The given matrix is sparse matrix        
There are 5 number of zeros in the matrix
*/