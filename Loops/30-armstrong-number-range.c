#include <stdio.h>
int main()
{
    int start, end, b, c, f, sum = 0, sum1 = 1, sum2 = 0, i, j;
    printf("Enter starting number of range : ");
    scanf("%d", &start);
    printf("Enter ending number of range : ");
    scanf("%d", &end);
    printf("Armstrong number in given range are :\n");
    for (i = start; i <= end; i++)
    {
        b = i;
        c = i;
        sum = 0;
        while (b > 0)
        {
            b = b / 10;
            sum++;
        }
        sum2 = 0;
        while (c > 0)
        {
            f = c % 10;
            sum1 = 1;
            for (j = 1; j <= sum; j++)
            {
                sum1 = sum1 * f;
            }
            sum2 = sum2 + sum1;
            c = c / 10;
        }
        if (sum2 == i)
            printf("%d ", sum2);
    }
    return 0;
}
/*output:
Enter starting number of range : 1
Enter ending number of range : 1000
Armstrong number in given range are :
1 2 3 4 5 6 7 8 9 153 370 371 407*/