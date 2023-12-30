/*Write a program in C to find the prime numbers within a range of numbers*/
#include <stdio.h>
int main()
{
    int x, y, i, j;
    printf("Enter the starting number range : ");
    scanf("%d", &x);
    printf("Enter the ending number range : ");
    scanf("%d", &y);
    if (x == 1)
        x = x + 1;
    printf("The prime number between %d and %d are :\n", x, y);
    for (i = x; i <= y; i++)
    {
        int sum = 1;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                sum = sum * j;
        }
        if (sum == i)
            printf("%d ", sum);
    }
    return 0;
}
/*output:
Enter the starting number range : 1
Enter the ending number range : 50
The prime number between 2 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47*/