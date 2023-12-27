/* Write a C program to calculate the factorial of a given number. (to use do while loop)*/
#include <stdio.h>
int main()
{
    int i, a, sum = 1;
    printf("Enter the number : ");
    scanf("%d", &i);
    a = i;
    do
    {
        sum = sum * a;
        a--;
    } while (a >= 1);
    printf("The factorial of %d is : %d", i, sum);
    return 0;
}
/*output:
Enter the number : 6
The factorial of 6 is : 720
D:\c-program\pattren>.\output
Enter the number : 3
The factorial of 3 is : 6*/