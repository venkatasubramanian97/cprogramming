/*Write a C program to find the 'Perfect' numbers within a given number of ranges*/
#include <stdio.h>
int main()
{
    int i, j, a, b;
    printf("Enter the starting range or number : ");
    scanf("%d", &a);
    printf("Enter the ending range or number : ");
    scanf("%d", &b);
    printf("The perfect number within the given renge : ");
    for (i = 2; i <= b; i++)
    {
        int sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", sum++);
        }
    }
    return 0;
}
/*output:
Enter the starting range or number : 1
Enter the ending range or number : 500
The perfect number within the given renge : 6 28 496 */