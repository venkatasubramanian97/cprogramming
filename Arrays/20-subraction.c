/*Write a program in C for the subtraction of two matrices*/
#include<stdio.h>
int main()
{
    int row,columns;
    printf("Input the row and columns matrix(less than 5) : ");
    scanf("%d%d",&row,&columns);
    int array[row][columns],array1[row][columns],subtraction[row][columns],i,j;
    printf("Input element in the first matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Input element in the second matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            subtraction[i][j]=array[i][j]-array1[i][j];
        }
    }
    printf("The first matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
    printf("The subtraction of two matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",subtraction[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row and columns matrix(less than 5) : 2 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
Input element in the second matrix :
element - [0],[0] : 7
element - [0],[1] : 8
element - [0],[2] : 9
element - [1],[0] : 4
element - [1],[1] : 3
element - [1],[2] : 2
The first matrix is :
1 2 3
4 5 6
The second matrix is :
7 8 9
4 3 2
The subtraction of two matrix is :
-6 -6 -6
0 2 4
*/