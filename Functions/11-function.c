/*0 0 0 0 0
1 1 1 1 1*/
#include <stdio.h>
int zeros();
int ones();
void main()
{
    int a, b, i;
    a = zeros();
    b = ones();
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 0);
    }
    printf("\n");
    for (i = 1; i <= b; i++)
    {
        printf("%d ", 1);
    }
    printf("\n");
}
int zeros()
{
    int x;
    printf("Input the zeros columns : ");
    scanf("%d", &x);
    return x;
}
int ones()
{
    int y;
    printf("Input the ones columns : ");
    scanf("%d", &y);
    return y;
}
/*output:
Input the zeros columns : 5
Input the ones columns : 5
0 0 0 0 0
1 1 1 1 1
*/