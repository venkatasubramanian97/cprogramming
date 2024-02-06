/*Write a program in C to find the equilibrium index of an array*/
#include <stdio.h>
int main()
{
    int size;
    printf("Input the size of array : ");
    scanf("%d", &size);
    printf("Input %d element of the array :\n", size);
    int array[size], i, j, k, low_sum, hig_sum;
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
    printf("\nThe equilibrium index found at : ");
    for (i = size - 1; i >= 0; i--)
    {
        low_sum = 0;
        hig_sum = 0;
        for (j = i - 1; j >= 0; j--)
        {
            low_sum = low_sum + array[j];
        }
        for (k = i + 1; k < size; k++)
        {
            hig_sum = hig_sum + array[k];
        }
        if (low_sum == hig_sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
/*output:
Input the size of array : 8
Input 8 element of the array :
element - 0 : 0
element - 1 : -4
element - 2 : 7
element - 3 : -4
element - 4 : -2
element - 5 : 6
element - 6 : -3
element - 7 : 0
The given array is : 0 -4 7 -4 -2 6 -3 0
The equilibrium index found at : 7 5 0
*/