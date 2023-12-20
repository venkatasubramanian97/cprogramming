/* Write a program in C which is a Menu-Driven Program to perform a simple calculation*/
#include <stdio.h>
int main()
{
    int a, b, n;
    printf("Enter a value : ");
    scanf("%d", &a);
    printf("Enter b value : ");
    scanf("%d", &b);
    printf("Enter n value : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("The addition of %d and %d is : %d", a, b, a + b);
        break;
    case 2:
        printf("The subtration of %d and %d is : %d", a, b, a - b);
        break;
    case 3:
        printf("The multiplication of %d and %d is : %d", a, b, a * b);
        break;
    default:
        printf("The division of %d and %d is : %d", a, b, a / b);
    }
    return 0;
}

/*output:
Enter a value : 7
Enter b value : 8
Enter n value : 3
The multiplication of 7 and 8 is : 56*/
