/* Write a C program to check whether a given number is a 'Perfect' number or not*/
#include <stdio.h>
int main()
{
    int i, a, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The positive divisor : ");
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum of the divisor is : %d", sum);

    if (sum == a)
    {
        printf("\nSo, the number is perfect");
    }
    else
    {
        printf("\nSo, the number is not perfect");
    }
    return 0;
}
    /*output:
    Enter the number : 6
    The positive divisor : 1 2 3
    The sum of the divisor is : 6
    So, the number is perfect
    D:\c-program\pattren>.\output
    Enter the number : 10
    The positive divisor : 1 2 5
    The sum of the divisor is : 8
    So, the number is not perfect
    */
}