/*Write a C program to convert a binary number into a decimal number without using array, function and while loop*/
#include <stdio.h>
int main()
{
    int binary, a, b, c = 0, i = 1;
    printf("Enter a binary number : ");
    scanf("%d", &binary);
    a = binary;
    while (a > 0)
    {
        b = a % 10;
        c = c + b * i;
        i = 2 * i;
        a = a / 10;
    }
    printf("The equivalent decimal number : %d", c);
    return 0;
}
/*output:
Enter a binary number : 1010101
The equivalent decimal number : 85
*/