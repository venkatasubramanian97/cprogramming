/*Write a program in C to display the number in reverse order*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("The number in reverse order is : ");
    while (a > 0)
    {
        b = a % 10;
        printf("%d", b);
        a = a / 10;
    }
    return 0;
}
/*output:
Enter a number : 45678
The number in reverse order is : 87654*/