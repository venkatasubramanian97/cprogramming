#include <stdio.h>
int main()
{
    int i, j, a;
    char b;

    printf("Input the character : ");
    scanf("%c", &b);
    printf("Input the number of rows : ");
    scanf("%d", &a);
    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("* ");
        }
    }
    printf("\n");
    for (i = 2; i < a; i++)
    {
        printf("* ");
        for (j = 2; j < a; j++)
        {
            printf("%c ", b);
        }
        printf("* ");
        printf("\n");
    }
    for (i = a; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            printf("* ");
        }
    }
    return 0;
}
/*output:
Input the character : a
Input the number of rows : 5
* * * * *
* a a a *
* a a a *
* a a a *
* * * * *
*/