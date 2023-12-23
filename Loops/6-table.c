/* Write a C program to display the multiplication table for a given integer. (to use for loop)*/
#include <stdio.h>
int main()
{
    int i, j, mult;
    printf("Enter the number : ");
    scanf("%d", &j);
    for (i = 1; i <= 10; i++)
    {
        mult = i * j;
        printf("%d x %d = %d\n", i, j, mult);
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    int i = 1, j, mult;
    printf("Enter the number : ");
    scanf("%d", &j);
    while (i <= 10)
    {
        mult = i * j;
        printf("%d x %d = %d\n", i, j, mult);
        i++;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 1, j, mult;
    printf("Enter the number : ");
    scanf("%d", &j);
    do
    {
        mult = i * j;
        printf("%d x %d = %d\n", i, j, mult);
        i++;
    } while (i <= 10);
    return 0;
}*/

/*output:
Enter the number : 2
1 x 2 = 2
2 x 2 = 4
3 x 2 = 6
4 x 2 = 8
5 x 2 = 10
6 x 2 = 12
7 x 2 = 14
8 x 2 = 16
9 x 2 = 18
10 x 2 = 20*/