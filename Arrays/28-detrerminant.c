/*Write a program in C to calculate the determinant of a 3 x 3 matrix*/
#include<stdio.h>
int main()
{
    int array[3][3],m,n,matrix,a,b,c;
    printf("Input element in the matrix :\n");
    for(m=0;m<3;m++)
    {
        for(n=0;n<3;n++)
        {
            printf("element - [%d],[%d] : ",m,n);
            scanf("%d",&array[m][n]);
        }
    }
    a=(array[1][1]*(array[2][2]))-(array[1][2]*(array[2][1]));
    b=(array[1][0]*(array[2][2]))-(array[1][2]*(array[2][0]));
    c=(array[1][0]*(array[2][1]))-(array[1][1]*(array[2][0])); 
    a=a*(array[0][0]);
    b=b*(array[0][1]);
    c=c*(array[0][2]);
    matrix=(a)-(b)+(c);
    printf("The matrix is :\n");
    for(m=0;m<3;m++)
    {
        for(n=0;n<3;n++)
        {
            printf("%d ",array[m][n]);
        }
        printf("\n");
    }
    printf("The determinant of the matrix is : ");
    printf("%d",matrix);
    return 0;
}
/*output:
Input element in the matrix :
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
The determinant of the matrix is : 0
*/