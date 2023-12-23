/* Write a C program to display the cube of the number up to an integer*/
/*#include <stdio.h>
int main()
{
    int i, n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
        i++;
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    do
    {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
        i++;
    } while (i <= n);
    return 0;
}*/

/*output:
Input number of terms : 7
Number is : 1 and cube of the 1 is : 1
Number is : 2 and cube of the 2 is : 8
Number is : 3 and cube of the 3 is : 27
Number is : 4 and cube of the 4 is : 64
Number is : 5 and cube of the 5 is : 125
Number is : 6 and cube of the 6 is : 216
Number is : 7 and cube of the 7 is : 343*/