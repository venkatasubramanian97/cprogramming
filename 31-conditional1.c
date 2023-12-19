/*C program to count total number of notes in given amount*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    printf("enter the amount:");
    scanf("%d", &a);
    b = a / 500;
    printf("500:%d\n", b);
    c = a - (b * 500);
    d = c / 100;
    printf("100:%d\n", d);
    e = c - (d * 100);
    f = e / 50;
    printf("50:%d\n", f);
    g = e - (f * 50);
    h = g / 20;
    printf("20:%d\n", h);
    i = g - (h * 20);
    j = i / 10;
    printf("10:%d\n", j);
    k = i - (j * 10);
    l = k / 5;
    printf("5:%d\n", l);
    m = k - (l * 5);
    n = m / 2;
    printf("2:%d\n", n);
    o = m - (n * 2);
    p = o / 1;
    printf("1:%d", p);
    return 0;
}