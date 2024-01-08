/*Write a program in C to find the sum of the right diagonals of a matrix*/
#include<stdio.h>
int main()
{
    int size;
    printf("Input the size of the square matrix : ");
    scanf("%d",&size);
    int array[size][size],i,j,sum=0;
    printf("Input element in the first matrix :\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                sum=sum+array[i][j];
            }
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("Addition of the right diagonal element is : ");
    printf("%d",sum);
    return 0;
}
/*output:
Input the size of the square matrix : 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
The matrix is :
1 2 3
4 5 6
7 8 9
Addition of the right diagonal element is : 15
*/
