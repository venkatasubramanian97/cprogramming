/*Write a C program to print first 20 natural numbers and their sum using goto statement*/
#include <stdio.h>
int main()
{
    int n = 1, i, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &i);
    printf("Natural number are : ");
end:
    printf("%d ", n);
    sum = sum + n;
    n++;
    if (n <= i)
        goto end;
    printf("\nsum is : %d", sum);
    return 0;
}
/*output:
Enter the number : 20
Natural number are : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
sum is : 210*/