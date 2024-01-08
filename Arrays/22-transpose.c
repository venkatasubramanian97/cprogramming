/*Write a program in C to find the transpose of a given matrix*/
#include<stdio.h>
int main()
{
    int row,colum;
    printf("Input the rows and columns of the matrix : ");
    scanf("%d%d",&row,&colum);
    int array[row][colum],transpose[row][colum],i,j;
    printf("Input element in the first matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            transpose[j][i]=array[i][j];
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of a matrix is :\n");
    for(i=0;i<colum;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the rows and columns of the matrix : 2 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[2] : 6
The matrix is :
1 2 3
4 5 6
The transpose of a matrix is :
1 4
2 5
3 6
*/