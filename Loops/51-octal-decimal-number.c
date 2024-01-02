/*Write a C program to convert an octal number to a decimal without using an array*/
#include <stdio.h>
int main()
{
    int digit, a, b, c = 0, d = 1;
    printf("Enter a octal number(using digit 0-7) : ");
    scanf("%d", &digit);
    a = digit;
    while (a > 0)
    {
        b = a % 10;
        c = c + b * d;
        d = d * 8;
        a = a / 10;
    }
    printf("The equivalent decimal number : %d", c);
    return 0;
}
/*output:
Enter a octal number(using digit 0-7) : 745
The equivalent decimal number : 485
*/