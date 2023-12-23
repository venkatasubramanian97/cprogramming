/* Write a C program to display the n terms of odd natural numbers and their sum. (to use while loop)*/
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    n = n * 2;
    printf("The odd number are : ");
    while (i <= n)
    {
        printf("%d ", i);
        sum = sum + i;
        i = i + 2;
    }
    printf("\nThe sum of odd natural number upto 10 terms : %d", sum);
    return 0;
}

/*#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    n = n * 2;
    printf("The odd number are : ");
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nThe sum of odd natural number upto 10 terms : %d", sum);
    return 0;
}

#include <stdio.h>
    int main()
{
    int i = 1, n, sum = 0;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    n = n * 2;
    printf("The odd number are : ");
    do
    {
        printf("%d ", i);
        sum = sum + i;
        i = i + 2;
    } while (i <= n);
    printf("\nThe sum of odd natural number upto 10 terms : %d", sum);
    return 0;
}*/

/*output:
Enter number of terms : 10
The odd number are : 1 3 5 7 9 11 13 15 17 19
The sum of odd natural number upto 10 terms : 100*/