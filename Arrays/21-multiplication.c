/*Write a program in C for the multiplication of two square matrices*/
#include<stdio.h>
int main()
{
    int row,columns,size;
    printf("Input the size of multiplication of two square matrix : ");
    scanf("%d",&size);
    row=size;
    columns=size;
    int array[row][columns],array1[row][columns],multiplication[row][columns],i,j,k;
    printf("Input elements in the first matrix :\n");
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
            multiplication[i][j]=0;
            for(k=0;k<row;k++)
            {
                multiplication[i][j]+=array[i][k]*array1[k][j];
            }
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
    printf("The multiplication of two matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",multiplication[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the size of multiplication of two square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input element in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
The first matrix is :
1 2
3 4
The second matrix is :
5 6
7 8
The multiplication of two matrix is :
19 22 
43 50
*/
