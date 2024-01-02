/*Write a program in C to check whether a number can be expressed as the sum of two prime*/
#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    printf("Enter a positive integer : ");
    scanf("%d", &a);
    for (i = 1; i <= a / 2; i++)
    {
        b = a - i;
        int sum = 1;
        for (j = 2; j <= b; j++)
        {
            if (b % j == 0)
            {
                sum = sum * j;
            }
            int sum1 = 1;
            for (k = 1; k <= i; k++)
            {
                if (i % k == 0)
                {
                    sum1 = sum1 * k;
                }
            }
            if (sum == j)
            {
                if (sum1 == i)
                {
                    if (sum + sum1 == a)
                    {
                        printf("%d = %d + %d\n", a, j, i);
                    }
                }
            }
        }
    }
    return 0;
}
/*output:
Enter a positive integer : 34
34 = 31 + 3
34 = 29 + 5
34 = 23 + 11
34 = 17 + 17
*/
