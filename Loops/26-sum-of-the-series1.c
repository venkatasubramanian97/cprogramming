/* Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms*/
#include <stdio.h>
int main()
{
    int i, a, b = 1, sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i < a)
            printf("%d+", b);
        else
            printf("%d", b);
        sum = sum + b;
        b = b * 10 + 1;
    }
    printf("\nThe sum is = %d", sum);
    return 0;
}
/*output:
Enter the number of terms : 6
1+11+111+1111+11111+111111
The sum is = 123456*/