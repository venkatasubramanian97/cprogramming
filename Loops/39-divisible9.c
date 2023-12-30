/*Write a program in C to find the number and sum of all integers between 100 and 200 which are divisible by 9*/
#include <stdio.h>
int main()
{
    int a, b, i, sum = 0;
    printf("Enter starting number : ");
    scanf("%d", &a);
    printf("Enter ending number : ");
    scanf("%d", &b);
    printf("Number between %d and %d,divisible by 9 :\n", a, b);
    for (i = a; i <= b; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum is : %d", sum);
    return 0;
}
/*output:
Enter starting number : 50
Enter ending number : 150
Number between 50 and 150,divisible by 9 :
54 63 72 81 90 99 108 117 126 135 144
The sum is : 1089*/