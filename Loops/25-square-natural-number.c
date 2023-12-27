/*Write a C program that displays the n terms of square natural numbers and their sum*/
#include <stdio.h>
int main()
{
    int i, a, b, sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &a);
    printf("The square natural upto %d terms are : ", a);
    for (i = 1; i <= a; i++)
    {
        b = i * i;
        printf("%d ", b);
        sum = sum + b;
    }
    printf("\nThe sum of square natural upto %d terms = %d", a, sum);
    return 0;
}
/*output:
Enter the number of terms : 5
The square natural upto 5 terms are : 1 4 9 16 25
The sum of square natural upto 5 terms = 55
D:\c-program\pattren>.\output
Enter the number of terms : 6
The square natural upto 6 terms are : 1 4 9 16 25 36
The sum of square natural upto 6 terms = 91*/