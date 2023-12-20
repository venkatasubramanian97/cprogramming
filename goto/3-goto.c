/*Write a C program to find the factorial of a given number without using loop and with using goto statement*/
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter the number to find factorial : ");
    scanf("%d", &n);
    i = n;
end:
    fact = fact * i;
    i--;
    if (i >= 1)
        goto end;
    printf("Factorial of %d is : %d", n, fact);
    return 0;
}
/*output:
Enter the number to find factorial : 5
Factorial of 5 is : 120*/
