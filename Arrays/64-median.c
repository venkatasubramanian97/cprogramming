/*Write a program in C to find the median of two sorted arrays of the same size*/
#include <stdio.h>
int main()
{
    int size, size1;
    printf("Input the array of the size : ");
    scanf("%d", &size);
    printf("Input %d element in the array1 :\n", size);
    int array1[size + size], array2[size], i, j, sorted, median = 0;
    for (i = 0; i < size; i++)
    {
        printf("elemrnt - %d : ", i);
        scanf("%d", &array1[i]);
    }
    printf("Input %d element in the array2 :\n", size);
    for (i = 0; i < size; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array2[i]);
    }
    printf("The given array-1 is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\nThe given array-2 is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array2[i]);
    }
    size1 = size + size;
    array1[size1];
    for (i = 0; i < size; i++)
    {
        array1[i + size] = array2[i];
    }
    for (i = 0; i < size1; i++)
    {
        for (j = i + 1; j < size1; j++)
        {
            if (array1[i] > array1[j])
            {
                sorted = array1[i];
                array1[i] = array1[j];
                array1[j] = sorted;
            }
        }
    }
    for (i = 0; i < size1; i++)
    {
        if (i == size - 1 || i == size)
        {
            median += array1[i];
        }
    }
    median = median / 2;
    printf("\nThe median of the 2 sorted array is : %d", median);
    return 0;
}
/*output:
Input the array of the size : 5
Input 5 element in the array :
elemrnt - 0 : 1
elemrnt - 1 : 5
elemrnt - 2 : 13
elemrnt - 3 : 24
elemrnt - 4 : 35
Input 5 element in the array :
element - 0 : 3
element - 1 : 8
element - 2 : 15
element - 3 : 17
element - 4 : 32
The given array-1 is : 1 5 13 24 35     
The given array-2 is : 3 8 15 17 32     
The median of the 2 sorted array is : 14
*/