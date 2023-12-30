/* Write a C program to check whether a number is a palindrome or not*/
#include <stdio.h>
int main()
{
    int i, a, b, c = 0;
    printf("Enter the number : ");
    scanf("%d", &i);
    a = i;
    while (a > 0)
    {
        c = c * 10;
        b = a % 10;
        c = c + b;
        a = a / 10;
    }
    if (c == i)
        printf("%d is a palindrome number", i);
    else
        printf("%d is a not palindrome number", i);
    return 0;
}
/*output:
Enter the number : 45654
45654 is a palindrome number*/