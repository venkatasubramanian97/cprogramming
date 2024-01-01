/*Write a C program to find Strong Numbers within a range of numbers*/
#include <stdio.h>
int main()
{
    int str1, str2, a, b, c, d, e, f, i, j;
    printf("Enter starting range of number : ");
    scanf("%d", &str1);
    printf("Enter ending range of number : ");
    scanf("%d", &str2);
    a = str1;
    b = str2;
    for (i = a; i <= b; i++)
    {
        c = i;
        f = 0;
        while (c > 0)
        {
            d = c % 10;
            e = 1;
            for (j = d; j >= 1; j--)
            {
                e = e * j;
            }
            c = c / 10;
            f = f + e;
        }
        if (f == i)
        {
            printf("%d ", f);
        }
    }
    return 0;
}
/*output:
Enter starting range of number : 1
Enter ending range of number : 1000
1 2 145 
*/