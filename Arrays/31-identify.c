/*Write a program in C to check whether a given matrix is an identity matrix*/
#include<stdio.h>
int main()
{
    int size;
    printf("Input number of for the square matrix : ");
    scanf("%d",&size);
    int array[size][size],m,n,c=0;
    printf("Input element in the first matrix :\n");
    for(m=0;m<size;m++)
    {
        for(n=0;n<size;n++)
        {
            printf("element - [%d],[%d] : ",m,n);
            scanf("%d",&array[m][n]);
        }
    }
    for(m=0;m<size;m++)
    {
        for(n=0;n<size;n++)
        {
            if(m==n&&array[m][n]!=1)
            {
                c++;
            }
            else if(m!=n&&array[m][n]!=0)
            {
                c++;
            }
        }
    }
    printf("the matrix is :\n");
    for(m=0;m<size;m++)
    {
        for(n=0;n<size;n++)
        {
            printf("%d ",array[m][n]);
        }
        printf("\n");
    }
    if(c==0)
    {
        printf("The matrix is an identify matrix");
    }
    else
    {
        printf("The matrix is an not identify matrix");
    }
    return 0;
}
/*output:
Input number of rows for the matrix : 3
Input number of columns for the matrix : 3
Input element in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
the matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identify matrix
*/