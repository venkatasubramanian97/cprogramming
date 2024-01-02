/*Write a C program to convert a binary number to octal*/
#include <stdio.h>
int main()
{
    int binary, a, b, e, i = 1, sum = 0;
    printf("Enter the binary number : ");
    scanf("%d", &binary);
    a = binary;
    while (a > 0)
    {
        b = a % 1000;
        int c = 0;
        int d = 1;
        while (b > 0)
        {
            e = b % 10;
            c = c + e * d;
            d = d * 2;
            b = b / 10;
        }
        c = c * i;
        sum = sum + c;
        i = i * 10;
        a = a / 1000;
    }
    printf("The equivalent octal number : %d", sum);
    return 0;
}
/*output:
Enter the binary number : 11101101
The equivalent octal number : 355
*/