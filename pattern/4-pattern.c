/*write a c program tto print the foolowing pattern using for loop*/
#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the row value : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the row value : 4
1
12
123
1234

D:\c-program\pattren>.\output
Input the row value : 6
1
12
123
1234
12345
123456*/