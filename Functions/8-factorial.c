#include <stdio.h>
int series(int);
void main()
{
    int number, first = 1, sum = 0, multi;
    printf("Input the factorial number : ");
    scanf("%d", &number);
    start:
    multi = series(first);
    sum = sum + (multi / first);
    if(first<number)
    {
        first++;
        goto start;
    }
    printf("Sum of the series : %d", sum);
}
int series(int first)
{
    int j, multi = 1;
    for (j = first; j >= 1; j--)
    {
        multi = multi * j;
    }
    return multi;
}
/*output:
Input the factorial number : 6
Sum of the series : 154
*/