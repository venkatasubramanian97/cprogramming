#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two value : ");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Number1 and Number2 are equal");
    }
    else
    {
        printf("Number1 and Number2 are not equal");
    }
    return 0;
}