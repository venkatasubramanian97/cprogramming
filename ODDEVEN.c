#include <stdio.h>
int main()
{
    int number, m;
    printf("Enter the number : ");
    scanf("%d", &number);
    m = number % 2;
    (m == 0) ? printf("%d is an even number", number) : printf("%d is an odd number", number);
    return 0;
}
/*output
Enter the number : 7
7 is an odd number*/