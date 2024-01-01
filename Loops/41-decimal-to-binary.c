/*Write a program in C to convert a decimal number into binary without using an array*/
#include <stdio.h>
int main()
{
    int decimal, a, b, c = 0, d = 1;
    printf("Enter decimal number : ");
    scanf("%d", &decimal);
    a = decimal;
    while (a > 0)
    {
        b = a % 2;
        c = c + b * d;
        d = d * 10;
        a = a / 2;
    }
    printf("Binary number equivalent to said decimal number is : %d", c);
    return 0;
}
/*output:
Enter decimal number : 25
Binary number equivalent to said decimal number is : 11001
*/