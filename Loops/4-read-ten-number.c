/* Write a C program to read 10 numbers from the keyboard and find their sum and average*/
/*#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    float average;
    printf("Input the 10 number :\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number-%d : ", i);
        scanf("%d", &j);
        sum = sum + j;
    }
    printf("The sum of 10 no is : %d\n", sum);
    average = sum / 10.0;
    printf("The average is : %f", average);
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 1, j, sum = 0;
    float average;
    printf("Input the 10 number :\n");
    while (i <= 10)
    {
        printf("Number-%d : ", i);
        scanf("%d", &j);
        sum = sum + j;
        i++;
    }
    printf("The sum of 10 no is : %d\n", sum);
    average = sum / 10.0;
    printf("The average is : %f", average);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i = 1, j, sum = 0;
    float average;
    printf("Input the 10 number :\n");
    do
    {
        printf("Number-%d : ", i);
        scanf("%d", &j);
        sum = sum + j;
        i++;
    } while (i <= 10);
    printf("The sum of 10 no is : %d\n", sum);
    average = sum / 10.0;
    printf("The average is : %f", average);
    return 0;
}

/*output:
Input the 10 number :
Number-1 : 1
Number-2 : 2
Number-3 : 3
Number-4 : 4
Number-5 : 5
Number-6 : 6
Number-7 : 7
Number-8 : 8
Number-9 : 9
Number-10 : 10
The sum of 10 no is : 55
The average is : 5.500000*/
