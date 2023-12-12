/*Write a C program to check whether a given number is positive or negative*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    (a >= 0) ? printf("%d is a positive number", a) : printf("%d is a negative number", a);
    return 0;
}

/*output:
Enter the number : -8
-8 is a negative number*/