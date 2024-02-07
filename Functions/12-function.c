/*0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 */
#include <stdio.h>
void zeros();
void ones();
void main()
{
    zeros();
    ones();
    zeros();
    ones();
    zeros();
    ones();
    zeros();
    ones();
}
void zeros()
{
    int i, a = 8;
    for (i = 1; i <= a; i++)
    {
        printf("%d ", 0);
    }
    printf("\n");
}
void ones()
{
    int i, b = 8;
    for (i = 1; i <= b; i++)
    {
        printf("%d ", 1);
    }
    printf("\n");
}
/*output
0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 
*/