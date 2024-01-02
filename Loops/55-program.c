/*Write a C program to convert a decimal number to hexadecimal*/
#include <stdio.h>
#include <math.h>
int main()
{
    int number, a, b, c = 0, i = 1, d, e;
    printf("Enter the decimal number : ");
    scanf("%d", &number);
    a = number;
    while (a > 0)
    {
        b = a % 16;
        if (b >= 10)
        {
            b = b + 55;
            c = c + b * i;
            i = i * 100;
        }
        else
        {
            b = b + 48;
            c = c + b * i;
            i = i * 100;
        }
        a = a / 16;
    }
    e = pow(10, 6);
    printf("The equivalent hexadecimal number : ");
    while (c > 0)
    {
        d = c / e;
        printf("%c", d);
        c = c % e;
        c = c * 100;
    }
    return 0;
}
/*output:
Enter the decimal number : 441
The equivalent hexadecimal number : 1B9
*/