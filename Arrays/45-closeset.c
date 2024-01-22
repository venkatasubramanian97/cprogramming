/*Write a program in C to find two elements whose sum is closest to zero*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the array of size : ");
    scanf("%d", &size);
    int array[size], i, j, a, b, c, d = 0;
    printf("Input %d element of the array :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The given array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    b = array[0];
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            a = 0;
            a = array[i] + array[j];
            if (b > 0)
            {
                if (b > a)
                {
                    if (-b <= a && a <= b)
                    {
                        b = a;
                    }
                }
            }
            if (b < 0)
            {
                if (b < a)
                {
                    if (b <= a && a <= -b)
                    {
                        b = a;
                    }
                }
            }
        }
    }
    printf("\nThe pair of element whose sum is minimum are :\n");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == b)
            {
                printf("[%d,%d]", array[i], array[j]);
            }
        }
    }
    return 0;
}
/*output:
Input the array of size : 5
Input 5 element of the array :
element - 0 : 38
element - 1 : 44
element - 2 : 63
element - 3 : -51
element - 4 : -35
The given array is : 38 44 63 -51 -35 
The pair of element whose sum is minimum are :
[38,-35]
*/