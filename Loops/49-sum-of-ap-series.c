/*Write a C program to find the sum of an A.P. series*/
#include <stdio.h>
int main()
{
    int start, iteam, differend, i, sum = 0, sum1;
    printf("Enter the starting number of the A.P. series : ");
    scanf("%d", &start);
    printf("Enter the iteam number of the A.P. series : ");
    scanf("%d", &iteam);
    printf("Enter the common difference of A.P. series : ");
    scanf("%d", &differend);
    printf("The sum of the A.P. series are :\n");
    for (i = 1; i < iteam; i++)
    {
        printf("%d+", start);
        sum = sum + start;
        start = start + differend;
    }
    printf("%d=", start);
    sum1 = sum + start;
    printf("%d", sum1);
    return 0;
}
/*output:
Enter the starting number of the A.P. series : 1
Enter the iteam number of the A.P. series : 10
Enter the common difference of A.P. series : 5
The sum of the A.P. series are :
1+6+11+16+21+26+31+36+41+46=235
*/
