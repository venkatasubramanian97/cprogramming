/*0 0 0 0 0 
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
2 2 2 2 2*/
#include <stdio.h>
void zeros(int);
void ones(int);
void twos(int);
void main()
{
    int a = 5;
    zeros(a);
    ones(a);
    zeros(a);
    ones(a);
    zeros(a);
    twos(a);
}
void zeros(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 0);
    }
    printf("\n");
}
void ones(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 1);
    }
    printf("\n");
}
void twos(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 2);
    }
    printf("\n");
}
/*output:
0 0 0 0 0 
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
2 2 2 2 2
*/