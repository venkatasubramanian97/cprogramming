/*Write a C program to determine whether a given number is prime or not*/
#include <stdio.h>
int main()
{
    int a, i, sum = 1;
    printf("Enter the number : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            sum = sum * i;
    }
    if (sum == a)
        printf("%d is a prime number", a);
    else
        printf("%d is a not prime number", a);
    return 0;
}
/*output:
Enter the number : 5
5 is a prime number
Enter the number : 6
6 is a not prime number*/
