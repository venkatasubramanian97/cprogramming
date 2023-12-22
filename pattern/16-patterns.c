//+-patterns
#include <stdio.h>
int main()
{
    int i, j, k, a;
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (k = 1; k <= a; k++)
    {
        printf("- ");
    }
    printf("\n");
    for (i = 2; i < a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i % 2 == 0)
            {
                ( j % 2 != 0) ? printf("+ ") : printf("- ");
            }
            else
            {
                ( j % 2 == 0) ? printf("+ ") : printf("- ");
            }
        }
        printf("\n");
    }
    for (k = 1; k <= a; k++)
    {
        printf("- ");
    }
    printf("\n");
    return 0;
}
/*output:
Input the number of rows : 5
- - - - - 
+ - + - + 
- + - + - 
+ - + - + 
- - - - - 
*/