/*Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. (to use for loop)*/
#include <stdio.h>
int main()
{
    int a, i, b = 9, sum = 0;
    printf("Enter the number of trems : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d ", b);
        sum = sum + b;
        b = b * 10 + 9;
    }
    printf("\nThe sum of the saries = %d", sum);
    return 0;
}
/*output;
Enter the number of trems : 5
9 99 999 9999 99999
The sum of the saries = 111105
D:\c-program\pattren>.\output
Enter the number of trems : 6
9 99 999 9999 99999 999999
The sum of the saries = 1111104*/