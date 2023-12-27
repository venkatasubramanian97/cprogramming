#include <stdio.h>
int main()
{
    int value, a, b, c, sum = 0, sum1 = 1, sum2 = 0, i;
    printf("Enter a value : ");
    scanf("%d", &value);
    a = value;
    b = value;
    while (a > 0)
    {
        c = a % 10;
        if (c >= 0)
        {
            c = 1;
            sum = sum + c;
        }
        a = a / 10;
    }
    while (b > 0)
    {
        c = b % 10;
        sum1 = 1;
        for (i = 1; i <= sum; i++)
        {
            c = c;
            sum1 = sum1 * c;
        }
        sum2 = sum2 + sum1;
        b = b / 10;
    }
    if (sum2 == value)
        printf("%d is a Armstrong number", value);
    else
        printf("%d is a Not Armstrong number", value);
    return 0;
}
/*output:
Enter a value : 407
407 is a Armstrong number
Enter a value : 120
120 is a Not Armstrong number
*/