/*Write a C program to convert a binary number into a decimal number using the math function*/
#include <stdio.h>
#include <math.h>
int main()
{
    int binary, a, b, c = 0, d = 1, i = 1;
    printf("Enter binary number : ");
    scanf("%d", &binary);
    a = binary;
    while (a > 0)
    {
        b = a % 10;
        c = c + b * d;
        d = pow(2, i);
        i++;
        a = a / 10;
    }
    printf("The equivalent decimal number is : %d", c);
    return 0;
}
/*output:
Enter binary number : 11001
The equivalent decimal number is : 25
*/
