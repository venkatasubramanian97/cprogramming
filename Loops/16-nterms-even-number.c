/*Write a C program to display the sum of n terms of even natural numbers. (to use while loop)*/
#include <stdio.h>
int main()
{
    int i = 2, j, a, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &a);
    j = a * 2;
    printf("The even numbers are : ");
    while (i <= j)
    {
        printf("%d ", i);
        sum = sum + i;
        i = i + 2;
    }
    printf("\nThe sum of even natural number upto %d terms : %d", a, sum);
    return 0;
}
/*output:
Enter the number : 5
The even numbers are : 2 4 6 8 10
The sum of even natural number upto 5 terms : 30*/