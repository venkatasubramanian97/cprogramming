/* Write a C program to display n terms of natural numbers and their sum*/
/*#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the n value : ");
    scanf("%d", &n);
    printf("The natural number %d is :\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
    }
    printf("The sum of natural number upto %d terms : %d", n, sum);
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the n value : ");
    scanf("%d", &n);
    printf("The natural number %d is :\n", n);
    while (i <= n)
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
        i++;
    }
    printf("The sum of natural number upto %d terms : %d", n, sum);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the n value : ");
    scanf("%d", &n);
    printf("The natural number %d is :\n", n);
    do
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("The sum of natural number upto %d terms : %d", n, sum);
    return 0;
}
/*output:
Enter the n value : 9
The natural number 9 is :
Number is : 1
Number is : 2
Number is : 3
Number is : 4
Number is : 5
Number is : 6
Number is : 7
Number is : 8
Number is : 9
The sum of natural number upto 9 terms : 45*/
