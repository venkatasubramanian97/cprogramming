#include <stdio.h>
int zeros();
int ones();
int five();
void main()
{
    int a, b, c, i, count = 1;
start:
    a = zeros();
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 0);
    }
    printf("\n");
    b = ones();
    for (i = 1; i <= b; i++)
    {
        printf("%d ", 1);
    }
    printf("\n");
    if (count < a / 2)
    {
        count++;
        goto start;
    }
    c = five();
    for (i = 1; i <= c; i++)
    {
        printf("%d ", 5);
    }
    printf("\n");
}
int zeros()
{
    int x = 8;
    return x;
}
int ones()
{
    int y = 8;
    return y;
}
int five()
{
    int z = 8;
    return z;
}