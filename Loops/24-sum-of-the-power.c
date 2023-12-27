/* Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]*/
#include <stdio.h>
int main()
{
    int i, x, y, a, b = 1, sum, sum1 = 0, sum2 = 0;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter number of terms : ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            a = (x * b) * (-1);
            printf("%d", a);
            sum1 = sum1 - a;
            b = a * 2;
            b = b * -1;
        }
        else
        {
            a = x * b;
            printf("%d", a);
            sum2 = sum2 + a;
            b = a * 2;
        }
        printf("\n");
    }
    sum = sum2 - sum1;
    printf("The sum = %d", sum);
    return 0;
}
/*output:
Enter the value of x : 2
Enter number of terms : 5
2
-8
32
-128
512
The sum = 410
D:\c-program\pattren>.\output
Enter the value of x : 3
Enter number of terms : 5
3
-18
108
-648
3888
The sum = 3333*/