/*0 0 0 0 0 
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0*/
#include <stdio.h>
void zeros(int);
void ones(int);
void main()
{
    int a = 0, b = 1;
    zeros(a);
    ones(b);
    zeros(a);
    ones(b);
    zeros(a);
}
void zeros(int a)
{
    int i, x;
    for (i = 1; i <= 5; i++)
    {
        x = a;
        printf("%d ", x);
    }
    printf("\n");
}
void ones(int b)
{
    int i, y;
    for (i = 1; i <= 5; i++)
    {
        y = b;
        printf("%d ", y);
    }
    printf("\n");
}
/*output:
0 0 0 0 0 
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
*/