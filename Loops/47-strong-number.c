/*Write a C program to check whether a number is a Strong Number or not*/
#include <stdio.h>
int main()
{
    int strong, a, b, c, d = 0, i;
    printf("Enter the check a strong number : ");
    scanf("%d", &strong);
    a = strong;
    while (a > 0)
    {
        b = a % 10;
        c = 1;
        for (i = b; i >= 1; i--)
        {
            c = c * i;
        }
        a = a / 10;
        d = d + c;
    }
    if (d == strong)
    {
        printf("%d is a strong number", strong);
    }
    else
    {
        printf("%d is not a strong number", strong);
    }
    return 0;
}
/*output:
Enter the check a strong number : 145
145 is a strong number
*/