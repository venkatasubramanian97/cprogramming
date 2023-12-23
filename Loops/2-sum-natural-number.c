/*Write a C program to compute the sum of the first 10 natural numbers*/
#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("The first 10 natural number is :\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
    }
    printf("The sum of 10 no is : %d", sum);
    return 0;
}

/*#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    printf("The first 10 natural number is :\n");
    while (i <= 10)
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
        i++;
    }
    printf("The sum of 10 no is : %d", sum);
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    printf("The first 10 natural number is :\n");
    do
    {
        printf("Number is : %d\n", i);
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("The sum of 10 no is : %d", sum);
    return 0;
}*/

/*output:
The first 10 natural number is :
Number is : 1
Number is : 2
Number is : 3
Number is : 4
Number is : 5
Number is : 6
Number is : 7
Number is : 8
Number is : 9
Number is : 10
The sum of 10 no is : 55*/